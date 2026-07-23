/*
 * XREFs of sub_14097FD48 @ 0x14097FD48
 * Callers:
 *     sub_1407092C0 @ 0x1407092C0 (sub_1407092C0.c)
 *     sub_14097FD74 @ 0x14097FD74 (sub_14097FD74.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14097FD48(__int64 a1, __int64 a2)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 44LL) & 0x20) != 0 && (unsigned __int64)(a2 - 0x80000000LL) <= 0x7FFFFFFF;
}
