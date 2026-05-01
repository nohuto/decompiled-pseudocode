/*
 * XREFs of DllCanUnloadNow @ 0x180002350
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009498 @ 0x180009498 (sub_180009498.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  __int64 v0; // rax

  v0 = sub_180009498();
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 24LL))(v0) != 0;
}
