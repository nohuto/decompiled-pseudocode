/*
 * XREFs of sub_14050E6FC @ 0x14050E6FC
 * Callers:
 *     sub_14050E360 @ 0x14050E360 (sub_14050E360.c)
 *     sub_14050E638 @ 0x14050E638 (sub_14050E638.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14050E6FC(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  if ( qword_140C4C4D8 )
    return sub_14042A5E0(a1, a2);
  if ( (_DWORD)a2 )
    memset(a4, 0, 8LL * (unsigned int)a2);
  return 3221225473LL;
}
