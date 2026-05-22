/*
 * XREFs of ?Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorState@@W4ContextualProcessorDecision@@2_NPEBUIInputTarget@@4444@Z @ 0x1801CDA7C
 * Callers:
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x1801CF3D8 (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800DAE5C (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ?ProcessorDecisionToString@InputTraceLogging@@CAPEBDW4ContextualProcessorDecision@@@Z @ 0x18017DB94 (-ProcessorDecisionToString@InputTraceLogging@@CAPEBDW4ContextualProcessorDecision@@@Z.c)
 *     ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x1801CBBBC (-ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U2@U2@U3@U1@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5444535555@Z @ 0x1801CBE2C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@.c)
 */

int __fastcall InputTraceLogging::ContextualProcessing::Decision(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned __int8 a7,
        __int64 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        unsigned __int8 a12)
{
  __int64 v16; // rax
  __int64 v17; // r10
  const char *v18; // rax
  int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r10
  int v24; // [rsp+98h] [rbp-49h] BYREF
  int v25; // [rsp+9Ch] [rbp-45h] BYREF
  int v26; // [rsp+A0h] [rbp-41h] BYREF
  int v27; // [rsp+A4h] [rbp-3Dh] BYREF
  int v28; // [rsp+A8h] [rbp-39h] BYREF
  int v29; // [rsp+ACh] [rbp-35h] BYREF
  int v30; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-29h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-21h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-11h] BYREF
  __int64 v35; // [rsp+D8h] [rbp-9h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-1h] BYREF
  __int64 v37; // [rsp+E8h] [rbp+7h] BYREF

  v16 = (__int64)wil::details::static_lazy<InputTraceLogging>::get(
                   a1,
                   _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v17 = *(_QWORD *)(v16 + 8);
  if ( *(_DWORD *)v17 > 4u )
  {
    LODWORD(v16) = *(_DWORD *)(v17 + 16);
    if ( (v16 & 0x400) != 0 )
    {
      v16 = *(_QWORD *)(v17 + 24) & 0x400LL;
      if ( v16 == *(_QWORD *)(v17 + 24) )
      {
        v24 = a12;
        v25 = a11;
        v26 = a10;
        v27 = a9;
        v31 = a8;
        v28 = a7;
        v32 = (__int64)InputTraceLogging::ProcessorStateToString(a6);
        v33 = (__int64)InputTraceLogging::ProcessorDecisionToString(a5);
        v18 = InputTraceLogging::ProcessorStateToString(a4);
        v19 = *(_DWORD *)a1;
        v34 = (__int64)v18;
        v30 = *(_DWORD *)(a1 + 4);
        v29 = a3;
        v35 = a2;
        v36 = (__int64)InputTraceLogging::InputTypeToString(v19);
        v37 = *(_QWORD *)(a1 + 16);
        LODWORD(v16) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                         v22,
                         (unsigned __int8 *)dword_180237AF7,
                         v20,
                         v21,
                         (__int64)&v37,
                         (const unsigned __int16 **)&v36,
                         (__int64)&v30,
                         (const WCHAR **)&v35,
                         (__int64)&v29,
                         (const unsigned __int16 **)&v34,
                         (const unsigned __int16 **)&v33,
                         (const unsigned __int16 **)&v32,
                         (__int64)&v28,
                         (__int64)&v31,
                         (__int64)&v27,
                         (__int64)&v26,
                         (__int64)&v25,
                         (__int64)&v24);
      }
    }
  }
  return v16;
}
