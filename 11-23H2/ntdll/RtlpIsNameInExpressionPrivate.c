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
 *     Feature_378570040__private_IsEnabledDeviceUsage @ 0x18009F5B8 (Feature_378570040__private_IsEnabledDeviceUsage.c)
 *     RtlDoesNameContainWildCards @ 0x180108D60 (RtlDoesNameContainWildCards.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 *v7; // rbp
  __int16 v8; // si
  _WORD *v9; // rax
  char *v10; // r14
  int v11; // esi
  char *v12; // rdx
  _OWORD *v13; // r8
  __int16 v14; // r9
  unsigned __int16 v15; // r10
  char v16; // r11
  unsigned __int16 v17; // ax
  __m128i v18; // xmm0
  unsigned __int16 v19; // bx
  __int64 v20; // rax
  unsigned __int16 *v21; // r14
  unsigned __int64 v22; // r9
  bool v23; // zf
  unsigned __int16 v24; // bx
  unsigned __int16 i; // dx
  __int64 v26; // rcx
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // r15d
  __int16 v32; // ax
  __int16 v33; // si
  __int64 v34; // rbp
  char v35; // cl
  _OWORD *Heap; // rax
  int v37; // ecx
  __int128 v38; // xmm1
  _OWORD *v39; // rcx
  _OWORD *v40; // rax
  __int64 v41; // rax
  unsigned __int16 v42; // cx
  __int64 v43; // rax
  __int16 v44; // si
  unsigned __int16 v45; // r15
  __int64 v46; // rax
  unsigned int v47; // ecx
  unsigned __int16 v48; // cx
  __int16 v49; // bx
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int16 v52; // cx
  char v53; // [rsp+20h] [rbp-C8h]
  __int16 v54; // [rsp+22h] [rbp-C6h]
  unsigned __int16 v57; // [rsp+26h] [rbp-C2h]
  unsigned __int16 v58; // [rsp+28h] [rbp-C0h]
  unsigned int v60; // [rsp+3Ch] [rbp-ACh]
  _QWORD v61[2]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v62; // [rsp+50h] [rbp-98h]
  _OWORD *v63; // [rsp+58h] [rbp-90h]
  int v64; // [rsp+60h] [rbp-88h]
  _QWORD *v65; // [rsp+68h] [rbp-80h]
  _WORD v66[16]; // [rsp+70h] [rbp-78h] BYREF
  char v67; // [rsp+90h] [rbp-58h] BYREF

  v57 = 0;
  v7 = a2;
  v63 = 0LL;
  v53 = 0;
  if ( !*a2 )
    return *a1 + *a2 == 0;
  v8 = *a1;
  if ( !*a1 )
    return *a1 + *a2 == 0;
  if ( v8 == 2 )
  {
    v9 = (_WORD *)*((_QWORD *)a1 + 1);
    v65 = a1 + 4;
    if ( *v9 != 42 )
      goto LABEL_5;
    return 1;
  }
  v65 = a1 + 4;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v18 = *(__m128i *)a1;
    v61[0] = *(_QWORD *)a1;
    v19 = LOWORD(v61[0]) - 2;
    v20 = v61[0] >> 16;
    v21 = (unsigned __int16 *)(_mm_srli_si128(v18, 8).m128i_u64[0] + 2);
    LOWORD(v61[0]) -= 2;
    v61[1] = v21;
    WORD1(v61[0]) = v20 - 2;
    if ( !RtlDoesNameContainWildCards((unsigned __int16 *)v61) )
    {
      if ( *v7 < (unsigned __int16)(v8 - 2) )
        return 0;
      v22 = (*v7 - (unsigned __int64)v19) >> 1;
      if ( !a3 )
        return memcmp(v21, (const void *)(*((_QWORD *)v7 + 1) + 2LL * (unsigned int)v22), v19) == 0;
      v24 = v19 >> 1;
      for ( i = 0; i < v24; ++i )
      {
        v26 = v21[i];
        if ( a4 )
          LOWORD(v26) = *(_WORD *)(a5 + 2 * v26);
        if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v7 + 1) + 2LL * ((unsigned int)v22 + i))) != (_WORD)v26 )
          return 0;
      }
      return 1;
    }
  }
LABEL_5:
  v66[0] = 0;
  v61[0] = v66;
  v10 = &v67;
  v11 = 1;
  v62 = 1;
  v58 = 0;
  if ( (unsigned int)Feature_378570040__private_IsEnabledDeviceUsage() && *a1 > 0x7FFFu )
    return 0;
  v12 = (char *)v66;
  v13 = 0LL;
  v14 = 2 * *a1;
  v54 = v14;
  v15 = 0;
  v16 = 0;
  do
  {
    if ( v15 >= *v7 )
    {
      v53 = 1;
      v16 = 1;
      if ( *(_WORD *)&v12[2 * (v11 - 1)] == v14 )
        break;
    }
    else
    {
      v17 = *(_WORD *)(*((_QWORD *)v7 + 1) + 2 * ((unsigned __int64)v15 >> 1));
      v15 += 2;
      v57 = v17;
      v58 = v15;
    }
    v60 = 0;
    LODWORD(v28) = 0;
    LODWORD(v29) = 0;
    while ( 2 )
    {
      v30 = (unsigned int)v28;
      v28 = (unsigned int)(v28 + 1);
      v31 = ((unsigned int)*(unsigned __int16 *)&v12[2 * v30] + 1) >> 1;
      v32 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (_WORD)v31 == *a1 )
            goto LABEL_54;
          LOWORD(v31) = v32 + v31;
          v33 = 2 * v31;
          if ( (_WORD)v31 == *a1 )
          {
            v14 = v54;
            *(_WORD *)&v10[2 * (unsigned int)v29] = v54;
            goto LABEL_80;
          }
          v34 = *(unsigned __int16 *)(*v65 + 2 * ((unsigned __int64)(unsigned __int16)v31 >> 1));
          v35 = a3;
          if ( a3 && a4 )
            LOWORD(v34) = *(_WORD *)(a5 + 2 * v34);
          if ( (unsigned int)v29 >= 0xE && !v13 )
          {
            v64 = *a1 >> 1;
            Heap = (_OWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)(v64 + 1));
            v63 = Heap;
            if ( !Heap )
              RtlRaiseStatus(3221225495LL);
            v37 = v64;
            v15 = v58;
            *Heap = *(_OWORD *)v10;
            v38 = *((_OWORD *)v10 + 1);
            v10 = (char *)Heap;
            v39 = (_OWORD *)((char *)Heap + 2 * (unsigned int)(2 * v37 + 2));
            v13 = Heap;
            Heap[1] = v38;
            v40 = (_OWORD *)v61[0];
            v61[0] = v39;
            *v39 = *v40;
            v39[1] = v40[1];
            v35 = a3;
          }
          v16 = v53;
          if ( (_WORD)v34 == 42 )
          {
            v41 = (unsigned int)v29;
            v29 = (unsigned int)(v29 + 1);
            *(_WORD *)&v10[2 * v41] = v33;
            *(_WORD *)&v10[2 * v29] = v33 + 3;
            LODWORD(v29) = v29 + 1;
LABEL_35:
            v7 = a2;
            goto LABEL_36;
          }
          if ( (_WORD)v34 != 60 )
            break;
          v7 = a2;
          if ( v53 || v57 != 46 )
            goto LABEL_45;
          v42 = v15;
          if ( v15 < *a2 )
          {
            while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v42 >> 1)) != 46 )
            {
              v42 += 2;
              if ( v42 >= *a2 )
                goto LABEL_43;
            }
LABEL_45:
            v43 = (unsigned int)v29;
            v29 = (unsigned int)(v29 + 1);
            *(_WORD *)&v10[2 * v43] = v33;
            *(_WORD *)&v10[2 * v29] = v33 + 3;
            goto LABEL_44;
          }
LABEL_43:
          *(_WORD *)&v10[2 * (unsigned int)v29] = v33 + 3;
LABEL_44:
          LODWORD(v29) = v29 + 1;
LABEL_36:
          v32 = 2;
        }
        v44 = v33 + 4;
        if ( (_WORD)v34 != 62 )
          break;
        v7 = a2;
        v32 = 2;
        if ( !v53 && v57 != 46 )
        {
          v50 = (unsigned int)v29;
          LODWORD(v29) = v29 + 1;
          *(_WORD *)&v10[2 * v50] = v44;
          goto LABEL_54;
        }
      }
      if ( (_WORD)v34 != 34 )
      {
        if ( !v53 )
        {
          if ( (_WORD)v34 != 63 )
          {
            v45 = v57;
            goto LABEL_75;
          }
          v51 = (unsigned int)v29;
          LODWORD(v29) = v29 + 1;
          *(_WORD *)&v10[2 * v51] = v44;
        }
        v7 = a2;
        goto LABEL_54;
      }
      if ( v53 )
        goto LABEL_35;
      v45 = v57;
      if ( v57 == 46 )
      {
        v7 = a2;
        v46 = (unsigned int)v29;
        LODWORD(v29) = v29 + 1;
        *(_WORD *)&v10[2 * v46] = v44;
LABEL_54:
        v14 = v54;
        goto LABEL_55;
      }
LABEL_75:
      if ( v35 )
        v52 = *(_WORD *)(a5 + 2LL * v45);
      else
        v52 = v45;
      v14 = v54;
      v23 = (_WORD)v34 == v52;
      v7 = a2;
      if ( v23 )
      {
        *(_WORD *)&v10[2 * (unsigned int)v29] = v44;
LABEL_80:
        LODWORD(v29) = v29 + 1;
      }
LABEL_55:
      v12 = (char *)v61[0];
      if ( (unsigned int)v28 < v62 )
      {
        v47 = v60;
        while ( v47 < (unsigned int)v29 )
        {
          if ( (unsigned int)v28 < v62 )
          {
            v48 = *(_WORD *)&v10[2 * v47];
            do
            {
              if ( *(_WORD *)(v61[0] + 2 * v28) >= v48 )
                break;
              v28 = (unsigned int)(v28 + 1);
            }
            while ( (unsigned int)v28 < v62 );
            v47 = v60;
          }
          v60 = ++v47;
          if ( (unsigned int)v28 >= v62 )
            goto LABEL_64;
        }
        continue;
      }
      break;
    }
LABEL_64:
    if ( !(_DWORD)v29 )
    {
      if ( v63 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v63);
      return 0;
    }
    v62 = v29;
    v12 = v10;
    v10 = (char *)v61[0];
    v61[0] = v12;
    v11 = v29;
  }
  while ( !v16 );
  v49 = *(_WORD *)&v12[2 * (v11 - 1)];
  if ( v63 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v63);
  return v49 == v54;
}
