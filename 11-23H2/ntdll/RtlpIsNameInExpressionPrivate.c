/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x180108F4C
 * Callers:
 *     RtlIsNameInExpression @ 0x180108DC0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180108E70 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memcmp @ 0x180093310 (memcmp.c)
 *     RtlDoesNameContainWildCards @ 0x180108D60 (RtlDoesNameContainWildCards.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  __int64 v5; // r13
  unsigned __int16 *v7; // r9
  _WORD *v9; // rdx
  void *v10; // r8
  __int64 v11; // rsi
  char v12; // r14
  unsigned __int16 v13; // bp
  _WORD *v14; // rax
  __m128i v15; // xmm0
  unsigned __int16 v16; // bx
  __int64 v17; // rax
  wchar_t *v18; // r14
  unsigned __int64 v19; // r9
  unsigned __int16 v21; // bx
  unsigned __int16 v22; // dx
  __int64 v23; // rcx
  char *v25; // r10
  char *v26; // r15
  int v27; // r12d
  unsigned __int16 v28; // r11
  __int16 v29; // bp
  unsigned __int64 v30; // rcx
  __int64 v31; // rbx
  __int16 v32; // ax
  unsigned int v33; // r12d
  __int16 v34; // si
  char v35; // r9
  __int64 v36; // r14
  _OWORD *Heap; // rax
  __int128 v38; // xmm1
  char *v39; // rax
  __int64 v40; // rax
  unsigned __int16 v41; // cx
  __int64 v42; // rax
  __int16 v43; // si
  unsigned __int16 v44; // cx
  __int64 v45; // rax
  unsigned int v46; // r9d
  char *v47; // rax
  __int16 v48; // bx
  char v49; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v51; // [rsp+22h] [rbp-C6h]
  unsigned __int16 v53; // [rsp+2Ch] [rbp-BCh]
  unsigned int v55; // [rsp+38h] [rbp-B0h]
  unsigned int v56; // [rsp+3Ch] [rbp-ACh]
  char *v58; // [rsp+48h] [rbp-A0h]
  int v59; // [rsp+50h] [rbp-98h]
  _UNICODE_STRING Expression; // [rsp+58h] [rbp-90h] BYREF
  _QWORD *v61; // [rsp+68h] [rbp-80h]
  _WORD v62[16]; // [rsp+70h] [rbp-78h] BYREF
  char v63; // [rsp+90h] [rbp-58h] BYREF

  LODWORD(v5) = 0;
  v7 = a2;
  v9 = a1;
  v51 = 0;
  v10 = 0LL;
  v11 = *v7;
  v12 = 0;
  v49 = 0;
  if ( !(_WORD)v11 )
    return *a1 + (_DWORD)v11 == 0;
  v13 = *a1;
  if ( !*a1 )
    return *a1 + (_DWORD)v11 == 0;
  if ( v13 != 2 )
  {
    v61 = a1 + 4;
    if ( **((_WORD **)a1 + 1) != 42 )
      goto LABEL_18;
    v15 = *(__m128i *)a1;
    *(_QWORD *)&Expression.Length = *(_QWORD *)a1;
    v16 = Expression.Length - 2;
    v17 = *(_QWORD *)&Expression.Length >> 16;
    v18 = (wchar_t *)(_mm_srli_si128(v15, 8).m128i_u64[0] + 2);
    Expression.Length -= 2;
    Expression.Buffer = v18;
    Expression.MaximumLength = v17 - 2;
    if ( RtlDoesNameContainWildCards(&Expression) )
    {
      v7 = a2;
      v10 = 0LL;
      v9 = a1;
      v12 = 0;
      goto LABEL_18;
    }
    if ( (unsigned __int16)v11 >= (unsigned __int16)(v13 - 2) )
    {
      v19 = (v11 - (unsigned __int64)v16) >> 1;
      if ( !a3 )
        return memcmp(v18, (const void *)(*((_QWORD *)a2 + 1) + 2LL * (unsigned int)v19), v16) == 0;
      v21 = v16 >> 1;
      v22 = 0;
      if ( !v21 )
        return 1;
      while ( 1 )
      {
        v23 = v18[v22];
        if ( a4 )
          LOWORD(v23) = *(_WORD *)(a5 + 2 * v23);
        if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * ((unsigned int)v19 + v22))) != (_WORD)v23 )
          break;
        if ( ++v22 >= v21 )
          return 1;
      }
    }
    return 0;
  }
  v14 = (_WORD *)*((_QWORD *)a1 + 1);
  v61 = a1 + 4;
  if ( *v14 == 42 )
    return 1;
LABEL_18:
  v62[0] = 0;
  v56 = 1;
  v25 = (char *)v62;
  v58 = (char *)v62;
  v26 = &v63;
  v53 = 0;
  v27 = 1;
  v28 = 0;
  if ( v13 > 0x7FFFu )
    return 0;
  v29 = 2 * v13;
  while ( 2 )
  {
    if ( v28 >= (unsigned __int16)v11 )
    {
      v49 = 1;
      v12 = 1;
      if ( *(_WORD *)&v25[2 * (v27 - 1)] == v29 )
        break;
    }
    else
    {
      v30 = (unsigned __int64)v28 >> 1;
      v28 += 2;
      v53 = v28;
      v51 = *(_WORD *)(*((_QWORD *)v7 + 1) + 2 * v30);
    }
    v55 = 0;
    LODWORD(v31) = 0;
    while ( 2 )
    {
      v32 = 0;
      v33 = ((unsigned int)*(unsigned __int16 *)&v25[2 * (unsigned int)v5] + 1) >> 1;
      v5 = (unsigned int)(v5 + 1);
      do
      {
        while ( 1 )
        {
          if ( (_WORD)v33 == *v9 )
            goto LABEL_56;
          LOWORD(v33) = v32 + v33;
          v34 = 2 * v33;
          if ( (_WORD)v33 == *v9 )
          {
            *(_WORD *)&v26[2 * (unsigned int)v31] = v29;
            goto LABEL_67;
          }
          v35 = a3;
          v36 = *(unsigned __int16 *)(*v61 + 2 * ((unsigned __int64)(unsigned __int16)v33 >> 1));
          if ( a3 && a4 )
            LOWORD(v36) = *(_WORD *)(a5 + 2 * v36);
          if ( (unsigned int)v31 >= 0xE && !v10 )
          {
            v59 = (unsigned __int16)*v9 >> 1;
            Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)(v59 + 1));
            v10 = Heap;
            if ( !Heap )
              RtlRaiseStatus(-1073741801);
            v9 = a1;
            v28 = v53;
            v35 = a3;
            *Heap = *(_OWORD *)v26;
            v38 = *((_OWORD *)v26 + 1);
            v26 = (char *)Heap;
            v25 = (char *)Heap + 2 * (unsigned int)(2 * v59 + 2);
            Heap[1] = v38;
            v39 = v58;
            v58 = v25;
            *(_OWORD *)v25 = *(_OWORD *)v39;
            *((_OWORD *)v25 + 1) = *((_OWORD *)v39 + 1);
          }
          if ( (_WORD)v36 == 42 )
          {
            v40 = (unsigned int)v31;
            v31 = (unsigned int)(v31 + 1);
            *(_WORD *)&v26[2 * v40] = v34;
            *(_WORD *)&v26[2 * v31] = v34 + 3;
            LODWORD(v31) = v31 + 1;
LABEL_36:
            v12 = v49;
            goto LABEL_37;
          }
          if ( (_WORD)v36 != 60 )
            break;
          v12 = v49;
          if ( v49 || v51 != 46 )
            goto LABEL_46;
          v41 = v28;
          if ( v28 < *a2 )
          {
            while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v41 >> 1)) != 46 )
            {
              v41 += 2;
              if ( v41 >= *a2 )
                goto LABEL_44;
            }
LABEL_46:
            v42 = (unsigned int)v31;
            v31 = (unsigned int)(v31 + 1);
            *(_WORD *)&v26[2 * v42] = v34;
            *(_WORD *)&v26[2 * v31] = v34 + 3;
            goto LABEL_45;
          }
LABEL_44:
          *(_WORD *)&v26[2 * (unsigned int)v31] = v34 + 3;
LABEL_45:
          v9 = a1;
          LODWORD(v31) = v31 + 1;
LABEL_37:
          v32 = 2;
        }
        v43 = v34 + 4;
        if ( (_WORD)v36 != 62 )
        {
          if ( (_WORD)v36 == 34 )
          {
            if ( v49 )
              goto LABEL_36;
            v44 = v51;
            if ( v51 == 46 )
              goto LABEL_54;
          }
          else
          {
            if ( v49 )
              goto LABEL_55;
            if ( (_WORD)v36 == 63 )
            {
LABEL_54:
              v45 = (unsigned int)v31;
              LODWORD(v31) = v31 + 1;
              *(_WORD *)&v26[2 * v45] = v43;
LABEL_55:
              v12 = v49;
              goto LABEL_56;
            }
            v44 = v51;
          }
          if ( v35 )
            v44 = *(_WORD *)(a5 + 2LL * v44);
          if ( (_WORD)v36 != v44 )
            goto LABEL_55;
          goto LABEL_54;
        }
        v12 = v49;
        v32 = 2;
      }
      while ( v49 || v51 == 46 );
      *(_WORD *)&v26[2 * (unsigned int)v31] = v43;
LABEL_67:
      LODWORD(v31) = v31 + 1;
LABEL_56:
      if ( (unsigned int)v5 < v56 )
      {
        v46 = v55;
        while ( v46 < (unsigned int)v31 )
        {
          for ( ; (unsigned int)v5 < v56; v5 = (unsigned int)(v5 + 1) )
          {
            if ( *(_WORD *)&v25[2 * v5] >= *(_WORD *)&v26[2 * v46] )
              break;
          }
          v55 = ++v46;
          if ( (unsigned int)v5 >= v56 )
            goto LABEL_63;
        }
        v9 = a1;
        continue;
      }
      break;
    }
LABEL_63:
    v7 = a2;
    LODWORD(v5) = 0;
    LOWORD(v11) = *a2;
    if ( !(_DWORD)v31 )
    {
      if ( v10 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      return 0;
    }
    v58 = v26;
    v47 = v25;
    v56 = v31;
    v25 = v26;
    v26 = v47;
    v27 = v31;
    if ( !v12 )
    {
      v9 = a1;
      continue;
    }
    break;
  }
  v48 = *(_WORD *)&v25[2 * (v27 - 1)];
  if ( v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return v48 == v29;
}
