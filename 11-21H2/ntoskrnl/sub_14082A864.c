/*
 * XREFs of sub_14082A864 @ 0x14082A864
 * Callers:
 *     sub_14082A644 @ 0x14082A644 (sub_14082A644.c)
 *     sub_14082A864 @ 0x14082A864 (sub_14082A864.c)
 * Callees:
 *     sub_1403853B0 @ 0x1403853B0 (sub_1403853B0.c)
 *     sub_14082A864 @ 0x14082A864 (sub_14082A864.c)
 *     sub_14082A974 @ 0x14082A974 (sub_14082A974.c)
 */

ULONG_PTR __fastcall sub_14082A864(unsigned __int64 a1, ULONG_PTR a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  int v8; // r14d
  ULONG_PTR result; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v6 = a1;
  v7 = a2;
  v8 = a3;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a4) )
    v6 = *(_QWORD *)(a3 + 16LL * a4);
  result = *(_QWORD *)(a3 + 16LL * a4 + 8);
  if ( a2 > result )
    v7 = *(_QWORD *)(a3 + 16LL * a4 + 8);
  for ( ; v6 <= v7; v6 += 8LL )
  {
    result = sub_1403853B0(v6, a4, 0, 0LL);
    if ( (result & 1) == 0 )
    {
      if ( a4 )
      {
        v11 = (_QWORD *)(a5 + 72);
        v10 = *(_QWORD **)(a5 + 72);
        if ( v10[1] != a5 + 72 || (v12 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
          __fastfail(3u);
        *v11 = v12;
        *(_QWORD *)(v12 + 8) = v11;
        --*(_QWORD *)(a5 + 88);
        ++*(_QWORD *)(a5 + 112);
      }
      else
      {
        v10 = 0LL;
      }
      result = sub_14082A974(v6, v10, (unsigned int)a4);
    }
    if ( a4 > *(_DWORD *)(a5 + 132) )
      result = sub_14082A864(
                 (__int64)(v6 << 25) >> 16,
                 (unsigned int)((__int64)(v6 << 25) >> 16) + 4088,
                 v8,
                 a4 - 1,
                 a5);
  }
  return result;
}
