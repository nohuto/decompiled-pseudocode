/*
 * XREFs of sub_14030E0A0 @ 0x14030E0A0
 * Callers:
 *     sub_14030DA80 @ 0x14030DA80 (sub_14030DA80.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 */

void __fastcall sub_14030E0A0(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  int v13; // r13d
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  int v19; // ecx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9

  v6 = a3;
  v7 = a1[1] - qword_140C51BE8;
  v9 = a2;
  if ( !a2 )
  {
    if ( v7 )
      goto LABEL_3;
    v9 = 1LL;
  }
  if ( v9 > a3 )
    return;
LABEL_3:
  v11 = 8 * v7;
  if ( a3 < v11 )
    return;
  v12 = v11 + *a1;
  if ( v9 >= v12 )
    return;
  v13 = 0;
  if ( v9 < v11 )
  {
    v9 = v11;
    v13 = 1;
  }
  if ( a3 >= v12 )
  {
    v6 = v12 - 1;
    v13 = 1;
  }
  v14 = v6 - v9 + 1;
  v15 = v9 - v11;
  v16 = v6 - v11;
  v17 = a1[8] - v11;
  if ( !*a6 )
  {
    RtlClearBitsEx((__int64)a1, v15, v14);
    if ( !v13 )
      *a6 = 1;
  }
  v18 = a1[2];
  v19 = 1;
  if ( v18 < v17 || a1[4] < v17 )
    v19 = 0;
  if ( v18 > v15 )
  {
    if ( v15 < v17 && v19 )
    {
      if ( v16 >= v17 )
        a1[2] = v17;
    }
    else
    {
      a1[2] = v15;
    }
  }
  v20 = 0LL;
  if ( !a4 )
    goto LABEL_32;
  v21 = ((((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF)
       + 0xFFFF) >> 16;
  if ( v21 <= v11 )
  {
    v20 = 0LL;
LABEL_32:
    if ( !v11 )
      v20 = 1LL;
    goto LABEL_18;
  }
  v20 = v21 - v11;
  if ( !v20 )
    goto LABEL_32;
LABEL_18:
  if ( v19 && v20 < v17 )
    v20 = v17;
  if ( v20 <= v16 )
  {
    v22 = *a1;
    if ( a5
      && (((unsigned __int64)*(unsigned int *)(a5 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a5 + 32) << 28)) <= v22 + v11 )
    {
      v22 = (((unsigned __int64)*(unsigned int *)(a5 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a5 + 32) << 28))
          - v11;
    }
    if ( v20 < a1[4] && v22 - v20 >= a1[3] )
      a1[4] = v20;
  }
}
