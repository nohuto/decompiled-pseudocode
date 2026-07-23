/*
 * XREFs of sub_14022BAE0 @ 0x14022BAE0
 * Callers:
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_140332A80 @ 0x140332A80 (sub_140332A80.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_140352EB0 @ 0x140352EB0 (sub_140352EB0.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_14022BAE0(__int64 a1)
{
  int v1; // ebp
  __int64 *result; // rax
  unsigned int v3; // r9d
  __int64 v5; // rbx
  unsigned __int64 v6; // r11
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned int v10; // ecx

  v1 = 0;
  result = (__int64 *)(a1 + 24);
  v3 = 1;
  if ( *(_DWORD *)(a1 + 12) > 1u )
  {
    do
    {
      v5 = *result;
      v6 = *(_QWORD *)(a1 + 8LL * v3 + 24);
      v7 = a1 + 8LL * v3;
      v8 = 4096LL << (9 * ((unsigned __int8)(v6 >> 10) & 3u));
      if ( ((v6 >> 10) & 3) == (((unsigned __int64)*result >> 10) & 3)
        && (v9 = *result & 0x3FF, (v6 & 0xFFFFFFFFFFFFF000uLL) - v8 * (v9 + 1) == (v5 & 0xFFFFFFFFFFFFF000uLL))
        && v9 != 1023 )
      {
        if ( v9 + (v6 & 0x3FF) + 1 > 0x3FF )
        {
          *(_QWORD *)(v7 + 24) = (1023 - v9) * v8
                               + (v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v6 - (1023 - v9))) & 0x3FF);
          *result++ |= 0x3FFuLL;
          *result = *(_QWORD *)(v7 + 24);
        }
        else
        {
          *result = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(v6 + v5 + 1)) & 0x3FF;
          ++v1;
        }
      }
      else
      {
        *++result = v6;
      }
      v10 = *(_DWORD *)(a1 + 12);
      ++v3;
    }
    while ( v3 < v10 );
    if ( v1 )
      *(_DWORD *)(a1 + 12) = v10 - v1;
  }
  return result;
}
