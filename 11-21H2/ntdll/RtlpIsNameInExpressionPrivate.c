/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x180107DCC
 * Callers:
 *     RtlIsNameInExpression @ 0x180107C40 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180107CF0 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memcmp @ 0x180097B10 (memcmp.c)
 *     RtlDoesNameContainWildCards @ 0x180107BE0 (RtlDoesNameContainWildCards.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 *v5; // r14
  unsigned __int16 *v8; // rdx
  __int64 v9; // r8
  char v10; // r11
  unsigned __int16 v11; // bp
  __m128i v12; // xmm0
  unsigned __int16 v13; // bx
  __int64 v14; // rax
  unsigned __int16 *v15; // rsi
  unsigned __int64 v16; // r9
  bool v17; // zf
  unsigned __int16 v18; // bx
  unsigned __int16 v19; // dx
  __int64 v20; // rcx
  char *v22; // r9
  char *v23; // r15
  int v24; // esi
  unsigned __int16 v25; // r10
  __int16 v26; // bp
  unsigned __int16 v27; // ax
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // r13d
  __int16 v32; // ax
  __int16 v33; // si
  __int16 v34; // r14
  char v35; // cl
  char *Heap; // rax
  __int64 v37; // rdx
  __int128 v38; // xmm1
  char *v39; // rax
  __int64 v40; // rax
  unsigned __int16 v41; // cx
  __int64 v42; // rax
  __int16 v43; // si
  unsigned __int16 v44; // r13
  __int64 v45; // rax
  unsigned int v46; // edx
  char *v47; // rax
  __int16 v48; // bx
  __int64 v49; // rax
  unsigned __int16 v50; // cx
  char v51; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v53; // [rsp+22h] [rbp-C6h]
  unsigned __int16 v56; // [rsp+38h] [rbp-B0h]
  unsigned int v57; // [rsp+3Ch] [rbp-ACh]
  unsigned int v58; // [rsp+40h] [rbp-A8h]
  char *v60; // [rsp+50h] [rbp-98h]
  int v61; // [rsp+58h] [rbp-90h]
  _QWORD v62[2]; // [rsp+60h] [rbp-88h] BYREF
  _WORD v63[16]; // [rsp+70h] [rbp-78h] BYREF
  char v64; // [rsp+90h] [rbp-58h] BYREF

  v5 = a2;
  v53 = 0;
  v8 = a1;
  v9 = 0LL;
  v10 = 0;
  v51 = 0;
  if ( !*v5 )
    return *a1 + *v5 == 0;
  v11 = *a1;
  if ( !*a1 )
    return *a1 + *v5 == 0;
  if ( v11 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v12 = *(__m128i *)a1;
    v62[0] = *(_QWORD *)a1;
    v13 = LOWORD(v62[0]) - 2;
    v14 = v62[0] >> 16;
    v15 = (unsigned __int16 *)(_mm_srli_si128(v12, 8).m128i_u64[0] + 2);
    LOWORD(v62[0]) -= 2;
    v62[1] = v15;
    WORD1(v62[0]) = v14 - 2;
    if ( !RtlDoesNameContainWildCards((unsigned __int16 *)v62) )
    {
      if ( *v5 >= (unsigned __int16)(v11 - 2) )
      {
        v16 = (*v5 - (unsigned __int64)v13) >> 1;
        if ( !a3 )
          return memcmp(v15, (const void *)(*((_QWORD *)v5 + 1) + 2LL * (unsigned int)v16), v13) == 0;
        v18 = v13 >> 1;
        v19 = 0;
        if ( v18 )
        {
          while ( 1 )
          {
            v20 = v15[v19];
            if ( a4 )
              LOWORD(v20) = *(_WORD *)(a5 + 2 * v20);
            if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v5 + 1) + 2LL * ((unsigned int)v16 + v19))) != (_WORD)v20 )
              break;
            if ( ++v19 >= v18 )
              return 1;
          }
          return 0;
        }
        return 1;
      }
      return 0;
    }
    v8 = a1;
    v9 = 0LL;
    v10 = 0;
  }
  v22 = (char *)v63;
  v63[0] = 0;
  v60 = (char *)v63;
  v23 = &v64;
  v24 = 1;
  v58 = 1;
  v25 = 0;
  v56 = 0;
  v26 = 2 * v11;
  do
  {
    if ( v25 >= *v5 )
    {
      v51 = 1;
      v10 = 1;
      if ( *(_WORD *)&v22[2 * (v24 - 1)] == v26 )
        break;
    }
    else
    {
      v27 = *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * ((unsigned __int64)v25 >> 1));
      v25 += 2;
      v53 = v27;
      v56 = v25;
    }
    v57 = 0;
    LODWORD(v28) = 0;
    LODWORD(v29) = 0;
    do
    {
      v30 = (unsigned int)v28;
      v28 = (unsigned int)(v28 + 1);
      v31 = ((unsigned int)*(unsigned __int16 *)&v22[2 * v30] + 1) >> 1;
      v32 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (_WORD)v31 == *v8 )
            goto LABEL_53;
          LOWORD(v31) = v32 + v31;
          v33 = 2 * v31;
          if ( (_WORD)v31 == *v8 )
          {
            *(_WORD *)&v23[2 * (unsigned int)v29] = v26;
            goto LABEL_67;
          }
          v34 = *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v31 >> 1));
          v35 = a3;
          if ( a3 && a4 )
            v34 = *(_WORD *)(a5
                           + 2LL
                           * *(unsigned __int16 *)(*((_QWORD *)v8 + 1)
                                                 + 2 * ((unsigned __int64)(unsigned __int16)v31 >> 1)));
          if ( (unsigned int)v29 >= 0xE && !v9 )
          {
            v61 = *v8 >> 1;
            Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)(v61 + 1));
            v9 = (__int64)Heap;
            if ( !Heap )
              RtlRaiseStatus(-1073741801, v37, 0LL);
            v8 = a1;
            v25 = v56;
            v10 = v51;
            *(_OWORD *)Heap = *(_OWORD *)v23;
            v38 = *((_OWORD *)v23 + 1);
            v23 = Heap;
            v22 = &Heap[2 * (2 * v61 + 2)];
            *((_OWORD *)Heap + 1) = v38;
            v39 = v60;
            v60 = v22;
            *(_OWORD *)v22 = *(_OWORD *)v39;
            *((_OWORD *)v22 + 1) = *((_OWORD *)v39 + 1);
            v35 = a3;
          }
          if ( v34 == 42 )
          {
            v40 = (unsigned int)v29;
            v29 = (unsigned int)(v29 + 1);
            *(_WORD *)&v23[2 * v40] = v33;
            *(_WORD *)&v23[2 * v29] = v33 + 3;
            LODWORD(v29) = v29 + 1;
LABEL_34:
            v5 = a2;
            goto LABEL_35;
          }
          if ( v34 != 60 )
            break;
          v5 = a2;
          if ( v10 || v53 != 46 )
            goto LABEL_44;
          v41 = v25;
          if ( v25 < *a2 )
          {
            while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v41 >> 1)) != 46 )
            {
              v41 += 2;
              if ( v41 >= *a2 )
                goto LABEL_42;
            }
LABEL_44:
            v42 = (unsigned int)v29;
            v29 = (unsigned int)(v29 + 1);
            *(_WORD *)&v23[2 * v42] = v33;
            *(_WORD *)&v23[2 * v29] = v33 + 3;
            goto LABEL_43;
          }
LABEL_42:
          *(_WORD *)&v23[2 * (unsigned int)v29] = v33 + 3;
LABEL_43:
          v8 = a1;
          LODWORD(v29) = v29 + 1;
LABEL_35:
          v32 = 2;
        }
        v43 = v33 + 4;
        if ( v34 != 62 )
          break;
        v5 = a2;
        v32 = 2;
        if ( !v10 && v53 != 46 )
          goto LABEL_66;
      }
      if ( v34 != 34 )
      {
        if ( !v10 )
        {
          if ( v34 != 63 )
          {
            v44 = v53;
            goto LABEL_73;
          }
          v49 = (unsigned int)v29;
          LODWORD(v29) = v29 + 1;
          *(_WORD *)&v23[2 * v49] = v43;
        }
        v5 = a2;
        goto LABEL_53;
      }
      if ( v10 )
        goto LABEL_34;
      v44 = v53;
      if ( v53 == 46 )
      {
        v5 = a2;
        v45 = (unsigned int)v29;
        LODWORD(v29) = v29 + 1;
        *(_WORD *)&v23[2 * v45] = v43;
        goto LABEL_53;
      }
LABEL_73:
      if ( v35 )
        v50 = *(_WORD *)(a5 + 2LL * v44);
      else
        v50 = v44;
      v17 = v34 == (__int16)v50;
      v5 = a2;
      if ( v17 )
      {
LABEL_66:
        *(_WORD *)&v23[2 * (unsigned int)v29] = v43;
LABEL_67:
        LODWORD(v29) = v29 + 1;
      }
LABEL_53:
      if ( (unsigned int)v28 >= v58 )
        break;
      v46 = v57;
      do
      {
        if ( v46 >= (unsigned int)v29 )
          break;
        for ( ; (unsigned int)v28 < v58; v28 = (unsigned int)(v28 + 1) )
        {
          if ( *(_WORD *)&v22[2 * v28] >= *(_WORD *)&v23[2 * v46] )
            break;
        }
        ++v46;
      }
      while ( (unsigned int)v28 < v58 );
      v57 = v46;
      v8 = a1;
    }
    while ( (unsigned int)v28 < v58 );
    if ( !(_DWORD)v29 )
    {
      if ( v9 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
      return 0;
    }
    v60 = v23;
    v47 = v22;
    v58 = v29;
    v22 = v23;
    v23 = v47;
    v24 = v29;
  }
  while ( !v10 );
  v48 = *(_WORD *)&v22[2 * (v24 - 1)];
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  return v48 == v26;
}
