/*
 * XREFs of sub_1409242A4 @ 0x1409242A4
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     sub_1402A2104 @ 0x1402A2104 (sub_1402A2104.c)
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14087D6D0 @ 0x14087D6D0 (sub_14087D6D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409242A4(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // r15
  ULONG_PTR v4; // rbx
  unsigned int v5; // r12d
  unsigned int *PoolWithTag; // rax
  unsigned int *v7; // r14
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r13
  ULONG_PTR v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // r13d
  int v16; // eax
  ULONG_PTR v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r12d
  ULONG_PTR v20; // rdx
  __int64 v22; // [rsp+40h] [rbp-18h] BYREF
  _QWORD v23[2]; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+50h]
  __int64 v26; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 48);
  v22 = 0xFFFFFFFFLL;
  v26 = 0xFFFFFFFFLL;
  v2 = 0LL;
  v23[0] = 0xFFFFFFFFLL;
  v3 = 0LL;
  v4 = *(_QWORD *)(v1 + 32);
  v5 = *(_DWORD *)(v1 + 40);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x77554D43u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *(_OWORD *)PoolWithTag = 0LL;
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    v9 = sub_1406BF400(v4, v5, &v22);
  else
    v9 = sub_1407C9820(v4, v5, (unsigned int *)&v22);
  v27 = v9;
  v10 = v9;
  if ( !v9 )
    goto LABEL_7;
  v8 = sub_14087D6D0(v4, v5, 1);
  if ( v8 < 0 )
    goto LABEL_31;
  v11 = *(unsigned int *)(a1 + 96);
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    v12 = sub_1406BF400(v4, v11, &v26);
  else
    v12 = sub_1407C9820(v4, v11, (unsigned int *)&v26);
  v2 = v12;
  if ( !v12
    || ((v13 = *(_DWORD *)(v10 + 44), (*(_BYTE *)(v4 + 140) & 1) == 0)
      ? (v14 = sub_1407C9820(v4, v13, (unsigned int *)v23))
      : (v14 = sub_1406BF400(v4, v13, v23)),
        (v3 = v14) == 0) )
  {
LABEL_7:
    v8 = -1073741670;
    goto LABEL_31;
  }
  v15 = *(_DWORD *)(v14 + 8);
  v25 = *(_DWORD *)(v14 + 4);
  v8 = sub_14087D6D0(v4, v13, 1);
  if ( v8 < 0 || (v8 = sub_14087D6D0(v4, v15, 1), v8 < 0) )
  {
    v10 = v27;
    goto LABEL_31;
  }
  v16 = sub_14087D6D0(v4, v25, 1);
  v10 = v27;
  v8 = v16;
  if ( v16 < 0 )
    goto LABEL_31;
  v8 = sub_140657670(v4, v5, v27, v5 >> 31, (void *)(v2 + 20), 1, v7);
  if ( v8 < 0 )
    goto LABEL_31;
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    sub_1406BF450(v4, &v26);
  else
    sub_1407C97C0(v4, (unsigned int *)&v26);
  v17 = *v7;
  v18 = (*(_BYTE *)(v4 + 140) & 1) != 0 ? sub_1406BF400(v4, v17, &v26) : sub_1407C9820(v4, v17, (unsigned int *)&v26);
  v19 = *(_DWORD *)(v18 + 4);
  v2 = v18;
  v8 = sub_14087D6D0(v4, *(unsigned int *)(v18 + 8), 1);
  if ( v8 < 0 || (v8 = sub_14087D6D0(v4, v19, 1), v8 < 0) )
  {
LABEL_31:
    v20 = *v7;
    if ( (_DWORD)v20 != -1 )
      sub_1402A2104(*((_QWORD *)v7 + 1), v20);
    ExFreePoolWithTag(v7, 0x77554D43u);
    if ( !v10 )
      goto LABEL_37;
    goto LABEL_34;
  }
  v8 = 0;
  *((_QWORD *)v7 + 1) = v4;
  *(_QWORD *)(a1 + 104) = v7;
LABEL_34:
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    sub_1406BF450(v4, &v22);
  else
    sub_1407C97C0(v4, (unsigned int *)&v22);
LABEL_37:
  if ( v2 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      sub_1406BF450(v4, &v26);
    else
      sub_1407C97C0(v4, (unsigned int *)&v26);
  }
  if ( v3 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      sub_1406BF450(v4, v23);
    else
      sub_1407C97C0(v4, (unsigned int *)v23);
  }
  return (unsigned int)v8;
}
