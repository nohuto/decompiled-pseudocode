/*
 * XREFs of sub_140A069C0 @ 0x140A069C0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryGroupAffinity @ 0x1402D75B0 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A062C8 @ 0x140A062C8 (sub_140A062C8.c)
 */

__int64 __fastcall sub_140A069C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  USHORT v13; // cx

  v13 = *((unsigned __int8 *)KeGetCurrentPrcb() + 208);
  if ( a9 == -1 )
    KeQueryGroupAffinity(v13);
  return sub_140A062C8(a1, a2, a3, a4, a5, a6, a7, a8);
}
