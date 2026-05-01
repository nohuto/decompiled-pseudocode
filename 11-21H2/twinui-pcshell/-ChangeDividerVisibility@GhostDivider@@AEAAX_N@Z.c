/*
 * XREFs of ?ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z @ 0x18052BB1C
 * Callers:
 *     ?Destroy@GhostDivider@@UEAAXXZ @ 0x18052BC20 (-Destroy@GhostDivider@@UEAAXXZ.c)
 *     ?Solidify@GhostDivider@@UEAAXXZ @ 0x18052C860 (-Solidify@GhostDivider@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIGhostDivider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIGhostDivider@@@Z @ 0x18052BA6C (--4-$com_ptr_t@UIGhostDivider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIGhostDivider@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GhostDivider::ChangeDividerVisibility(GhostDivider *this, unsigned __int8 a2)
{
  int v4; // edi
  int v5; // r14d
  __int64 v6; // rcx
  int pvAttribute; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2 ^ 1;
  if ( !a2 )
    wil::com_ptr_t<IGhostDivider,wil::err_exception_policy>::operator=((__int64 *)this + 8, (__int64)this);
  v5 = DwmpBeginTransitionRequest((unsigned int)(v4 + 4));
  if ( v5 >= 0 )
    v5 = DwmpTransitionWindow(*((_QWORD *)this + 3), (v4 + 25) | 0x440000u);
  pvAttribute = v4;
  DwmSetWindowAttribute(*((HWND *)this + 3), 0xDu, &pvAttribute, 4u);
  if ( v5 < 0 )
  {
    if ( !a2 )
    {
      DestroyWindow(*((HWND *)this + 3));
      v6 = *((_QWORD *)this + 8);
      if ( v6 )
      {
        *((_QWORD *)this + 8) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
  }
  else
  {
    DwmpEndTransitionRequest((unsigned int)(v4 + 4));
  }
}
