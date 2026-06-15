/*
 * XREFs of GetContainerId @ 0x18001FDF0
 * Callers:
 *     SearchForHeadphones @ 0x18001FC40 (SearchForHeadphones.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x18002032C (-DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18003685C (-OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     IsInternalFormFactorOf @ 0x180155F70 (IsInternalFormFactorOf.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetContainerId(__int64 a1, __int64 *a2, _OWORD *a3)
{
  __int64 v4; // rax
  int v5; // ebx
  char v6; // bl
  __int64 v8; // rdx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  v4 = *a2;
  *(_OWORD *)pvar = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, const PROPERTYKEY *, PROPVARIANT *))(v4 + 40))(
         a2,
         &PKEY_Device_ContainerId,
         pvar);
  if ( v5 < 0 )
  {
    v8 = 80LL;
  }
  else
  {
    if ( LOWORD(pvar[0]) == 72 )
    {
      v6 = 1;
      *a3 = *(_OWORD *)pvar[1];
    }
    else
    {
      v6 = 0;
    }
    PropVariantClear(pvar);
    if ( v6 )
      return 0LL;
    v5 = -2147024894;
    v8 = 88LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v5,
    (int)pvar[0]);
  return (unsigned int)v5;
}
