/*
 * XREFs of ??1?$com_ptr_t@VICapabilitiesContributorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801048E0
 * Callers:
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180051800 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<ICapabilitiesContributorTarget,wil::err_returncode_policy>::~com_ptr_t<ICapabilitiesContributorTarget,wil::err_returncode_policy>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    v1 = *(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
