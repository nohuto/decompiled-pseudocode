/*
 * XREFs of sub_140832F68 @ 0x140832F68
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1403C7820 (RtlQueryFeatureConfiguration.c)
 * Callees:
 *     sub_1403C7970 @ 0x1403C7970 (sub_1403C7970.c)
 *     sub_140832FD0 @ 0x140832FD0 (sub_140832FD0.c)
 */

__int64 __fastcall sub_140832F68(__int64 a1, unsigned int a2, signed int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // r10
  _QWORD *v8; // rax
  _DWORD v9[6]; // [rsp+20h] [rbp-18h]

  v3 = a3;
  result = sub_1403C7970(a3);
  if ( (int)result >= 0 )
  {
    v7 = 0LL;
    v8 = (_QWORD *)(v6 + 8);
    do
    {
      if ( *v8 )
      {
        v9[0] = 0;
        v9[1] = 1;
        return sub_140832FD0(a2, v6 + 24LL * (int)v9[v3], v6 + 48);
      }
      ++v7;
      v8 += 3;
    }
    while ( v7 < 3 );
    return 2147483682LL;
  }
  return result;
}
