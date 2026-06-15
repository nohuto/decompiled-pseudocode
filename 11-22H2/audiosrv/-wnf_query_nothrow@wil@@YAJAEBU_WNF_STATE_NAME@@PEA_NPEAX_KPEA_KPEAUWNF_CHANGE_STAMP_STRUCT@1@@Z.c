/*
 * XREFs of ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1800EE85C
 * Callers:
 *     ?GetDiscoveredEffects@CAudioStream@@AEAAJAEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@@Z @ 0x1800EBDE4 (-GetDiscoveredEffects@CAudioStream@@AEAAJAEAV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@@.c)
 *     ?GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAG@Z @ 0x180107288 (-GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800D4E24 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow(wil *this, const struct _WNF_STATE_NAME *a2, bool *a3, void *a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = a5;
  LOBYTE(a2->Data[0]) = 0;
  *v5 = 0LL;
  LODWORD(a5) = (_DWORD)a4;
  v7 = NtQueryWnfStateData(this, 0LL, 0LL, &v10, a3, &a5);
  if ( v7 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x2EF,
             (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
             (const char *)(unsigned int)v7);
  LOBYTE(a2->Data[0]) = v10 != 0;
  *v5 = (unsigned int)a5;
  return 0LL;
}
