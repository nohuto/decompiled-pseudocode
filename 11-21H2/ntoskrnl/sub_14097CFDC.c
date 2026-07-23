/*
 * XREFs of sub_14097CFDC @ 0x14097CFDC
 * Callers:
 *     sub_1405AA5E8 @ 0x1405AA5E8 (sub_1405AA5E8.c)
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 *     sub_14097BBE0 @ 0x14097BBE0 (sub_14097BBE0.c)
 *     sub_14097CC1C @ 0x14097CC1C (sub_14097CC1C.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402A3D50 (ExCleanupAutoExpandPushLock.c)
 *     sub_14097CF84 @ 0x14097CF84 (sub_14097CF84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14097CFDC(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  if ( (*(_DWORD *)(a2 + 8) & 2) != 0 )
    ExCleanupAutoExpandPushLock(a2 + 64);
  sub_14097CF84(a1, (_QWORD *)(a2 + 24));
  v4 = *(void **)(a2 + 88);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag((PVOID)a2, 0);
}
