/*
 * XREFs of RtlFindNextForwardRunClear @ 0x18008E520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClear(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  unsigned int v5; // r9d
  const signed __int32 *v6; // rdx
  const signed __int32 *v7; // rbx
  const signed __int32 *v8; // r8
  unsigned int v9; // edx
  int v10; // edi
  const signed __int32 *v11; // r8
  unsigned int i; // eax

  v3 = *(_DWORD *)a1;
  v5 = a2;
  if ( *(_DWORD *)a1 <= a2 )
  {
    *a3 = a2;
    return 0;
  }
  v6 = *(const signed __int32 **)(a1 + 8);
  v7 = &v6[(unsigned __int64)(v3 - 1) >> 5];
  v8 = &v6[(unsigned __int64)v5 >> 5];
  if ( v8 != v7 && (*v8 | dword_180136CB0[v5 & 0x1F]) == -1 )
  {
    v5 = v5 - (v5 & 0x1F) + 32;
    for ( ++v8; v8 < v7 && *v8 == -1; ++v8 )
      v5 += 32;
  }
  while ( v5 < v3 && _bittest(v6, v5) )
    ++v5;
  v9 = 0;
  if ( v8 == v7 )
    goto LABEL_16;
  v10 = v5 & 0x1F;
  if ( (*v8 & ~dword_180136CB0[v5 & 0x1F]) != 0 )
    goto LABEL_16;
  v9 = 32 - v10;
  if ( v10 != 33 )
  {
    v11 = v8 + 1;
    while ( v11 < v7 && !*v11 )
    {
      ++v11;
      v9 += 32;
      if ( v9 == -1 )
        goto LABEL_20;
    }
LABEL_16:
    for ( i = v9 + v5; i < *(_DWORD *)a1; ++v9 )
    {
      if ( _bittest(*(const signed __int32 **)(a1 + 8), i) )
        break;
      if ( v9 == -1 )
        break;
      ++i;
    }
  }
LABEL_20:
  *a3 = v5;
  return v9;
}
