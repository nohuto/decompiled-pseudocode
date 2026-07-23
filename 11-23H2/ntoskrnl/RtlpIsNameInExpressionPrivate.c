/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x14030C830
 * Callers:
 *     RtlIsNameInExpression @ 0x14030C5F0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x14030C770 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     RtlDoesNameContainWildCards @ 0x14033F530 (RtlDoesNameContainWildCards.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memcmp @ 0x1403DA530 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 v5; // r15
  unsigned __int16 *v6; // r14
  char v8; // r9
  __int64 v10; // rsi
  unsigned __int16 *v11; // rdx
  unsigned __int16 v12; // r11
  void *v13; // r10
  unsigned __int16 v14; // di
  _WORD *v15; // rax
  _WORD *v16; // r8
  int v17; // ebp
  _OWORD *v18; // r12
  unsigned int v19; // r13d
  __m128i v20; // xmm0
  __int16 v21; // eax^2
  __int16 v22; // bx
  unsigned __int64 v23; // xmm0_8
  unsigned __int16 v24; // bx
  unsigned __int64 v25; // r9
  unsigned __int16 v28; // bx
  __int64 v29; // rcx
  __int16 v30; // di
  unsigned __int64 v31; // rcx
  __int64 v32; // rbx
  unsigned int v33; // edi
  __int64 v34; // rax
  unsigned int v35; // r15d
  __int16 v36; // ax
  unsigned int v37; // edx
  __int16 v38; // si
  __int64 v39; // rbp
  char v40; // cl
  unsigned int v41; // r14d
  _OWORD *Pool2; // rax
  _OWORD *v43; // rcx
  __int128 v44; // xmm1
  _OWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdi
  unsigned __int16 v48; // ax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  __int16 v52; // si
  __int64 v53; // rax
  bool v54; // zf
  __int64 v55; // rax
  unsigned int v56; // r9d
  _OWORD *v57; // rax
  unsigned __int16 v58; // cx
  __int64 v59; // rax
  __int16 v60; // bx
  char v61; // [rsp+20h] [rbp-C8h]
  int v62; // [rsp+24h] [rbp-C4h]
  unsigned __int16 v63; // [rsp+28h] [rbp-C0h]
  __int16 v64; // [rsp+28h] [rbp-C0h]
  unsigned __int16 v67; // [rsp+2Ch] [rbp-BCh]
  _WORD *v69; // [rsp+40h] [rbp-A8h]
  unsigned int v70; // [rsp+48h] [rbp-A0h]
  UNICODE_STRING Name; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v72; // [rsp+60h] [rbp-88h]
  unsigned __int16 *v73; // [rsp+68h] [rbp-80h]
  _WORD v74[16]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v75[32]; // [rsp+90h] [rbp-58h] BYREF

  v5 = 0;
  v6 = a2;
  v73 = a2;
  v8 = 0;
  v67 = 0;
  v10 = *a2;
  v11 = a1;
  v12 = 0;
  v61 = 0;
  v13 = 0LL;
  if ( !(_WORD)v10 )
    return *a1 + (_DWORD)v10 == 0;
  v14 = *a1;
  v63 = *a1;
  if ( !*a1 )
    return *a1 + (_DWORD)v10 == 0;
  if ( v14 != 2 )
  {
    v72 = a1 + 4;
    if ( **((_WORD **)a1 + 1) == 42 )
    {
      v20 = *(__m128i *)a1;
      *(_DWORD *)(&Name.MaximumLength + 1) = HIDWORD(*(_QWORD *)a1);
      v21 = v20.m128i_i16[1];
      v22 = v20.m128i_i16[0];
      v23 = _mm_srli_si128(v20, 8).m128i_u64[0];
      v24 = v22 - 2;
      Name.Length = v24;
      Name.MaximumLength = v21 - 2;
      Name.Buffer = (wchar_t *)(v23 + 2);
      if ( !RtlDoesNameContainWildCards(&Name) )
      {
        if ( (unsigned __int16)v10 < (unsigned __int16)(v63 - 2) )
          return 0;
        v25 = (v10 - (unsigned __int64)v24) >> 1;
        if ( !a3 )
          return memcmp((const void *)(v23 + 2), (const void *)(*((_QWORD *)v6 + 1) + 2LL * (unsigned int)v25), v24) == 0;
        v28 = v24 >> 1;
        if ( v28 )
        {
          do
          {
            v29 = *(unsigned __int16 *)(v23 + 2 + 2LL * v5);
            if ( a4 )
              LOWORD(v29) = *(_WORD *)(a5 + 2 * v29);
            if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v6 + 1) + 2LL * ((unsigned int)v25 + v5))) != (_WORD)v29 )
              return 0;
            ++v5;
          }
          while ( v5 < v28 );
        }
        return 1;
      }
      v11 = a1;
      v13 = 0LL;
      v14 = v63;
      v12 = 0;
      v8 = 0;
    }
    v74[0] = 0;
    v62 = 0;
    v16 = v74;
    v69 = v74;
    v18 = v75;
    v19 = 1;
    v17 = 0;
    if ( v14 > 0x7FFFu )
      return 0;
    goto LABEL_20;
  }
  v15 = (_WORD *)*((_QWORD *)a1 + 1);
  v72 = a1 + 4;
  if ( *v15 == 42 )
    return 1;
  v16 = v74;
  v74[0] = 0;
  v17 = 0;
  v69 = v74;
  v62 = 0;
  v18 = v75;
  v19 = 1;
LABEL_20:
  v30 = 2 * v14;
  v64 = v30;
  while ( 2 )
  {
    if ( (unsigned __int16)v17 >= (unsigned __int16)v10 )
    {
      v8 = 1;
      v61 = 1;
      if ( v16[v19 - 1] == v30 )
        goto LABEL_79;
    }
    else
    {
      v31 = (unsigned __int64)(unsigned __int16)v17 >> 1;
      LOWORD(v17) = v17 + 2;
      v62 = v17;
      v12 = *(_WORD *)(*((_QWORD *)v6 + 1) + 2 * v31);
      v67 = v12;
    }
    v70 = 0;
    LODWORD(v32) = 0;
    v33 = 0;
    while ( 2 )
    {
      v34 = (unsigned int)v32;
      v32 = (unsigned int)(v32 + 1);
      v35 = ((unsigned int)(unsigned __int16)v16[v34] + 1) >> 1;
      v36 = 0;
      while ( 1 )
      {
        v37 = *v11;
        if ( (_WORD)v35 == (_WORD)v37 )
          goto LABEL_57;
        LOWORD(v35) = v36 + v35;
        v38 = 2 * v35;
        if ( (_WORD)v35 == (_WORD)v37 )
          break;
        v39 = *(unsigned __int16 *)(*v72 + 2 * ((unsigned __int64)(unsigned __int16)v35 >> 1));
        v40 = a3;
        if ( a3 && a4 )
          LOWORD(v39) = *(_WORD *)(a5 + 2 * v39);
        if ( v33 >= 0xE && !v13 )
        {
          v41 = v37 >> 1;
          Pool2 = (_OWORD *)ExAllocatePool2(64LL, 8LL * ((v37 >> 1) + 1), 1852986182LL);
          v13 = Pool2;
          if ( !Pool2 )
            RtlRaiseStatus(-1073741801);
          v8 = v61;
          v12 = v67;
          v43 = (_OWORD *)((char *)Pool2 + 4 * v41 + 4);
          v6 = v73;
          *Pool2 = *v18;
          v44 = v18[1];
          v18 = Pool2;
          Pool2[1] = v44;
          v45 = v69;
          v69 = v43;
          *v43 = *v45;
          v43[1] = v45[1];
          v40 = a3;
        }
        if ( (_WORD)v39 == 42 )
        {
          v17 = v62;
          v11 = a1;
          v46 = v33;
          v47 = v33 + 1;
          *((_WORD *)v18 + v46) = v38;
          v36 = 2;
          *((_WORD *)v18 + v47) = v38 + 3;
          v33 = v47 + 1;
        }
        else if ( (_WORD)v39 == 60 )
        {
          v17 = v62;
          if ( v8 || v12 != 46 )
            goto LABEL_44;
          v48 = v62;
          if ( (unsigned __int16)v62 >= *v6 )
          {
LABEL_43:
            v11 = a1;
            v49 = v33++;
            *((_WORD *)v18 + v49) = v38 + 3;
            v36 = 2;
          }
          else
          {
            while ( *(_WORD *)(*((_QWORD *)v6 + 1) + 2 * ((unsigned __int64)v48 >> 1)) != 46 )
            {
              v48 += 2;
              if ( v48 >= *v6 )
                goto LABEL_43;
            }
LABEL_44:
            v11 = a1;
            v50 = v33;
            v51 = v33 + 1;
            *((_WORD *)v18 + v50) = v38;
            v36 = 2;
            *((_WORD *)v18 + v51) = v38 + 3;
            v33 = v51 + 1;
          }
        }
        else
        {
          v52 = v38 + 4;
          if ( (_WORD)v39 == 62 )
          {
            v36 = 2;
            v17 = v62;
            v11 = a1;
            if ( !v8 && v12 != 46 )
            {
              v53 = v33++;
              *((_WORD *)v18 + v53) = v52;
              goto LABEL_57;
            }
          }
          else
          {
            if ( (_WORD)v39 != 34 )
            {
              if ( !v8 )
              {
                v54 = (_WORD)v39 == 63;
LABEL_54:
                if ( v54 || (!v40 ? (v58 = v12) : (v58 = *(_WORD *)(a5 + 2LL * v12)), (_WORD)v39 == v58) )
                {
                  v55 = v33++;
                  *((_WORD *)v18 + v55) = v52;
                }
              }
              v17 = v62;
              goto LABEL_57;
            }
            if ( !v8 )
            {
              v54 = v12 == 46;
              goto LABEL_54;
            }
            v36 = 2;
            v17 = v62;
            v11 = a1;
          }
        }
      }
      v59 = v33++;
      *((_WORD *)v18 + v59) = v64;
LABEL_57:
      v16 = v69;
      if ( (unsigned int)v32 < v19 )
      {
        v56 = v70;
        while ( v56 < v33 )
        {
          do
          {
            if ( v69[v32] >= *((_WORD *)v18 + v56) )
              break;
            v32 = (unsigned int)(v32 + 1);
          }
          while ( (unsigned int)v32 < v19 );
          v70 = ++v56;
          if ( (unsigned int)v32 >= v19 )
          {
            v8 = v61;
            goto LABEL_64;
          }
        }
        v8 = v61;
        v11 = a1;
        continue;
      }
      break;
    }
LABEL_64:
    LOWORD(v10) = *v6;
    if ( v33 )
    {
      v69 = v18;
      v57 = v16;
      v16 = v18;
      v19 = v33;
      v30 = v64;
      v18 = v57;
      if ( v8 )
      {
LABEL_79:
        v60 = v16[v19 - 1];
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
        return v60 == v30;
      }
      v11 = a1;
      continue;
    }
    break;
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return 0;
}
