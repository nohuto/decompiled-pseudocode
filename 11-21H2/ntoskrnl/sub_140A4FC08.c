/*
 * XREFs of sub_140A4FC08 @ 0x140A4FC08
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_140A4E8E4 @ 0x140A4E8E4 (sub_140A4E8E4.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14038DE68 @ 0x14038DE68 (sub_14038DE68.c)
 */

PVOID __fastcall sub_140A4FC08(__int64 a1)
{
  PVOID v1; // rbx
  struct _MDL *v2; // rax

  dword_140C548A4 += a1;
  v1 = 0LL;
  v2 = sub_14038DE68(a1);
  if ( !v2
    || (v1 = MmMapLockedPagesSpecifyCache(v2, 0, MmCached, 0LL, 1u, 0x40000020u)) == 0LL
    || *(int *)(qword_140C22800 + 188) < 0 )
  {
    *(_DWORD *)(qword_140C22800 + 188) = -1073741670;
  }
  return v1;
}
