/*
 * XREFs of RtlRbInsertNodeEx @ 0x180039370
 * Callers:
 *     LdrpCheckForRetryLoading @ 0x180010E50 (LdrpCheckForRetryLoading.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18002D200 (LdrpInsertModuleToIndexLockHeld.c)
 *     EtwpInsertRegistration @ 0x18003257C (EtwpInsertRegistration.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800345B8 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180034BE4 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpVsContextFree @ 0x180036C50 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x1800380B0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpFreeHeap @ 0x18003B350 (RtlpHpFreeHeap.c)
 *     RtlpCreateWnfNameSubscription @ 0x18005BFEC (RtlpCreateWnfNameSubscription.c)
 *     EtwpInsertGuidEntry @ 0x180061E2C (EtwpInsertGuidEntry.c)
 *     RtlpHpLargeAlloc @ 0x1800643E8 (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrFree @ 0x180064BC8 (RtlpHpVaMgrFree.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180069EA0 (RtlpHpVsFreeChunkInsert.c)
 *     LdrpAddRedirectedFunction @ 0x1800DF694 (LdrpAddRedirectedFunction.c)
 *     RtlCompareExchangePointerMapping @ 0x180100CC0 (RtlCompareExchangePointerMapping.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r11
  bool v5; // bl
  char v7; // al
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // zf
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // r14
  char v14; // cl
  unsigned __int64 v15; // rsi
  __int64 v16; // rbp
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  _BOOL8 v19; // r15
  BOOL v20; // ebp
  _BOOL8 v21; // r13
  __int64 v22; // r12
  unsigned __int64 v23; // rax
  int v24; // ebx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 *v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r15
  _BOOL8 v33; // rbp
  unsigned __int64 v34; // rax
  int v35; // r9d
  __int64 *v36; // r14
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  unsigned __int64 *v39; // rbx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbp
  unsigned __int64 v46; // rax
  __int64 v47; // r15
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  _BOOL8 v50; // r12

  v4 = 0LL;
  v5 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v7 = *((_BYTE *)a1 + 8);
  v8 = a4;
  LOBYTE(v9) = v7 & 1;
  if ( !a2 )
  {
    v43 = (unsigned __int64)a1 ^ a4;
    if ( (_BYTE)v9 )
    {
      *a1 = v43;
      a1[1] = v43;
      *((_BYTE *)a1 + 8) = v43 | 1;
    }
    else
    {
      *a1 = a4;
      a1[1] = a4;
    }
    *(_QWORD *)(a4 + 16) = 0LL;
    return v9;
  }
  v10 = (_BYTE)v9 == 0;
  v11 = a2;
  if ( !v10 )
    v8 = a2 ^ a4;
  *(_QWORD *)(a2 + 8LL * a3) = v8;
  if ( (a1[1] & 1) != 0 )
    v11 = a2 ^ a4;
  v9 = v11 | 1;
  *(_QWORD *)(a4 + 16) = v9;
  if ( a3 )
    goto LABEL_7;
  v9 = a1[1];
  if ( (v9 & 1) == 0 )
  {
    v12 = a1[1];
    goto LABEL_11;
  }
  if ( v9 != 1 )
  {
    v12 = v9 ^ ((unsigned __int64)a1 | 1);
LABEL_11:
    if ( a2 == v12 )
    {
      if ( (v9 & 1) != 0 )
      {
        a1[1] = a4 ^ (unsigned __int64)a1;
        LOBYTE(v9) = a4 ^ (unsigned __int8)a1 | 1;
        *((_BYTE *)a1 + 8) = v9;
      }
      else
      {
        a1[1] = a4;
      }
    }
  }
LABEL_7:
  if ( (*(_BYTE *)(a2 + 16) & 1) == 0 )
    return v9;
  v13 = *((_BYTE *)a1 + 8);
  v14 = v13 & 1;
  while ( 1 )
  {
    v15 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v14 && v15 )
    {
      v17 = a2 ^ v15;
      v18 = a2 ^ v15;
      v16 = *(_QWORD *)(a2 ^ v15);
    }
    else
    {
      v16 = *(_QWORD *)v15;
      v17 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v18 = v17;
      if ( !v14 )
        goto LABEL_17;
    }
    if ( !v16 )
    {
LABEL_17:
      v19 = v16 != a2;
      v20 = v16 != a2;
      v21 = v19;
      v22 = 8 * !v19;
      v9 = *(_QWORD *)(v22 + v17);
      if ( !v14 )
        goto LABEL_18;
      goto LABEL_94;
    }
    v19 = (v17 ^ v16) != a2;
    v50 = (v17 ^ v16) == a2;
    v20 = (v17 ^ v16) != a2;
    v22 = 8 * v50;
    v21 = v19;
    v9 = *(_QWORD *)(v18 + v22);
LABEL_94:
    if ( !v9 )
      break;
    v9 ^= v17;
LABEL_18:
    if ( !v9 || (*(_BYTE *)(v9 + 16) & 1) == 0 )
      break;
    *(_BYTE *)(a2 + 16) &= ~1u;
    a4 = v17;
    *(_BYTE *)(v9 + 16) &= ~1u;
    LOBYTE(v9) = *(_QWORD *)(v17 + 16);
    a2 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1[1] & 1) != 0 )
    {
      if ( !a2 )
        return v9;
      a2 ^= v17;
    }
    if ( a2 )
    {
      *(_BYTE *)(v17 + 16) = v9 | 1;
      v13 = *((_BYTE *)a1 + 8);
      v9 = *(_QWORD *)a2;
      v14 = v13 & 1;
      if ( (v13 & 1) != 0 && v9 )
        v9 ^= a2;
      v5 = v17 != v9;
      if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
        continue;
    }
    return v9;
  }
  if ( v5 == v19 )
    goto LABEL_36;
  v23 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v24 = v13 & 1;
  if ( (v13 & 1) != 0 && v23 )
    v23 ^= a4;
  if ( v23 != a2 )
    goto LABEL_85;
  v25 = *(_QWORD *)(v22 + a2);
  if ( (v13 & 1) != 0 && v25 )
    v25 ^= a2;
  if ( v25 != a4 )
    goto LABEL_85;
  v26 = *(_QWORD *)(v17 + 8 * v21);
  if ( (v13 & 1) != 0 && v26 )
    v26 ^= v17;
  if ( v26 != a2 )
    goto LABEL_85;
  if ( (v13 & 1) != 0 && v15 )
    v15 ^= a2;
  if ( v15 != v17 )
    goto LABEL_85;
  v27 = (unsigned __int64 *)(a4 + 8 * v21);
  v28 = v18 ^ a4;
  if ( !v24 )
  {
    *(_QWORD *)(v17 + 8 * v21) = a4;
    *(_QWORD *)(a4 + 16) &= 3uLL;
    *(_QWORD *)(a4 + 16) |= v17;
    v29 = *v27;
    goto LABEL_30;
  }
  *(_QWORD *)(v17 + 8 * v21) = v28;
  *(_QWORD *)(a4 + 16) &= 3uLL;
  *(_QWORD *)(a4 + 16) |= v28;
  v29 = *v27;
  if ( !*v27 )
    goto LABEL_31;
  v29 ^= a4;
LABEL_30:
  if ( !v29 )
  {
LABEL_31:
    v30 = a2 ^ v29;
    goto LABEL_32;
  }
  v47 = *(_QWORD *)(v29 + 16);
  v48 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v24 && v48 )
    v48 ^= v29;
  if ( v48 != a4 )
    goto LABEL_85;
  v49 = a2;
  v30 = a2 ^ v29;
  if ( v24 )
    v49 = a2 ^ v29;
  *(_QWORD *)(v29 + 16) = v49 | v47 & 3;
LABEL_32:
  if ( v24 && v29 )
  {
    *(_QWORD *)(v22 + a2) = v30;
    v31 = a2 ^ a4;
LABEL_114:
    *v27 = v31;
  }
  else
  {
    *(_QWORD *)(v22 + a2) = v29;
    v31 = a2 ^ a4;
    if ( v24 )
      goto LABEL_114;
    *v27 = a2;
    v31 = a4;
  }
  *(_QWORD *)(a2 + 16) &= 3uLL;
  *(_QWORD *)(a2 + 16) |= v31;
  a2 = a4;
LABEL_36:
  v32 = *a1;
  if ( (a1[1] & 1) != 0 && v32 )
    v32 ^= (unsigned __int64)a1;
  v33 = !v20;
  v34 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v35 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v34 )
    v34 ^= a2;
  if ( v34 != v17 )
    goto LABEL_85;
  v36 = (__int64 *)(v17 + 8 * !v33);
  v9 = *v36;
  if ( (a1[1] & 1) != 0 && v9 )
    v9 ^= v17;
  if ( v9 != a2 )
    goto LABEL_85;
  v37 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) == 0 )
    goto LABEL_42;
  if ( !v37 )
    goto LABEL_83;
  v37 ^= v17;
LABEL_42:
  if ( !v37 )
  {
LABEL_83:
    if ( v32 == v17 )
    {
      v32 = a2;
      goto LABEL_48;
    }
    goto LABEL_85;
  }
  v38 = *(_QWORD *)(v37 + 8);
  if ( (a1[1] & 1) != 0 && v38 )
    v38 ^= v37;
  if ( v38 == v17 )
  {
    v9 = a2;
    if ( (a1[1] & 1) != 0 )
      v9 = a2 ^ v37;
    *(_QWORD *)(v37 + 8) = v9;
    goto LABEL_48;
  }
  v44 = *(_QWORD *)v37;
  if ( (a1[1] & 1) != 0 && v44 )
    v44 ^= v37;
  if ( v44 != v17 )
    goto LABEL_85;
  v9 = a2;
  if ( (a1[1] & 1) != 0 )
    v9 = a2 ^ v37;
  *(_QWORD *)v37 = v9;
LABEL_48:
  if ( v35 && v37 )
  {
    *(_QWORD *)(a2 + 16) &= 3uLL;
    *(_QWORD *)(a2 + 16) |= a2 ^ v37;
    v39 = (unsigned __int64 *)(a2 + 8 * v33);
    v40 = *v39;
LABEL_129:
    if ( v40 )
    {
      v40 ^= a2;
      goto LABEL_50;
    }
    goto LABEL_51;
  }
  *(_QWORD *)(a2 + 16) &= 3uLL;
  *(_QWORD *)(a2 + 16) |= v37;
  v39 = (unsigned __int64 *)(a2 + 8 * v33);
  v40 = *v39;
  if ( v35 )
    goto LABEL_129;
LABEL_50:
  if ( !v40 )
  {
LABEL_51:
    v41 = v17 ^ v40;
    goto LABEL_52;
  }
  v45 = *(_QWORD *)(v40 + 16);
  v46 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v35 && v46 )
    v46 ^= v40;
  if ( v46 != a2 )
LABEL_85:
    __fastfail(0x1Du);
  v9 = v17;
  v41 = v18 ^ v40;
  if ( v35 )
    v9 = v18 ^ v40;
  *(_QWORD *)(v40 + 16) = v9 | v45 & 3;
LABEL_52:
  if ( v35 && v40 )
  {
    *v36 = v41;
    v42 = a2 ^ v18;
LABEL_135:
    *v39 = v42;
  }
  else
  {
    v42 = a2 ^ v18;
    *v36 = v40;
    if ( v35 )
      goto LABEL_135;
    *v39 = v17;
    v42 = a2;
  }
  *(_QWORD *)(v17 + 16) &= 3uLL;
  *(_QWORD *)(v17 + 16) |= v42;
  if ( (a1[1] & 1) != 0 )
  {
    LOBYTE(v9) = (unsigned __int8)a1 ^ v32;
    if ( v32 )
      v4 = (unsigned __int64)a1 ^ v32;
  }
  else
  {
    v4 = v32;
  }
  *a1 = v4;
  *(_BYTE *)(v17 + 16) |= 1u;
  *(_BYTE *)(a2 + 16) &= ~1u;
  return v9;
}
