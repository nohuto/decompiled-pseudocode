/*
 * XREFs of sub_1409EA3AC @ 0x1409EA3AC
 * Callers:
 *     sub_1406EDB48 @ 0x1406EDB48 (sub_1406EDB48.c)
 *     sub_1409E9F80 @ 0x1409E9F80 (sub_1409E9F80.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409EA3AC(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  _DWORD *v4; // rdi
  _QWORD *Pool2; // rbx
  void *v6; // r15
  __int64 v7; // r14
  unsigned int v8; // ebp
  unsigned int v9; // r9d
  __int64 v10; // r12
  __int64 v11; // rsi
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned int v16; // ebp
  _QWORD *v17; // r14
  unsigned int *v18; // r11
  unsigned int v19; // r10d
  unsigned int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-40h]
  unsigned int v28; // [rsp+90h] [rbp+18h] BYREF
  int v29; // [rsp+98h] [rbp+20h]

  v2 = dword_140D06884;
  v28 = 0;
  v25 = dword_140D06884;
  v29 = 0;
  v4 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(
                      64LL,
                      (unsigned int)(32 * (*(_DWORD *)((char *)&NlsMbCodePageTag + 5) + 1)),
                      1953985605LL);
  if ( !Pool2 )
    return;
  v26 = ExAllocatePool2(64LL, (unsigned int)(24 * *(_DWORD *)((char *)&NlsMbCodePageTag + 5)), 1953985605LL);
  v6 = (void *)v26;
  if ( !v26 )
    goto LABEL_24;
  v7 = *(_QWORD *)(a1 + 1016);
  if ( !*(_DWORD *)(v7 + 20) )
    goto LABEL_24;
  v8 = 0;
  v28 = *(_DWORD *)(v7 + 20);
  *Pool2 = &v28;
  Pool2[1] = 4LL;
  v9 = v28;
  if ( v28 )
  {
    do
    {
      v29 = 0;
      v10 = v8;
      v11 = v26 + 24LL * v8;
      *(_DWORD *)v11 = *(_DWORD *)(*(_QWORD *)v7 + 4LL * v8);
      if ( (int)sub_14042A5E0(1LL, 24LL) < 0 )
        v12 = L"Unknown";
      else
        v12 = *(const WCHAR **)(v11 + 16);
      v13 = -1LL;
      do
        ++v13;
      while ( v12[v13] );
      ++v8;
      v14 = 2 * (v10 + 1);
      Pool2[v14] = v12;
      Pool2[v14 + 1] = (unsigned int)(2 * v13 + 2);
      v9 = v28;
    }
    while ( v8 < v28 );
    v2 = v25;
  }
  sub_1402AB170((__int64)Pool2, qword_140D05008, a2, v9 + 1, 0xF30u, 0x401802u);
  if ( *(_QWORD *)(a1 + 24) != 1LL )
    goto LABEL_24;
  v15 = 16 * v28 + 24;
  v4 = (_DWORD *)ExAllocatePool2(64LL, v15, 1953985605LL);
  if ( !v4 )
    goto LABEL_24;
  v16 = 0;
  if ( !v2 )
    goto LABEL_24;
  v17 = (_QWORD *)(v7 + 24);
  while ( 1 )
  {
    if ( !*v17 )
      goto LABEL_22;
    *(_QWORD *)v4 = *v17;
    if ( (int)sub_14042A5E0(51LL, v15) < 0 )
      goto LABEL_22;
    v18 = v4 + 4;
    Pool2[1] = 4LL;
    Pool2[2] = v4 + 4;
    *Pool2 = v4 + 2;
    v19 = 0;
    Pool2[3] = 4LL;
    v20 = v4[4];
    if ( v20 )
      break;
LABEL_21:
    sub_1402AB170((__int64)Pool2, qword_140D05008, a2, 2 * v20 + 2, 0xF31u, 0x401802u);
LABEL_22:
    ++v16;
    ++v17;
    if ( v16 >= v2 )
      goto LABEL_23;
  }
  while ( 1 )
  {
    v21 = 4LL * v19;
    if ( !BYTE1(v4[v21 + 9]) )
      break;
    v22 = 2 * v19++;
    v23 = 2 * (v22 + 2);
    Pool2[v23] = &v4[v21 + 8];
    Pool2[v23 + 1] = 4LL;
    v24 = 2 * ((unsigned int)v22 + 3LL);
    Pool2[v24] = &v4[v21 + 6];
    Pool2[v24 + 1] = 8LL;
    v20 = *v18;
    if ( v19 >= *v18 )
      goto LABEL_21;
  }
LABEL_23:
  v6 = (void *)v26;
LABEL_24:
  ExFreePoolWithTag(Pool2, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
