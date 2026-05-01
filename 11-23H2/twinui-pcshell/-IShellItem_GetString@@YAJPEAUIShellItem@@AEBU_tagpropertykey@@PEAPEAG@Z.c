/*
 * XREFs of ?IShellItem_GetString@@YAJPEAUIShellItem@@AEBU_tagpropertykey@@PEAPEAG@Z @ 0x18074EB28
 * Callers:
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18074FDD0 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IShellItem_GetString(struct IShellItem *a1, const struct _tagpropertykey *a2, unsigned __int16 **a3)
{
  int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IShellItem *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93,
         &v6);
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, unsigned __int16 **))(*(_QWORD *)v6 + 136LL))(
           v6,
           &PKEY_AppUserModel_ID,
           a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v4;
}
