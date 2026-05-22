/*
 * XREFs of ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z @ 0x18004E03C
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x18004E010 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x18004E0D0 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 *     ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x18004E154 (-ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ?IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z @ 0x18004E210 (-IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z.c)
 *     ?ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z @ 0x18004E230 (-ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800A0520 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x1800FDC4C (-ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x1800FDDC0 (-ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z.c)
 *     ?ProcessShapeNotification@CursorNotificationProcessor@@AEAAJPEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@I@Z @ 0x1800FDE44 (-ProcessShapeNotification@CursorNotificationProcessor@@AEAAJPEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@.c)
 */

__int64 __fastcall CursorNotificationProcessor::OnMitMessageReceived(
        CursorNotificationProcessor *this,
        const struct _MIT_CURSOR_MANAGEMENT_MESSAGE *a2,
        unsigned int a3)
{
  const char *v6; // r9
  __int64 v7; // r10
  const char *v9; // rax
  CursorNotificationProcessor *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v7 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)this,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 8) != 0 && (*(_QWORD *)(v7 + 24) & 8LL) == *(_QWORD *)(v7 + 24) )
  {
    if ( *(_DWORD *)a2 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 1:
          v9 = "Position";
          break;
        case 2:
          v9 = "AppClip";
          break;
        case 3:
          v9 = "ShellClip";
          break;
        case 4:
          v9 = "SuppressCursor";
          break;
        case 5:
          v9 = "Orientation";
          break;
        default:
          v9 = "UNKNOWN";
          break;
      }
    }
    else
    {
      v9 = "Visibility";
    }
    v12 = (__int64)v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v7,
      (__int64)&v12);
  }
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( CursorNotificationProcessor::IsTimestampNewest(this, *((_QWORD *)a2 + 2)) )
      {
        InputTraceLogging::ISM::ReceiveCursorPos(*((_QWORD *)a2 + 2), (const struct tagPOINT *)a2 + 1);
        CursorNotificationProcessor::ProcessPositionChangedNotification(this, (const struct tagPOINT *)a2 + 1);
      }
    }
    else if ( *(_DWORD *)a2 == 2 )
    {
      CursorNotificationProcessor::ProcessAppClipChangedNotification(this, (const struct tagRECT *)((char *)a2 + 8));
    }
    else if ( *(_DWORD *)a2 != 3 && *(_DWORD *)a2 != 4 )
    {
      v10 = (CursorNotificationProcessor *)(unsigned int)(*(_DWORD *)a2 - 5);
      if ( *(_DWORD *)a2 == 5 )
      {
        CursorNotificationProcessor::ProcessOrientationChangeNotification(v10, *((double *)a2 + 1));
      }
      else
      {
        if ( *(_DWORD *)a2 != 6 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x97,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cu"
                          "rsornotificationprocessor.cpp",
            v6);
        CursorNotificationProcessor::ProcessShapeNotification(v10, a2, a3);
      }
    }
  }
  else
  {
    CursorNotificationProcessor::ProcessVisibilityChangedNotification(this, *((_DWORD *)a2 + 2) != 0);
  }
  return 0LL;
}
