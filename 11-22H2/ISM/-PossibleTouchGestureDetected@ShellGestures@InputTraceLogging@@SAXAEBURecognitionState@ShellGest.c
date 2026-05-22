/*
 * XREFs of ?PossibleTouchGestureDetected@ShellGestures@InputTraceLogging@@SAXAEBURecognitionState@ShellGesturesRecognizer@@0@Z @ 0x18017DA50
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D310 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x1800B2B38 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 */

void __fastcall InputTraceLogging::ShellGestures::PossibleTouchGestureDetected(
        const struct ShellGesturesRecognizer::RecognitionState *a1,
        const struct ShellGesturesRecognizer::RecognitionState *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  const char *v12; // rax
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v4 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v4 > 4u
    && (*(_DWORD *)(v4 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v4 + 24) & 0x200LL) == *(_QWORD *)(v4 + 24) )
  {
    v6 = *((_DWORD *)a1 + 1);
    v16 = *((_QWORD *)a2 + 4);
    v17 = *((_QWORD *)a2 + 3);
    v13 = *((_QWORD *)a2 + 2);
    v14 = *((_QWORD *)a2 + 1);
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                if ( v11 == 1 )
                  v12 = "DepartingContacts";
                else
                  v12 = "UNKNOWN";
              }
              else
              {
                v12 = "ContactSpread";
              }
            }
            else
            {
              v12 = "MultiContactDistance";
            }
          }
          else
          {
            v12 = "MultiContactTime";
          }
        }
        else
        {
          v12 = "SingleContactDistance";
        }
      }
      else
      {
        v12 = "SingleContactTime";
      }
    }
    else
    {
      v12 = "None";
    }
    v15 = (__int64)v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v4,
      byte_180236A7C,
      v4,
      v5,
      (const unsigned __int16 **)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v17,
      (__int64)&v16);
  }
}
