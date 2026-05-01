/*
 * XREFs of ??$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x18002BCA8
 * Callers:
 *     ?BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x18002BB00 (-BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@45@Z @ 0x18002BD90 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U3@@-$_tlgWrit.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

__int64 __fastcall SingleViewExperienceTelemetry::OnPriorityBoostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
        __int64 *a1,
        __int64 *a2,
        _DWORD *a3,
        char *a4,
        int *a5,
        char *a6)
{
  __int64 result; // rax
  int v11; // r10d
  int v12; // ecx
  char v13; // [rsp+50h] [rbp-20h] BYREF
  char v14; // [rsp+51h] [rbp-1Fh] BYREF
  int v15; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  __int64 v18; // [rsp+68h] [rbp-8h] BYREF

  result = wil::details::static_lazy<SingleViewExperienceLogging>::get(
             a1,
             _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(result + 8) > 5u )
  {
    result = tlgKeywordOn(*(_QWORD *)(result + 8), 0x200000000000LL);
    if ( (_BYTE)result )
    {
      v13 = *a6;
      v12 = *a5;
      v14 = *a4;
      LODWORD(v16) = *a3;
      v17 = *a2;
      v18 = *a1;
      v15 = v12;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
               v11,
               (int)&dword_18087C999,
               (__int64)&v18,
               (__int64)&v17,
               (__int64)&v16,
               (__int64)&v14,
               (__int64)&v15,
               (__int64)&v13);
    }
  }
  return result;
}
