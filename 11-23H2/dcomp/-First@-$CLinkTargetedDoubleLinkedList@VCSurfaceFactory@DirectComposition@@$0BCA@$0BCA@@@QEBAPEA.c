/*
 * XREFs of ?First@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@XZ @ 0x18009AD9C
 * Callers:
 *     ?Flush@CDevice@DirectComposition@@UEAAJXZ @ 0x180024970 (-Flush@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::First(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = a1 + 8;
  v2 = *(_QWORD *)(a1 + 8);
  result = v2 - 288;
  if ( v2 == v1 )
    return 0LL;
  return result;
}
