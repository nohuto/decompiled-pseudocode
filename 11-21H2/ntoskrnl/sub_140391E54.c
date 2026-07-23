/*
 * XREFs of sub_140391E54 @ 0x140391E54
 * Callers:
 *     sub_140391D3C @ 0x140391D3C (sub_140391D3C.c)
 *     sub_1405FA12C @ 0x1405FA12C (sub_1405FA12C.c)
 * Callees:
 *     sub_1403792A8 @ 0x1403792A8 (sub_1403792A8.c)
 *     sub_140379A64 @ 0x140379A64 (sub_140379A64.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_140392084 @ 0x140392084 (sub_140392084.c)
 *     sub_1403920C8 @ 0x1403920C8 (sub_1403920C8.c)
 *     sub_1403923A4 @ 0x1403923A4 (sub_1403923A4.c)
 *     sub_1405F97E0 @ 0x1405F97E0 (sub_1405F97E0.c)
 */

__int64 __fastcall sub_140391E54(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // r13d
  unsigned __int64 v7; // r15
  int v8; // ebx
  int v9; // edi
  __int64 v10; // r14
  int v11; // edi
  __int64 v12; // rbp
  __int16 v13; // cx
  int v14; // edx
  unsigned int v15; // edi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  struct _MDL *v24; // r10
  unsigned int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v28[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+8h]

  v27 = 0LL;
  v5 = a4 & 2 | 1;
  v28[0] = 0LL;
  v29 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( (a4 & 2) != 0 )
  {
    v10 = *(_QWORD *)(a3 + 16);
  }
  else
  {
    v9 = sub_1403923A4(a1, a2, a3, &v27);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v10 = v27;
  }
  v11 = *(_DWORD *)v10 & *(_DWORD *)(a1 + 808);
  v12 = (unsigned int)(*(_DWORD *)v10 >> *(_DWORD *)(a1 + 812));
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v29 = sub_140392084(v28, 0LL, 0LL);
    v8 = 1;
  }
  *(_DWORD *)a5 = *(_DWORD *)v10;
  v13 = 4096;
  v14 = *(_DWORD *)(v10 + 4) & 0xFFF;
  if ( v14 )
    v13 = v14;
  *(_WORD *)(a5 + 4) = v13;
  *(_WORD *)(a5 + 6) = (unsigned __int8)*(_WORD *)a3;
  if ( *(_BYTE *)(a1 + 776) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 24LL) )
    {
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v10 + 12);
      *(_DWORD *)(a5 + 12) = *(unsigned __int16 *)(v10 + 6);
    }
  }
  else
  {
    *(_DWORD *)(a5 + 8) = *(_DWORD *)(v10 + 8);
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v15 = 16 * v11;
  }
  else
  {
    v25 = sub_1405F97E0(a1, (unsigned int)v12);
    v15 = 16 * v11;
    if ( v25 != 8 )
    {
      v17 = *(_QWORD *)(a1 + 16LL * v25 + 1256) + v15;
      goto LABEL_14;
    }
  }
  v16 = sub_1403792A8(*(_QWORD *)(a1 + 800), v12, v15, a4, 1);
  v7 = v16;
  if ( v16 <= 3 )
  {
    v9 = -1073741550;
    if ( v16 == 1 )
      v9 = -2147483634;
    goto LABEL_19;
  }
  LODWORD(v17) = v16;
LABEL_14:
  *(_QWORD *)(a2 + 56) = a3;
  v9 = sub_1403920C8(a1, *(_QWORD *)(a2 + 16), (unsigned int)v17 | v5, a4, *(_QWORD *)(a3 + 8), a5, a2);
  if ( v9 >= 0 )
    v9 = 0;
  if ( v7 )
  {
    v19 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v19 + 6021) & 4) != 0 )
    {
      sub_140379A64(v19, v12, v18, v19, v26, 0);
    }
    else
    {
      v21 = *(_QWORD *)(v19 + 6216);
      v22 = *(_QWORD *)(v21 + 8 * v12);
      v23 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
      v24 = (struct _MDL *)(v22 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)(v21 + 8 * v12) = v23;
      if ( (v23 & 3) == 0 )
        sub_14037AE58(v19 + 6608, 5, (__int64)KeGetCurrentThread(), v24);
    }
  }
LABEL_19:
  if ( v8 )
    sub_140392084(v28, v29, 1LL);
  return (unsigned int)v9;
}
