/*
 * XREFs of RtlRbInsertNodeEx @ 0x18001AD20
 * Callers:
 *     EtwpInsertGuidEntry @ 0x180007C68 (EtwpInsertGuidEntry.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180015220 (RtlpHpSegFreeRangeInsert.c)
 *     EtwpInsertRegistration @ 0x1800162A8 (EtwpInsertRegistration.c)
 *     RtlpHpSegPageRangeShrink @ 0x180017F70 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180018680 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsContextFree @ 0x180018CE0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180019AF0 (RtlpHpVsChunkSplit.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18001CAA8 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpCheckForRetryLoading @ 0x18004FFEC (LdrpCheckForRetryLoading.c)
 *     RtlpHpVaMgrFree @ 0x180055F70 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 *     RtlpCreateWnfNameSubscription @ 0x180059EFC (RtlpCreateWnfNameSubscription.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180076138 (RtlpHpVsFreeChunkInsert.c)
 *     LdrpAddRedirectedFunction @ 0x1800E0E90 (LdrpAddRedirectedFunction.c)
 *     RtlCompareExchangePointerMapping @ 0x180100FE0 (RtlCompareExchangePointerMapping.c)
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
  char v12; // bp
  unsigned __int64 v13; // r8
  char v14; // cl
  __int64 v15; // rdi
  unsigned __int64 v16; // r12
  BOOL v17; // esi
  _BOOL8 v18; // rdi
  _BOOL8 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  _QWORD *v23; // rdi
  _BOOL8 v24; // rsi
  unsigned __int64 v25; // rax
  int v26; // r9d
  unsigned __int64 *v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 *v32; // rsi
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  int v35; // ebp
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rbx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 *v41; // r15
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rax
  __int64 v44; // rbp
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // r12
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v54; // [rsp+38h] [rbp+10h]

  v4 = 0LL;
  v5 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v7 = *((_BYTE *)a1 + 8);
  v8 = a4;
  LOBYTE(v9) = v7 & 1;
  if ( !a2 )
  {
    v49 = (unsigned __int64)a1 ^ a4;
    if ( (_BYTE)v9 )
    {
      *a1 = v49;
      a1[1] = v49;
      *((_BYTE *)a1 + 8) = v49 | 1;
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
    v21 = a1[1];
    goto LABEL_21;
  }
  if ( v9 != 1 )
  {
    v21 = v9 ^ ((unsigned __int64)a1 | 1);
LABEL_21:
    if ( a2 == v21 )
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
  v12 = *((_BYTE *)a1 + 8);
  while ( 1 )
  {
    v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v14 = v12 & 1;
    if ( (v12 & 1) != 0 && v13 )
    {
      v13 ^= a2;
      v16 = v13;
      v15 = *(_QWORD *)v13;
    }
    else
    {
      v15 = *(_QWORD *)v13;
      v16 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v14 )
        goto LABEL_11;
    }
    if ( !v15 )
    {
LABEL_11:
      v17 = v15 != a2;
      v18 = v15 == a2;
      LODWORD(v19) = v17;
      v20 = v18;
      v9 = *(_QWORD *)(v13 + 8 * v18);
      if ( !v14 )
        goto LABEL_12;
      goto LABEL_91;
    }
    v19 = (v13 ^ v15) != a2;
    v18 = (v13 ^ v15) == a2;
    v17 = v19;
    v20 = !v19;
    v9 = *(_QWORD *)(v16 + 8 * !v19);
LABEL_91:
    if ( !v9 )
      break;
    v9 ^= v13;
LABEL_12:
    if ( !v9 || (*(_BYTE *)(v9 + 16) & 1) == 0 )
      break;
    *(_BYTE *)(a2 + 16) &= ~1u;
    a4 = v13;
    *(_BYTE *)(v9 + 16) &= ~1u;
    LOBYTE(v9) = *(_QWORD *)(v13 + 16);
    a2 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1[1] & 1) != 0 )
    {
      if ( !a2 )
        return v9;
      a2 ^= v13;
    }
    if ( a2 )
    {
      *(_BYTE *)(v13 + 16) = v9 | 1;
      v12 = *((_BYTE *)a1 + 8);
      v9 = *(_QWORD *)a2;
      if ( (v12 & 1) != 0 && v9 )
        v9 ^= a2;
      v5 = v13 != v9;
      if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
        continue;
    }
    return v9;
  }
  if ( v5 == v19 )
    goto LABEL_25;
  v34 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v35 = v12 & 1;
  if ( v35 && v34 )
    v34 ^= a4;
  if ( v34 != a2 )
    goto LABEL_82;
  v36 = *(_QWORD *)(a2 + 8 * v18);
  if ( v35 && v36 )
    v36 ^= a2;
  if ( v36 != a4 )
    goto LABEL_82;
  v37 = *(_QWORD *)(v13 + 8 * v19);
  if ( v35 && v37 )
    v37 ^= v13;
  if ( v37 != a2 )
    goto LABEL_82;
  v38 = (_QWORD *)(a2 + 16);
  v39 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v35 && v39 )
    v39 ^= a2;
  if ( v39 != v13 )
    goto LABEL_82;
  v54 = v16;
  v40 = a4 ^ v16;
  v41 = (unsigned __int64 *)(a4 + 8 * v19);
  if ( !v35 )
  {
    *(_QWORD *)(v13 + 8 * v19) = a4;
    *(_QWORD *)(a4 + 16) &= 3uLL;
    *(_QWORD *)(a4 + 16) |= v13;
    v42 = *v41;
    goto LABEL_57;
  }
  *(_QWORD *)(v13 + 8 * v19) = v40;
  *(_QWORD *)(a4 + 16) &= 3uLL;
  *(_QWORD *)(a4 + 16) |= v40;
  v42 = *v41;
  if ( *v41 )
  {
    v42 ^= a4;
    v54 = v16;
LABEL_57:
    if ( v42 )
    {
      v50 = *(_QWORD *)(v42 + 16);
      v51 = v50 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v35 && v51 )
        v51 ^= v42;
      if ( v51 == a4 )
      {
        v52 = a2;
        if ( v35 )
          v52 = a2 ^ v42;
        *(_QWORD *)(v42 + 16) = v52 | v50 & 3;
        v16 = v54;
        goto LABEL_58;
      }
      goto LABEL_82;
    }
  }
LABEL_58:
  if ( v35 && v42 )
  {
    *(_QWORD *)(a2 + 8 * v20) = a2 ^ v42;
    v43 = a4 ^ a2;
LABEL_111:
    *v41 = v43;
  }
  else
  {
    *(_QWORD *)(a2 + 8 * v18) = v42;
    v43 = a4 ^ a2;
    if ( v35 )
      goto LABEL_111;
    *v41 = a2;
    v43 = a4;
  }
  *v38 &= 3uLL;
  a2 = a4;
  *v38 |= v43;
LABEL_25:
  v22 = *a1;
  if ( (a1[1] & 1) != 0 )
  {
    if ( v22 )
      v22 ^= (unsigned __int64)a1;
    else
      v22 = 0LL;
  }
  v23 = (_QWORD *)(a2 + 16);
  v24 = !v17;
  v25 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v26 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v25 )
    v25 ^= a2;
  if ( v25 != v13 )
    goto LABEL_82;
  v27 = (unsigned __int64 *)(v13 + 8 * !v24);
  v28 = *v27;
  if ( (a1[1] & 1) != 0 && v28 )
    v28 ^= v13;
  if ( v28 != a2 )
    goto LABEL_82;
  v29 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) == 0 )
    goto LABEL_31;
  if ( !v29 )
    goto LABEL_80;
  v29 ^= v13;
LABEL_31:
  if ( !v29 )
  {
LABEL_80:
    if ( v22 == v13 )
    {
      v22 = a2;
      goto LABEL_37;
    }
    goto LABEL_82;
  }
  v30 = *(_QWORD *)(v29 + 8);
  if ( (a1[1] & 1) != 0 && v30 )
    v30 ^= v29;
  if ( v30 == v13 )
  {
    v31 = a2;
    if ( (a1[1] & 1) != 0 )
      v31 = a2 ^ v29;
    *(_QWORD *)(v29 + 8) = v31;
    goto LABEL_37;
  }
  v47 = *(_QWORD *)v29;
  if ( (a1[1] & 1) != 0 && v47 )
    v47 ^= v29;
  if ( v47 != v13 )
LABEL_82:
    __fastfail(0x1Du);
  v48 = a2;
  if ( (a1[1] & 1) != 0 )
    v48 = a2 ^ v29;
  *(_QWORD *)v29 = v48;
LABEL_37:
  if ( v26 && v29 )
  {
    *v23 &= 3uLL;
    v32 = (unsigned __int64 *)(a2 + 8 * v24);
    *v23 |= a2 ^ v29;
    v33 = *v32;
LABEL_127:
    if ( v33 )
    {
      v33 ^= a2;
      goto LABEL_39;
    }
    goto LABEL_40;
  }
  *v23 &= 3uLL;
  v32 = (unsigned __int64 *)(a2 + 8 * v24);
  *v23 |= v29;
  v33 = *v32;
  if ( v26 )
    goto LABEL_127;
LABEL_39:
  if ( v33 )
  {
    v44 = *(_QWORD *)(v33 + 16);
    v45 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v26 && v45 )
      v45 ^= v33;
    if ( v45 == a2 )
    {
      v46 = v13;
      if ( v26 )
        v46 = v13 ^ v33;
      *(_QWORD *)(v33 + 16) = v46 | v44 & 3;
      goto LABEL_40;
    }
    goto LABEL_82;
  }
LABEL_40:
  if ( v26 && v33 )
  {
    *v27 = v13 ^ v33;
    v9 = v16 ^ a2;
LABEL_133:
    *v32 = v9;
  }
  else
  {
    *v27 = v33;
    v9 = v16 ^ a2;
    if ( v26 )
      goto LABEL_133;
    *v32 = v13;
    v9 = a2;
  }
  *(_QWORD *)(v13 + 16) &= 3uLL;
  *(_QWORD *)(v13 + 16) |= v9;
  if ( (a1[1] & 1) != 0 )
  {
    LOBYTE(v9) = (unsigned __int8)a1 ^ v22;
    if ( v22 )
      v4 = (unsigned __int64)a1 ^ v22;
  }
  else
  {
    v4 = v22;
  }
  *a1 = v4;
  *(_BYTE *)(v13 + 16) |= 1u;
  *(_BYTE *)v23 &= ~1u;
  return v9;
}
