/*
 * XREFs of sub_140342694 @ 0x140342694
 * Callers:
 *     sub_14029B7B0 @ 0x14029B7B0 (sub_14029B7B0.c)
 *     sub_1403419B0 @ 0x1403419B0 (sub_1403419B0.c)
 *     sub_140574678 @ 0x140574678 (sub_140574678.c)
 * Callees:
 *     sub_1403426C8 @ 0x1403426C8 (sub_1403426C8.c)
 */

__int64 __fastcall sub_140342694(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx

  v4 = sub_1403426C8(a1, 0LL, a3, a4);
  if ( v4 < 0x4B )
    return v4 / 0x19;
  else
    return 3;
}
