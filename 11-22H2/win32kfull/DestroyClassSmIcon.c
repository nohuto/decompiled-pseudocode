/*
 * XREFs of DestroyClassSmIcon @ 0x1C00EB5B0
 * Callers:
 *     DestroyClass @ 0x1C00EAB74 (DestroyClass.c)
 *     xxxSetClassIcon @ 0x1C0220650 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C022DD3C (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002B6EC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

__int64 __fastcall DestroyClassSmIcon(__int64 **a1)
{
  __int64 v3; // rcx
  struct tagCURSOR *v4; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(**a1 + 8) + 6LL) & 0x20) == 0 )
    return 0LL;
  v3 = **a1;
  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 56LL) = 0LL;
  v4 = (struct tagCURSOR *)HMAssignmentUnlock(v3 + 112);
  if ( v4 )
    _DestroyCursor(v4, 0);
  *(_WORD *)(*(_QWORD *)(**a1 + 8) + 6LL) &= ~0x20u;
  return 1LL;
}
