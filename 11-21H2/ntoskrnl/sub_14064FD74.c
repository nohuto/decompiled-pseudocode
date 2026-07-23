/*
 * XREFs of sub_14064FD74 @ 0x14064FD74
 * Callers:
 *     sub_14064FFEC @ 0x14064FFEC (sub_14064FFEC.c)
 *     sub_140651304 @ 0x140651304 (sub_140651304.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14064FB60 @ 0x14064FB60 (sub_14064FB60.c)
 *     sub_14064FC7C @ 0x14064FC7C (sub_14064FC7C.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_140930250 @ 0x140930250 (sub_140930250.c)
 */

__int64 __fastcall sub_14064FD74(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // edi
  int v7; // esi
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // ecx
  SIZE_T v11; // rbp
  char *v12; // rax
  char *v13; // rdi
  __int64 v14; // r10
  __int64 v16; // rbp
  unsigned int v17; // r11d
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v23 = 0LL;
  v4 = *(_QWORD *)(*a1 + 264);
  *a2 = 0LL;
  v5 = 2 - ((*(_BYTE *)(*a1 + 200) & 1) != 0);
  v6 = 0;
  do
  {
    v7 = sub_14064FC7C(a1, v6, (_QWORD *)v4);
    if ( v7 >= 0 )
    {
      v7 = sub_14064FB60(a1, v4, &v23);
      if ( v7 >= 0 )
        goto LABEL_6;
    }
    ++v6;
  }
  while ( v6 < v5 );
  if ( v7 < 0 )
  {
LABEL_13:
    v14 = v23;
    goto LABEL_14;
  }
LABEL_6:
  v8 = *a1;
  v9 = *(_DWORD *)(*a1 + 200);
  if ( (v9 & 1) != 0 || v6 || *(_QWORD *)(v4 + 32) == *(_QWORD *)(v8 + 248) - 1LL )
    v10 = v9 & 0xFFFFFFFD;
  else
    v10 = v9 | 2;
  *(_DWORD *)(v8 + 200) = v10;
  v11 = (unsigned int)(144 * *(_DWORD *)(v4 + 80) + 48);
  v12 = (char *)sub_140930250(v11);
  v13 = v12;
  if ( !v12 )
  {
    v7 = -1073741670;
    goto LABEL_13;
  }
  memset(v12, 0, v11);
  v14 = v23;
  v16 = 0LL;
  *(_DWORD *)v13 = 1;
  v17 = 0;
  *(_OWORD *)(v13 + 8) = *(_OWORD *)(v4 + 56);
  *((_QWORD *)v13 + 3) = *(_QWORD *)(v4 + 40) << *(_DWORD *)(*a1 + 240);
  *((_QWORD *)v13 + 4) = (*(_QWORD *)(v4 + 48) - *(_QWORD *)(v4 + 40) + 1LL) << *(_DWORD *)(*a1 + 240);
  for ( *((_DWORD *)v13 + 10) = *(_DWORD *)(v4 + 80); v17 < *(_DWORD *)(v4 + 80); ++v17 )
  {
    v18 = v14 + ((unsigned __int64)v17 << 7);
    v19 = *(_QWORD *)v18;
    if ( !*(_QWORD *)v18 )
      v19 = *(_QWORD *)(v18 + 8);
    if ( v19 && *(_QWORD *)(v18 + 32) >= *(_QWORD *)(v4 + 40) && *(_QWORD *)(v18 + 40) <= *(_QWORD *)(v4 + 48) )
    {
      v20 = 18 * v16;
      *(_DWORD *)&v13[8 * v20 + 48] = 1;
      *(_QWORD *)&v13[8 * v20 + 56] = *(_QWORD *)(v18 + 32) << *(_DWORD *)(*a1 + 240);
      v21 = *(_QWORD *)(v18 + 40) - *(_QWORD *)(v18 + 32) + 1LL;
      v22 = *(_DWORD *)(*a1 + 240);
      *(_DWORD *)&v13[8 * v20 + 72] = -1;
      *(_QWORD *)&v13[8 * v20 + 64] = v21 << v22;
      v16 = (unsigned int)(v16 + 1);
      *(_OWORD *)&v13[8 * v20 + 80] = *(_OWORD *)v18;
      *(_OWORD *)&v13[8 * v20 + 96] = *(_OWORD *)(v18 + 16);
      *(_QWORD *)&v13[8 * v20 + 112] = *(_QWORD *)(v18 + 48);
      *(_OWORD *)&v13[8 * v20 + 120] = *(_OWORD *)(v18 + 56);
      *(_OWORD *)&v13[8 * v20 + 136] = *(_OWORD *)(v18 + 72);
      *(_OWORD *)&v13[8 * v20 + 152] = *(_OWORD *)(v18 + 88);
      *(_OWORD *)&v13[8 * v20 + 168] = *(_OWORD *)(v18 + 104);
      *(_QWORD *)&v13[8 * v20 + 184] = *(_QWORD *)(v18 + 120);
    }
  }
  *((_DWORD *)v13 + 1) = v16;
  *a2 = v13;
LABEL_14:
  if ( v14 )
    sub_1406D9550(v14);
  return (unsigned int)v7;
}
