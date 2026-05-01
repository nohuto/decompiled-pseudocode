/*
 * XREFs of ?SetLinkFlags@CPinnedList@@SAKPEAUIShellLinkW@@KK@Z @ 0x18075B820
 * Callers:
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18075CDB0 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedList::SetLinkFlags(struct IShellLinkW *a1)
{
  __int64 v1; // rdx
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0;
  if ( ((__int64 (__fastcall *)(struct IShellLinkW *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_45e2b4ae_b1c3_11d0_b92f_00a0c90312e1,
         &v3) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 48LL))(v3, &v4) >= 0 )
    {
      v1 = v4;
      LODWORD(v1) = v4 | 0x800000;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, v1);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v4;
}
