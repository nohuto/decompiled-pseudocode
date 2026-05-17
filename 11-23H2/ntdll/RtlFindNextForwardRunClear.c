/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1800F89E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClear(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  __int64 v7; // rsi
  _DWORD *v8; // rdx
  unsigned __int64 v9; // rbx
  int v10; // r8d
  _DWORD *i; // rax
  unsigned int v12; // r8d
  __int64 v13; // rcx
  unsigned __int64 j; // rax
  unsigned int *v15; // rax
  unsigned int v16; // r10d

  v3 = *(_DWORD *)a1;
  v4 = 0;
  v5 = a2;
  if ( *(_DWORD *)a1 > a2 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = (_DWORD *)(v7 + 4 * ((unsigned __int64)a2 >> 5));
    v9 = v7 + 4 * ((unsigned __int64)(v3 - 1) >> 5);
    v10 = ((1 << (v5 & 0x1F)) - 1) | *v8;
    for ( i = v8 + 1; ; ++i )
    {
      v12 = ~v10;
      if ( v12 )
        break;
      if ( (unsigned __int64)i > v9 )
        goto LABEL_7;
      v10 = *++v8;
    }
    _BitScanForward64((unsigned __int64 *)&v13, v12);
    v5 = v13 + 32 * (((__int64)v8 - v7) >> 2);
    if ( v5 > v3 )
    {
LABEL_7:
      v5 = v3;
      goto LABEL_17;
    }
    for ( j = ~(v12 | ((1 << v13) - 1)); !(_DWORD)j; j = *v15 )
    {
      v15 = v8 + 1;
      if ( (unsigned __int64)(v8 + 1) > v9 )
      {
        LODWORD(j) = 32;
        goto LABEL_14;
      }
      ++v8;
    }
    _BitScanForward64(&j, j);
LABEL_14:
    v16 = v3;
    if ( 32 * (unsigned int)(((__int64)v8 - v7) >> 2) + (unsigned int)j <= v3 )
      v16 = 32 * (((__int64)v8 - v7) >> 2) + j;
    v4 = v16 - v5;
  }
LABEL_17:
  *a3 = v5;
  return v4;
}
