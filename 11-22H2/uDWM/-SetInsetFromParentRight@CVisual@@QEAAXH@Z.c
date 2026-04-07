/*
 * XREFs of ?SetInsetFromParentRight@CVisual@@QEAAXH@Z @ 0x180105B38
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18002ADE0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetInsetFromParentRight(CVisual *this, int a2)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 35) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 35) = a2;
    (*(void (__fastcall **)(CVisual *, __int64))(v2 + 24))(this, 2LL);
  }
}
