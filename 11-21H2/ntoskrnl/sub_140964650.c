/*
 * XREFs of sub_140964650 @ 0x140964650
 * Callers:
 *     sub_1409644D8 @ 0x1409644D8 (sub_1409644D8.c)
 * Callees:
 *     sub_140590A00 @ 0x140590A00 (sub_140590A00.c)
 */

__int64 __fastcall sub_140964650(_QWORD *a1, unsigned int a2, __int64 a3, ULONG_PTR a4)
{
  int v4; // eax
  unsigned int v6; // edx
  unsigned int v7; // r8d

  v4 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  v6 = a2 >> 3;
  v7 = 0;
  if ( v6 )
  {
    while ( *a1 != a3 )
    {
      ++v7;
      ++a1;
      if ( v7 >= v6 )
        return v4 == 0 ? 0xC0000225 : 0;
    }
    sub_140590A00((ULONG_PTR)a1, a4);
    v4 = 1;
  }
  return v4 == 0 ? 0xC0000225 : 0;
}
