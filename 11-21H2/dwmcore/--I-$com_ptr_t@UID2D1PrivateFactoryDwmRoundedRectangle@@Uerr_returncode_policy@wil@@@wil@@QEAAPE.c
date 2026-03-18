/*
 * XREFs of ??I?$com_ptr_t@UID2D1PrivateFactoryDwmRoundedRectangle@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUID2D1PrivateFactoryDwmRoundedRectangle@@XZ @ 0x180104ED4
 * Callers:
 *     ?EnsureD2DFactory@CD2DFactory@@QEAAJXZ @ 0x180025F18 (-EnsureD2DFactory@CD2DFactory@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<ID2D1PrivateFactoryDwmRoundedRectangle,wil::err_returncode_policy>::operator&(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
