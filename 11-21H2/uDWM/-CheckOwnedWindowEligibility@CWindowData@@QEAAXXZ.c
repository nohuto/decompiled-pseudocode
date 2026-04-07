/*
 * XREFs of ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001F920
 * Callers:
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18001F2E4 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001F7F8 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180023CF0 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 * Callees:
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18001DDE4 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001F97C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 */

void __fastcall CWindowData::CheckOwnedWindowEligibility(CWindowData *this)
{
  __int64 v1; // rax
  bool v2; // bl

  v1 = *((_QWORD *)this + 75);
  v2 = 0;
  if ( v1 && *(char *)(v1 + 665) < 0 )
    v2 = CWindowData::ShouldBeIncludedInOwnerSWR(this) != 0;
  if ( (*((_BYTE *)this + 666) & 1) != v2 )
    CWindowData::UpdateOwnerLists(this, !(*((_BYTE *)this + 666) & 1));
}
