/*
 * XREFs of ?StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4GestureRecognizerState@@1W4GestureOperationState@@@Z @ 0x1800749F0
 * Callers:
 *     ?OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800746D0 (-OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@444@Z @ 0x180001A8C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ?GestureRecognizerStateToString@InputTraceLogging@@CAPEBDW4GestureRecognizerState@@@Z @ 0x1800742A4 (-GestureRecognizerStateToString@InputTraceLogging@@CAPEBDW4GestureRecognizerState@@@Z.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B4E40 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?ProcessorDecisionToString@InputTraceLogging@@CAPEBDW4ContextualProcessorDecision@@@Z @ 0x18017DB94 (-ProcessorDecisionToString@InputTraceLogging@@CAPEBDW4ContextualProcessorDecision@@@Z.c)
 */

__int64 __fastcall InputTraceLogging::ShellGestures::StaleActiveContacts(
        int a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6)
{
  __int64 result; // rax
  __int64 v11; // r11
  int v12; // r10d
  const char *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r11d
  int v17; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h] BYREF
  __int64 v22; // [rsp+70h] [rbp-10h] BYREF

  result = (__int64)InputTraceLogging::Provider();
  v11 = result;
  if ( *(_DWORD *)result > 4u )
  {
    v12 = *(_DWORD *)(result + 16);
    result = 512LL;
    if ( (v12 & 0x200) != 0 && (*(_QWORD *)(v11 + 24) & 0x200LL) == *(_QWORD *)(v11 + 24) )
    {
      if ( a6 )
      {
        switch ( a6 )
        {
          case 1:
            v13 = "GestureStarted";
            break;
          case 2:
            v13 = "GestureInProgress";
            break;
          case 3:
            v13 = "GestureCompleted";
            break;
          case 4:
            v13 = "GestureCancelled";
            break;
          default:
            v13 = "UNKNOWN";
            break;
        }
      }
      else
      {
        v13 = "None";
      }
      v19 = (__int64)v13;
      v20 = (__int64)InputTraceLogging::GestureRecognizerStateToString(a5);
      v21 = (__int64)InputTraceLogging::GestureRecognizerStateToString(a4);
      v22 = InputTraceLogging::ProcessorDecisionToString(a3);
      v17 = a2;
      v18 = a1;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
               v16,
               (int)&dword_180236B1A,
               v14,
               v15,
               (__int64)&v18,
               (__int64)&v17,
               (const unsigned __int16 **)&v22,
               (const unsigned __int16 **)&v21,
               (const unsigned __int16 **)&v20,
               (const unsigned __int16 **)&v19);
    }
  }
  return result;
}
