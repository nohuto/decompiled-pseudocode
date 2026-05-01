/*
 * XREFs of ?GetStoreAppPFN@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18012925C
 * Callers:
 *     ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x1801290F4 (-IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_25771992@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801453AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_25771992@@@de.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaWNF_24838259@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164B98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaWNF_24838259@@@details@w.c)
 *     _invalid_parameter_noinfo @ 0x180188E82 (_invalid_parameter_noinfo.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     WINRT_IMPL_HeapAlloc @ 0x180189368 (WINRT_IMPL_HeapAlloc.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x180189398 (WINRT_IMPL_GetProcessHeap.c)
 */

char **__fastcall CortanaExperienceHelpers::GetStoreAppPFN(char **a1)
{
  __int64 v2; // rdx
  HANDLE ProcessHeap; // rax
  __int64 v4; // rdx
  char *v5; // rbx
  __int64 v6; // r8
  _OWORD *v7; // rcx
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_25771992>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_25771992>::GetImpl'::`2'::impl,
    0LL);
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaWNF_24838259>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_CortanaWNF_24838259>::GetImpl'::`2'::impl,
    v2);
  ProcessHeap = WINRT_IMPL_GetProcessHeap();
  v5 = (char *)WINRT_IMPL_HeapAlloc(ProcessHeap, 0, 0x6AuLL);
  if ( !v5 )
  {
    pExceptionObject[2] = 0LL;
    pExceptionObject[1] = "bad allocation";
    pExceptionObject[0] = &std::bad_alloc::`vftable';
    throw (std::bad_alloc *)pExceptionObject;
  }
  *(_DWORD *)v5 = 0;
  *((_DWORD *)v5 + 1) = 37;
  v7 = v5 + 28;
  *((_QWORD *)v5 + 2) = v5 + 28;
  _InterlockedExchange((volatile __int32 *)v5 + 6, 1);
  *((_WORD *)v5 + 51) = 0;
  if ( v5 == (char *)-28LL )
  {
    *(_DWORD *)_o__errno(v7, v4, v6) = 22;
    invalid_parameter_noinfo();
  }
  else
  {
    *v7 = *(_OWORD *)L"Microsoft.549981C3F5F10_8wekyb3d8bbwe";
    *(_OWORD *)(v5 + 44) = *(_OWORD *)L"t.549981C3F5F10_8wekyb3d8bbwe";
    *(_OWORD *)(v5 + 60) = *(_OWORD *)L"C3F5F10_8wekyb3d8bbwe";
    *(_OWORD *)(v5 + 76) = *(_OWORD *)L"8wekyb3d8bbwe";
    *(_QWORD *)(v5 + 92) = *(_QWORD *)L"8bbwe";
    *((_WORD *)v5 + 50) = aMicrosoft54998[36];
  }
  *a1 = v5;
  return a1;
}
