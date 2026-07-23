/*
 * XREFs of sub_14079C8A4 @ 0x14079C8A4
 * Callers:
 *     sub_14053FB50 @ 0x14053FB50 (sub_14053FB50.c)
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_14065C008 @ 0x14065C008 (sub_14065C008.c)
 *     sub_14065C3B8 @ 0x14065C3B8 (sub_14065C3B8.c)
 *     sub_14065DF64 @ 0x14065DF64 (sub_14065DF64.c)
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 *     sub_1406BE2FC @ 0x1406BE2FC (sub_1406BE2FC.c)
 *     sub_1406C8FF4 @ 0x1406C8FF4 (sub_1406C8FF4.c)
 *     sub_1406C9FA0 @ 0x1406C9FA0 (sub_1406C9FA0.c)
 *     sub_1406E3D54 @ 0x1406E3D54 (sub_1406E3D54.c)
 *     sub_1407169FC @ 0x1407169FC (sub_1407169FC.c)
 *     sub_140718244 @ 0x140718244 (sub_140718244.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14079B758 @ 0x14079B758 (sub_14079B758.c)
 *     sub_14079B920 @ 0x14079B920 (sub_14079B920.c)
 *     sub_14079BC7C @ 0x14079BC7C (sub_14079BC7C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140914214 @ 0x140914214 (sub_140914214.c)
 *     sub_140921510 @ 0x140921510 (sub_140921510.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 *     sub_140B15E34 @ 0x140B15E34 (sub_140B15E34.c)
 * Callees:
 *     sub_14079C920 @ 0x14079C920 (sub_14079C920.c)
 */

__int64 __fastcall sub_14079C8A4(ULONG_PTR a1, int a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  int v8; // r10d
  unsigned int i; // edx
  __int64 result; // rax

  v6 = (a2 + 11) & 0xFFFFFFF8;
  v8 = 0;
  for ( i = 0x4000; v6 > i; i *= 2 )
    ++v8;
  if ( !v8 )
    i = v6;
  if ( i > 0x100000 )
    return 3221225626LL;
  result = sub_14079C920(a1, a5, a6);
  if ( (int)result >= 0 )
  {
    *a4 = 0;
    return 0LL;
  }
  return result;
}
