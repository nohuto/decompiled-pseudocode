/*
 * XREFs of ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z @ 0x180043E9C
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x180043E70 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x180043F34 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 *     ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x180044054 (-ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ?ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z @ 0x180044114 (-ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800892B8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x1800E4E4C (-ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x1800E4FA8 (-ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z.c)
 *     ?ProcessShapeNotification@CursorNotificationProcessor@@AEAAJPEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@I@Z @ 0x1800E502C (-ProcessShapeNotification@CursorNotificationProcessor@@AEAAJPEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@.c)
 */

__int64 __fastcall CursorNotificationProcessor::OnMitMessageReceived(
        CursorNotificationProcessor *this,
        const struct tagPOINT *a2,
        unsigned int a3)
{
  const char *v6; // r9
  __int64 v7; // r10
  signed __int64 v8; // rcx
  const char *v10; // rax
  CursorNotificationProcessor *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v7 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)this,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 8) != 0 && (*(_QWORD *)(v7 + 24) & 8LL) == *(_QWORD *)(v7 + 24) )
  {
    if ( a2->x )
    {
      switch ( a2->x )
      {
        case 1:
          v10 = "Position";
          break;
        case 2:
          v10 = "AppClip";
          break;
        case 3:
          v10 = "ShellClip";
          break;
        case 4:
          v10 = "SuppressCursor";
          break;
        case 5:
          v10 = "Orientation";
          break;
        default:
          v10 = "UNKNOWN";
          break;
      }
    }
    else
    {
      v10 = "Visibility";
    }
    v13 = (__int64)v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v7,
      (__int64)&v13);
  }
  switch ( a2->x )
  {
    case 0:
      CursorNotificationProcessor::ProcessVisibilityChangedNotification(this, a2[1].x != 0);
      return 0LL;
    case 1:
      v8 = (signed __int64)a2[2];
      if ( !v8 )
      {
LABEL_7:
        InputTraceLogging::ISM::ReceiveCursorPos(v8, a2 + 1);
        CursorNotificationProcessor::ProcessPositionChangedNotification(this, a2 + 1);
        return 0LL;
      }
      if ( v8 > *((_QWORD *)this + 5) )
      {
        *((_QWORD *)this + 5) = v8;
        v8 = (signed __int64)a2[2];
        goto LABEL_7;
      }
      break;
    case 2:
      CursorNotificationProcessor::ProcessAppClipChangedNotification(this, (const struct tagRECT *)&a2[1]);
      break;
    default:
      if ( a2->x != 3 && a2->x != 4 )
      {
        v11 = (CursorNotificationProcessor *)(unsigned int)(a2->x - 5);
        if ( a2->x == 5 )
        {
          CursorNotificationProcessor::ProcessOrientationChangeNotification(v11, *(double *)&a2[1]);
        }
        else
        {
          if ( a2->x != 6 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x97,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\"
                            "cursornotificationprocessor.cpp",
              v6);
          CursorNotificationProcessor::ProcessShapeNotification(
            v11,
            (const struct _MIT_CURSOR_MANAGEMENT_MESSAGE *)a2,
            a3);
        }
      }
      break;
  }
  return 0LL;
}
