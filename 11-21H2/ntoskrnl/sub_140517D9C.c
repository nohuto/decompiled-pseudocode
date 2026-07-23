/*
 * XREFs of sub_140517D9C @ 0x140517D9C
 * Callers:
 *     sub_14051B384 @ 0x14051B384 (sub_14051B384.c)
 *     sub_14051B4F4 @ 0x14051B4F4 (sub_14051B4F4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140517D9C(__int64 a1, __int64 a2)
{
  if ( byte_140C4BCBC )
    return 3221225659LL;
  else
    return sub_14042A5E0(*(_QWORD *)(a1 + 16), a2);
}
