/*
 * XREFs of sub_14067CDE0 @ 0x14067CDE0
 * Callers:
 *     sub_140864950 @ 0x140864950 (sub_140864950.c)
 * Callees:
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 */

__int64 __fastcall sub_14067CDE0(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        ACCESS_MASK DesiredAccess,
        __int64 a7,
        __int64 a8)
{
  return sub_14067CE4C(a1, a2, a3, a4, a5, DesiredAccess, a7, a8, 0LL, 0, 0LL, *((_BYTE *)KeGetCurrentThread() + 562));
}
