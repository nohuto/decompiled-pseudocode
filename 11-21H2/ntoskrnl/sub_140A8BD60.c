/*
 * XREFs of sub_140A8BD60 @ 0x140A8BD60
 * Callers:
 *     sub_140A8CA78 @ 0x140A8CA78 (sub_140A8CA78.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_1405FFBC8 @ 0x1405FFBC8 (sub_1405FFBC8.c)
 *     sub_1405FFC5C @ 0x1405FFC5C (sub_1405FFC5C.c)
 *     sub_1405FFD00 @ 0x1405FFD00 (sub_1405FFD00.c)
 *     sub_140A92074 @ 0x140A92074 (sub_140A92074.c)
 *     sub_140A92124 @ 0x140A92124 (sub_140A92124.c)
 *     sub_140A9CF00 @ 0x140A9CF00 (sub_140A9CF00.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

_UNKNOWN **__fastcall sub_140A8BD60(__int64 *a1, int *a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbp
  __int64 v6; // rsi
  KIRQL v7; // al
  bool v8; // zf
  int v9; // eax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  void *v12; // r14
  _QWORD *v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // r9d
  __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rcx
  int v22; // r9d
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 **v26; // rcx
  int v27; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *a1;
  if ( !*a1 )
    return result;
  v6 = a1[2];
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 8));
  v8 = *(_QWORD *)(v6 + 216) == 0LL;
  *(_BYTE *)(v6 + 16) = v7;
  if ( !v8 && (a1[3] & 0x2000000) != 0 )
    *a2 = 259;
  v9 = *((_DWORD *)a1 + 6);
  v10 = (_QWORD *)a1[20];
  if ( (v9 & 0x20000000) == 0 || *a2 == 259 || (v9 & 0x1000000) != 0 )
    goto LABEL_17;
  v11 = sub_140A92074(a1[20]);
  v12 = (void *)v11;
  if ( (a1[3] & 0x10000000) == 0 )
  {
    v13 = (_QWORD *)a1[8];
    v14 = *(_QWORD *)(v13[39] + 40LL);
    if ( !v14 )
      goto LABEL_30;
    v15 = *(_DWORD *)(v14 + 396);
    if ( (v15 & 0x10) == 0 )
    {
      if ( (v15 & 0x10000) != 0 )
        goto LABEL_12;
LABEL_30:
      if ( !v12 )
        goto LABEL_17;
      goto LABEL_16;
    }
    if ( v10 == v13 )
    {
      if ( !(unsigned int)sub_140A92124(v10, 0LL) )
        goto LABEL_30;
      v20 = 545;
    }
    else
    {
      if ( (unsigned int)sub_140A92124(v10, 0LL) || !(unsigned int)sub_140A92124(v10, 0LL) )
        goto LABEL_30;
      v20 = 547;
    }
    sub_1405FFBC8(v20, (const void *)a1[6], (const void *)a1[9], v10);
    goto LABEL_30;
  }
LABEL_12:
  if ( v11 )
  {
    v16 = *(_QWORD *)(v10[1] + 80LL);
    if ( !v16 || !*(_QWORD *)(v16 + 104) )
      sub_1405FFBC8(0x21Du, (const void *)a1[6], (const void *)a1[9], v10);
LABEL_16:
    ObfDereferenceObjectWithTag(v12, 0x49667256u);
  }
LABEL_17:
  v17 = *((_DWORD *)a1 + 6);
  if ( (v17 & 0x40000000) == 0 || (*(_DWORD *)(v3 + 32) & 2) != 0 )
    goto LABEL_36;
  v18 = *a2;
  if ( (v17 & 0x2000000) != 0 )
  {
    if ( v18 == 259 || (v17 & 0x1000000) != 0 )
      goto LABEL_36;
    v19 = 574LL;
  }
  else
  {
    if ( v18 != 259 && (v17 & 0x1000000) == 0 )
      goto LABEL_36;
    v19 = 588LL;
  }
  sub_1405FFD00(v19, (const void *)a1[6], (const void *)a1[9], v18);
  *(_DWORD *)(v3 + 32) |= 2u;
LABEL_36:
  v21 = (unsigned int)*a2;
  if ( _bittest((const signed __int32 *)a1 + 6, 0x1Eu) )
  {
    v22 = *((_DWORD *)a1 + 14);
    if ( (_DWORD)v21 == v22 )
    {
      if ( (_DWORD)v21 == -1 )
        sub_1405FFD00(549LL, (const void *)a1[6], (const void *)a1[9], -1);
    }
    else if ( (_DWORD)v21 != 259 )
    {
      v23 = *(_DWORD *)(v3 + 32);
      if ( (v23 & 1) == 0 )
      {
        sub_1405FFC5C(v21, (const void *)a1[6], (const void **)a1 + 9, v22, *a2);
        v23 = *(_DWORD *)(v3 + 32);
      }
      *(_DWORD *)(v3 + 32) = v23 | 1;
    }
  }
  else
  {
    if ( (_DWORD)v21 != 259 )
    {
      v24 = *(_DWORD *)(v6 + 56);
      if ( (v24 & 0x400000) == 0 )
      {
        sub_1405FFB44(0x226u, (const void *)a1[6], (const void *)a1[9]);
        v24 = *(_DWORD *)(v6 + 56);
      }
      *(_DWORD *)(v6 + 56) = v24 | 0x400000;
    }
    *(_DWORD *)(a1[1] + 4) |= 0x4000000u;
    v25 = a1[4];
    if ( *(__int64 **)(v25 + 8) != a1 + 4 || (v26 = (__int64 **)a1[5], *v26 != a1 + 4) )
      __fastfail(3u);
    *v26 = (__int64 *)v25;
    *(_QWORD *)(v25 + 8) = v26;
  }
  v27 = *((_DWORD *)a1 + 6);
  if ( (v27 & 0x8000000) != 0 && *a2 != 259 && (v27 & 0x1000000) == 0 )
    *a2 = *((_DWORD *)a1 + 15);
  sub_140A9CF00(v3);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 20));
  return (_UNKNOWN **)sub_140AA5BCC(v6);
}
