/*
 * XREFs of ?ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z @ 0x1805E6A7C
 * Callers:
 *     ?Destroy@GhostDivider@@UEAAXXZ @ 0x1805E6B80 (-Destroy@GhostDivider@@UEAAXXZ.c)
 *     ?Solidify@GhostDivider@@UEAAXXZ @ 0x1805E7680 (-Solidify@GhostDivider@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIGhostDivider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIGhostDivider@@@Z @ 0x1805E69CC (--4-$com_ptr_t@UIGhostDivider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIGhostDivider@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GhostDivider::ChangeDividerVisibility(GhostDivider *this, unsigned __int8 a2)
{
  int v4; // esi
  __int64 *v5; // rbx
  int v6; // r15d
  __int64 v7; // rcx
  int pvAttribute; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2 ^ 1;
  v5 = (__int64 *)((char *)this + 64);
  if ( !a2 )
    wil::com_ptr_t<IGhostDivider,wil::err_exception_policy>::operator=((__int64 *)this + 8, (__int64)this);
  v6 = DwmpBeginTransitionRequest((unsigned int)(v4 + 4));
  if ( v6 >= 0 )
    v6 = DwmpTransitionWindow(*((_QWORD *)this + 3), (v4 + 25) | 0x440000u);
  pvAttribute = v4;
  DwmSetWindowAttribute(*((HWND *)this + 3), 0xDu, &pvAttribute, 4u);
  if ( v6 < 0 )
  {
    if ( !a2 )
    {
      DestroyWindow(*((HWND *)this + 3));
      v7 = *v5;
      if ( *v5 )
      {
        *v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
  else
  {
    DwmpEndTransitionRequest((unsigned int)(v4 + 4));
  }
}
