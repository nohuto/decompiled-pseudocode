/*
 * XREFs of sub_1C00035A0 @ 0x1C00035A0
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C0017AF4 @ 0x1C0017AF4 (sub_1C0017AF4.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 */

void __fastcall sub_1C00035A0(__int64 a1, __int64 a2)
{
  const void *v2; // rsi
  unsigned __int8 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rbp
  const void **v7; // r14
  unsigned __int8 *v8; // r15
  __int64 v9; // rbx
  int v10; // r12d
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // ecx
  char v17; // cl
  int v18; // ecx
  unsigned int v19; // r13d
  void *v20; // rax
  const void *v21; // r12
  unsigned __int8 v22; // bp

  v2 = 0LL;
  v3 = 0;
  v4 = a2;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( (*(_BYTE *)(a1 + 16) & 0x20) == 0 )
    return;
  v9 = *(_QWORD *)(a1 + 168);
  if ( !v9 )
    return;
  if ( *(_BYTE *)(v9 + 2) != 40 )
  {
    v10 = *(_DWORD *)(v9 + 12);
    v7 = (const void **)(v9 + 32);
    v8 = (unsigned __int8 *)(v9 + 11);
    goto LABEL_16;
  }
  v6 = *(_QWORD *)(a1 + 168);
  v10 = *(_DWORD *)(v9 + 24);
  if ( *(_DWORD *)(v9 + 20) || (v11 = *(_DWORD *)(v9 + 56), v12 = 0, !v11) )
  {
LABEL_11:
    v4 = a2;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v13 = *(unsigned int *)(v9 + 4LL * v12 + 120);
    if ( (unsigned int)v13 < 0x80 )
      goto LABEL_22;
    v14 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v13 > (unsigned int)v14 )
      goto LABEL_22;
    v15 = (unsigned int)v13;
    v16 = *(_DWORD *)(v13 + v9);
    if ( v16 == 64 )
    {
      if ( v15 + 40 <= v14 )
        goto LABEL_10;
      goto LABEL_22;
    }
    v18 = v16 - 65;
    if ( v18 )
      break;
    if ( v15 + 56 <= v14 )
    {
LABEL_10:
      v7 = (const void **)(v15 + v9 + 16);
      v8 = (unsigned __int8 *)(v15 + v9 + 9);
      v2 = *v7;
      v3 = *v8;
      goto LABEL_11;
    }
LABEL_22:
    if ( ++v12 >= v11 )
      goto LABEL_11;
  }
  if ( v18 != 1 || v15 + 40 > v14 )
    goto LABEL_22;
  v7 = (const void **)(v15 + v9 + 24);
  v8 = (unsigned __int8 *)(v15 + v9 + 9);
  v4 = a2;
LABEL_16:
  v3 = *v8;
  v2 = *v7;
LABEL_12:
  v17 = *(_BYTE *)(v9 + 3);
  if ( v17 < 0 )
  {
    if ( (v10 & 0x200000) != 0 && v3 )
    {
      v19 = v3;
      v20 = (void *)sub_1C0007CF4(64LL, v3, 1230201170LL, v4);
      v21 = v20;
      if ( v20 )
      {
        memmove(v20, v2, v19);
        *v7 = v21;
        if ( *(_BYTE *)(v9 + 2) == 40 )
          *(_DWORD *)(v6 + 24) |= 0x400u;
        else
          *(_DWORD *)(v9 + 12) |= 0x400u;
      }
      else
      {
        *v7 = *(const void **)(a1 + 200);
        *v8 = *(_BYTE *)(a1 + 208);
        *(_BYTE *)(v9 + 3) &= ~0x80u;
      }
    }
    else
    {
      v22 = v3;
      if ( v3 >= *(_BYTE *)(a1 + 208) )
        v22 = *(_BYTE *)(a1 + 208);
      if ( v22 )
        memmove(*(void **)(a1 + 200), v2, v22);
      else
        *(_BYTE *)(v9 + 3) = v17 & 0x7F;
      *v7 = *(const void **)(a1 + 200);
      *v8 = v22;
    }
  }
  else
  {
    *v7 = *(const void **)(a1 + 200);
    *v8 = *(_BYTE *)(a1 + 208);
  }
}
