/*
 * XREFs of ??1?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE440
 * Callers:
 *     _MPCManager::OnPeerConnected_::_1_::dtor$0 @ 0x1800B0D0F (_MPCManager--OnPeerConnected_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>::~com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
