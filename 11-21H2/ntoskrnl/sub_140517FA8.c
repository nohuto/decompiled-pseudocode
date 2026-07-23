/*
 * XREFs of sub_140517FA8 @ 0x140517FA8
 * Callers:
 *     sub_140517FE8 @ 0x140517FE8 (sub_140517FE8.c)
 *     sub_14051AE1C @ 0x14051AE1C (sub_14051AE1C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140517FA8(__int64 a1, __int64 a2)
{
  if ( byte_140C4BCBC )
    return 3221225659LL;
  sub_14042A5E0(*(_QWORD *)(a1 + 16), a2);
  return 0LL;
}
