/*
 * XREFs of sub_14078EE9C @ 0x14078EE9C
 * Callers:
 *     sub_14078FE24 @ 0x14078FE24 (sub_14078FE24.c)
 *     sub_1409EC088 @ 0x1409EC088 (sub_1409EC088.c)
 * Callees:
 *     sub_1406E0450 @ 0x1406E0450 (sub_1406E0450.c)
 *     sub_140790CA8 @ 0x140790CA8 (sub_140790CA8.c)
 */

__int64 __fastcall sub_14078EE9C(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax

  result = sub_140790CA8(a1, 128LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = sub_140790CA8(a2, 128LL, 0LL);
    v5 = result;
    if ( (int)result >= 0 )
    {
      v6 = *a1 - 0x5668BB5DF4E1897CLL;
      if ( *a1 == 0x5668BB5DF4E1897CLL )
        v6 = a1[1] - 0x44D38D4D0F04D8F1LL;
      if ( !v6 )
        return (unsigned int)sub_1406E0450(
                               *((_QWORD *)KeGetCurrentThread() + 23),
                               *((_BYTE *)KeGetCurrentThread() + 562));
      return v5;
    }
  }
  return result;
}
