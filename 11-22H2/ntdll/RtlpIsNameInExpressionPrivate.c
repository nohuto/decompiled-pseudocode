/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x180107B3C
 * Callers:
 *     RtlIsNameInExpression @ 0x1801079B0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180107A60 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memcmp @ 0x180092B10 (memcmp.c)
 *     RtlDoesNameContainWildCards @ 0x180107950 (RtlDoesNameContainWildCards.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 *v5; // rbp
  _WORD *v6; // rdx
  __int64 v8; // rdi
  unsigned __int16 v10; // r11
  void *v11; // r8
  __int16 v12; // r14
  _WORD *v13; // rax
  __m128i v14; // xmm0
  unsigned __int16 v15; // bx
  __int64 v16; // rax
  wchar_t *v17; // r15
  unsigned __int64 v18; // r9
  unsigned __int16 v20; // bx
  unsigned __int16 i; // dx
  __int64 v22; // rcx
  char *v24; // r9
  char *v25; // r15
  int v26; // r12d
  unsigned __int16 v27; // r10
  __int16 v28; // r14
  unsigned __int64 v29; // rcx
  __int64 v30; // r13
  unsigned int v31; // ebx
  __int16 v32; // ax
  unsigned int v33; // r12d
  __int16 v34; // di
  __int16 v35; // bp
  char v36; // cl
  _OWORD *Heap; // rax
  __int128 v38; // xmm1
  char *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned __int16 v42; // cx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  __int16 v46; // di
  bool v47; // zf
  __int64 v48; // rax
  unsigned int v49; // ecx
  unsigned __int16 v50; // cx
  char *v51; // rax
  unsigned __int16 v52; // cx
  __int16 v53; // bx
  char v54; // [rsp+20h] [rbp-D8h]
  unsigned __int16 v57; // [rsp+24h] [rbp-D4h]
  unsigned __int16 v59; // [rsp+38h] [rbp-C0h]
  unsigned int v60; // [rsp+3Ch] [rbp-BCh]
  unsigned int v62; // [rsp+48h] [rbp-B0h]
  char *v63; // [rsp+50h] [rbp-A8h]
  int v64; // [rsp+58h] [rbp-A0h]
  _UNICODE_STRING Expression; // [rsp+60h] [rbp-98h] BYREF
  _QWORD *v66; // [rsp+70h] [rbp-88h]
  _WORD v67[16]; // [rsp+80h] [rbp-78h] BYREF
  char v68; // [rsp+A0h] [rbp-58h] BYREF

  v5 = a2;
  v6 = a1;
  v8 = *v5;
  v57 = 0;
  v10 = 0;
  v54 = 0;
  v11 = 0LL;
  if ( !(_WORD)v8 )
    return *a1 + (_DWORD)v8 == 0;
  v12 = *a1;
  if ( !*a1 )
    return *a1 + (_DWORD)v8 == 0;
  if ( v12 != 2 )
  {
    v66 = a1 + 4;
    if ( **((_WORD **)a1 + 1) != 42 )
      goto LABEL_18;
    v14 = *(__m128i *)a1;
    *(_QWORD *)&Expression.Length = *(_QWORD *)a1;
    v15 = Expression.Length - 2;
    v16 = *(_QWORD *)&Expression.Length >> 16;
    v17 = (wchar_t *)(_mm_srli_si128(v14, 8).m128i_u64[0] + 2);
    Expression.Length -= 2;
    Expression.Buffer = v17;
    Expression.MaximumLength = v16 - 2;
    if ( RtlDoesNameContainWildCards(&Expression) )
    {
      v6 = a1;
      v11 = 0LL;
      v10 = 0;
      goto LABEL_18;
    }
    if ( (unsigned __int16)v8 < (unsigned __int16)(v12 - 2) )
      return 0;
    v18 = (v8 - (unsigned __int64)v15) >> 1;
    if ( a3 )
    {
      v20 = v15 >> 1;
      for ( i = 0; i < v20; ++i )
      {
        v22 = v17[i];
        if ( a4 )
          LOWORD(v22) = *(_WORD *)(a5 + 2 * v22);
        if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v5 + 1) + 2LL * ((unsigned int)v18 + i))) != (_WORD)v22 )
          return 0;
      }
      return 1;
    }
    return memcmp(v17, (const void *)(*((_QWORD *)v5 + 1) + 2LL * (unsigned int)v18), v15) == 0;
  }
  v13 = (_WORD *)*((_QWORD *)a1 + 1);
  v66 = a1 + 4;
  if ( *v13 == 42 )
    return 1;
LABEL_18:
  v24 = (char *)v67;
  v67[0] = 0;
  v63 = (char *)v67;
  v25 = &v68;
  v26 = 1;
  v62 = 1;
  v27 = 0;
  v59 = 0;
  v28 = 2 * v12;
  while ( 2 )
  {
    if ( v27 >= (unsigned __int16)v8 )
    {
      v54 = 1;
      if ( *(_WORD *)&v24[2 * (v26 - 1)] == v28 )
        goto LABEL_82;
    }
    else
    {
      v29 = (unsigned __int64)v27 >> 1;
      v27 += 2;
      v59 = v27;
      v10 = *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * v29);
      v57 = v10;
    }
    v60 = 0;
    LODWORD(v30) = 0;
    v31 = 0;
    while ( 2 )
    {
      v32 = 0;
      v33 = ((unsigned int)*(unsigned __int16 *)&v24[2 * (unsigned int)v30] + 1) >> 1;
      v30 = (unsigned int)(v30 + 1);
      while ( 1 )
      {
        if ( (_WORD)v33 == *v6 )
          goto LABEL_55;
        LOWORD(v33) = v32 + v33;
        v34 = 2 * v33;
        if ( (_WORD)v33 == *v6 )
          break;
        v35 = *(_WORD *)(*v66 + 2 * ((unsigned __int64)(unsigned __int16)v33 >> 1));
        v36 = a3;
        if ( a3 && a4 )
          v35 = *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*v66 + 2 * ((unsigned __int64)(unsigned __int16)v33 >> 1)));
        if ( v31 >= 0xE && !v11 )
        {
          v64 = (unsigned __int16)*v6 >> 1;
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)(v64 + 1));
          v11 = Heap;
          if ( !Heap )
            RtlRaiseStatus(-1073741801);
          v6 = a1;
          v27 = v59;
          v10 = v57;
          *Heap = *(_OWORD *)v25;
          v38 = *((_OWORD *)v25 + 1);
          v25 = (char *)Heap;
          v24 = (char *)Heap + 2 * (unsigned int)(2 * v64 + 2);
          Heap[1] = v38;
          v39 = v63;
          v63 = v24;
          *(_OWORD *)v24 = *(_OWORD *)v39;
          *((_OWORD *)v24 + 1) = *((_OWORD *)v39 + 1);
          v36 = a3;
        }
        if ( v35 == 42 )
        {
          v40 = v31;
          v41 = v31 + 1;
          *(_WORD *)&v25[2 * v40] = v34;
          *(_WORD *)&v25[2 * v41] = v34 + 3;
          v31 = v41 + 1;
LABEL_35:
          v5 = a2;
          goto LABEL_36;
        }
        if ( v35 == 60 )
        {
          v5 = a2;
          if ( v54 || v10 != 46 )
            goto LABEL_44;
          v42 = v27;
          if ( v27 < *a2 )
          {
            while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v42 >> 1)) != 46 )
            {
              v42 += 2;
              if ( v42 >= *a2 )
                goto LABEL_43;
            }
LABEL_44:
            v6 = a1;
            v44 = v31;
            v45 = v31 + 1;
            *(_WORD *)&v25[2 * v44] = v34;
            *(_WORD *)&v25[2 * v45] = v34 + 3;
            v31 = v45 + 1;
            goto LABEL_48;
          }
LABEL_43:
          v6 = a1;
          v43 = v31++;
          *(_WORD *)&v25[2 * v43] = v34 + 3;
LABEL_36:
          v32 = 2;
        }
        else
        {
          v46 = v34 + 4;
          if ( v35 != 62 )
          {
            if ( v35 != 34 )
            {
              if ( !v54 )
              {
                v47 = v35 == 63;
LABEL_52:
                if ( v47 || (!v36 ? (v52 = v10) : (v52 = *(_WORD *)(a5 + 2LL * v10)), v35 == v52) )
                {
                  v48 = v31++;
                  *(_WORD *)&v25[2 * v48] = v46;
                }
              }
              v5 = a2;
              goto LABEL_55;
            }
            if ( !v54 )
            {
              v47 = v10 == 46;
              goto LABEL_52;
            }
            goto LABEL_35;
          }
          v5 = a2;
          v32 = 2;
          if ( !v54 )
          {
            if ( v10 != 46 )
            {
              *(_WORD *)&v25[2 * v31] = v46;
              goto LABEL_68;
            }
LABEL_48:
            v32 = 2;
          }
        }
      }
      *(_WORD *)&v25[2 * v31] = v28;
LABEL_68:
      ++v31;
LABEL_55:
      if ( (unsigned int)v30 < v62 )
      {
        v49 = v60;
        while ( v49 < v31 )
        {
          if ( (unsigned int)v30 < v62 )
          {
            v50 = *(_WORD *)&v25[2 * v49];
            do
            {
              if ( *(_WORD *)&v24[2 * v30] >= v50 )
                break;
              v30 = (unsigned int)(v30 + 1);
            }
            while ( (unsigned int)v30 < v62 );
            v49 = v60;
          }
          v60 = ++v49;
          if ( (unsigned int)v30 >= v62 )
            goto LABEL_64;
        }
        v6 = a1;
        continue;
      }
      break;
    }
LABEL_64:
    LOWORD(v8) = *v5;
    if ( v31 )
    {
      v51 = v24;
      v24 = v25;
      v26 = v31;
      v63 = v25;
      v25 = v51;
      v62 = v31;
      if ( v54 )
      {
LABEL_82:
        v53 = *(_WORD *)&v24[2 * (v26 - 1)];
        if ( v11 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        return v53 == v28;
      }
      v6 = a1;
      continue;
    }
    break;
  }
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  return 0;
}
