/*
 * XREFs of ??4?$com_ptr_t@VPenDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVPenDeviceManager@@@Z @ 0x1800E4910
 * Callers:
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E4A30 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<PenDeviceManager,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(__int64))(a2 + 16))(a2 + 16);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 8LL))(v3 + 16);
  return a1;
}
