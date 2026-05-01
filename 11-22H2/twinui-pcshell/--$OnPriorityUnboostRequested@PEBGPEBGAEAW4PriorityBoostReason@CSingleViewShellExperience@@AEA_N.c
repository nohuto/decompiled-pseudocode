/*
 * XREFs of ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x1800B6124
 * Callers:
 *     ?UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x1800B588C (-UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@45@Z @ 0x18002BD90 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U3@@-$_tlgWrit.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

__int64 __fastcall SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
        __int64 *a1,
        __int64 *a2,
        _DWORD *a3,
        char *a4,
        int *a5,
        char *a6)
{
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  int v14; // ecx
  char v15; // [rsp+50h] [rbp-20h] BYREF
  char v16; // [rsp+51h] [rbp-1Fh] BYREF
  int v17; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h] BYREF
  __int64 v20; // [rsp+68h] [rbp-8h] BYREF

  result = wil::details::static_lazy<SingleViewExperienceLogging>::get(
             a1,
             _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(result + 8) > 5u )
  {
    result = tlgKeywordOn(*(_QWORD *)(result + 8), 0x200000000000LL);
    if ( (_BYTE)result )
    {
      v15 = *a6;
      v14 = *a5;
      v16 = *a4;
      LODWORD(v18) = *a3;
      v19 = *a2;
      v20 = *a1;
      v17 = v14;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
               v13,
               (int)&dword_18087CA3D,
               v11,
               v12,
               (const WCHAR **)&v20,
               (const WCHAR **)&v19,
               (__int64)&v18,
               (__int64)&v16,
               (__int64)&v17,
               (__int64)&v15);
    }
  }
  return result;
}
