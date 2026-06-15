/*
 * XREFs of GetContainerId @ 0x180053A60
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x1800524A4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800535CC (-OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     IsInternalFormFactorOf @ 0x18014EC10 (IsInternalFormFactorOf.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
    v8 = 83LL;
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
    v8 = 91LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v5,
    (int)pvar[0]);
  return (unsigned int)v5;
}
