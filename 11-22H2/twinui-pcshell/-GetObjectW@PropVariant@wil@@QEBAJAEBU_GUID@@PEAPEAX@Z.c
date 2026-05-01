/*
 * XREFs of ?GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1806A1B2C
 * Callers:
 *     ?GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z @ 0x1806A156C (-GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z.c)
 *     ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1806A2770 (-GetUnpackagedAppPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::PropVariant::GetObjectW(wil::PropVariant *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *); // rcx
  __int64 (__fastcall ***v5)(_QWORD, GUID *); // rcx

  *a3 = 0LL;
  result = 2147500034LL;
  if ( *(_WORD *)this == 13 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *))*((_QWORD *)this + 1);
    if ( v4 )
      return (**v4)(v4, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe);
  }
  else if ( *(_WORD *)this == 66 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *))*((_QWORD *)this + 1);
    if ( v5 )
      return (**v5)(v5, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe);
  }
  return result;
}
