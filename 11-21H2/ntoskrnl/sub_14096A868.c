/*
 * XREFs of sub_14096A868 @ 0x14096A868
 * Callers:
 *     MmQueryMemoryRanges @ 0x14096ADD0 (MmQueryMemoryRanges.c)
 * Callees:
 *     sub_14057F520 @ 0x14057F520 (sub_14057F520.c)
 *     sub_14096A740 @ 0x14096A740 (sub_14096A740.c)
 */

__int64 __fastcall sub_14096A868(__int64 a1, __int64 *a2, int a3, unsigned __int64 a4, __int16 a5)
{
  int v5; // edi
  unsigned __int64 v6; // rbp
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rbx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  bool v17; // zf
  __int64 result; // rax

  v5 = a3;
  v6 = 0LL;
  v10 = (unsigned __int64 *)(qword_140C52968 + 8 * (*(_QWORD *)&a3 & 0x3FFFFFLL));
  while ( v6 < a4 )
  {
    v11 = *v10;
    if ( a5 != 1025 && ((v11 >> 49) & 0x7FF) != a5 )
      goto LABEL_19;
    v12 = (v11 >> 22) & 7;
    if ( !v12
      || *(int *)(a1 + 32) >= 0
      && (unsigned int)sub_14057F520((*(_QWORD *)&v5 & 0x3FFFFFLL) << 18) != *(_DWORD *)(a1 + 32) )
    {
      goto LABEL_19;
    }
    if ( v12 > 5uLL )
      goto LABEL_19;
    v13 = v12 - 1;
    if ( !v13 )
    {
      v17 = (*(_DWORD *)(a1 + 4) & 2) == 0;
      goto LABEL_17;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v17 = (*(_DWORD *)(a1 + 4) & 4) == 0;
      goto LABEL_17;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        v17 = (*(_DWORD *)(a1 + 4) & 0x10) == 0;
        goto LABEL_17;
      }
      if ( v16 != 1 )
        goto LABEL_19;
    }
    v17 = (*(_DWORD *)(a1 + 4) & 8) == 0;
LABEL_17:
    if ( !v17 )
    {
      result = sub_14096A740(a1, a2, v5);
      if ( (int)result < 0 )
        return result;
    }
LABEL_19:
    ++v6;
    ++v10;
    v5 ^= (v5 ^ (v5 + 1)) & 0x3FFFFF;
  }
  return 0LL;
}
