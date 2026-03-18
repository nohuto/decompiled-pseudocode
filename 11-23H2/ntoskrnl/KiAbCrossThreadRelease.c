/*
 * XREFs of KiAbCrossThreadRelease @ 0x1403CAD3C
 * Callers:
 *     KeAbCrossThreadRelease @ 0x1403CAD08 (KeAbCrossThreadRelease.c)
 *     KeAbCrossThreadDelete @ 0x140579570 (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14024B550 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140317E40 (KiAbThreadRemoveBoostsSlow.c)
 */

unsigned __int8 __fastcall KiAbCrossThreadRelease(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v6; // r8
  unsigned __int8 result; // al

  KiAbEntryRemoveFromTree(a2);
  v6 = *(unsigned int *)(a2 + 88);
  *(_DWORD *)(a2 + 88) = 0;
  *(_BYTE *)(a2 + 18) = 0;
  if ( (_DWORD)v6 )
    KiAbThreadRemoveBoostsSlow(a3, a1, v6);
  *(_QWORD *)a2 = 0LL;
  result = 1 << *(_BYTE *)(a2 + 16);
  _InterlockedOr8((volatile signed __int8 *)(a3 + 870), result);
  return result;
}
