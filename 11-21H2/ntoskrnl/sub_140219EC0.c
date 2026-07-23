/*
 * XREFs of sub_140219EC0 @ 0x140219EC0
 * Callers:
 *     FsRtlIsNameInExpression @ 0x140219D90 (FsRtlIsNameInExpression.c)
 *     FsRtlIsNameInUnUpcasedExpression @ 0x140219E10 (FsRtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     FsRtlDoesNameContainWildCards @ 0x14021A350 (FsRtlDoesNameContainWildCards.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall sub_140219EC0(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned __int16 v6; // bp
  unsigned __int16 *v9; // r11
  unsigned __int16 *v10; // r9
  unsigned __int16 v11; // r15
  __int16 v13; // r15
  __int16 *v14; // r12
  unsigned int v15; // r13d
  unsigned __int16 v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned int v19; // ebx
  unsigned int v20; // r14d
  __int64 v21; // rax
  unsigned int v22; // edi
  __int16 v23; // ax
  _OWORD *v24; // r8
  unsigned int v25; // edx
  __int16 v26; // bp
  __int64 v27; // r15
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rbx
  __int16 v31; // bp
  bool v32; // zf
  unsigned __int16 v33; // cx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int16 v36; // cx
  __int64 v37; // rax
  __int16 v38; // bx
  __m128i v40; // xmm0
  __int16 v41; // eax^2
  __int16 v42; // di
  unsigned __int64 v43; // xmm0_8
  unsigned __int16 v44; // di
  unsigned __int64 v45; // r9
  unsigned __int16 v46; // di
  __int64 v47; // rcx
  _OWORD *PoolWithTag; // rax
  __int64 v49; // rcx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int16 *v52; // rcx
  __int128 v53; // xmm1
  char v54; // [rsp+20h] [rbp-B8h]
  __int16 v55; // [rsp+22h] [rbp-B6h]
  unsigned __int16 v57; // [rsp+26h] [rbp-B2h]
  unsigned __int16 v58; // [rsp+28h] [rbp-B0h]
  UNICODE_STRING Name; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int16 *v61; // [rsp+40h] [rbp-98h]
  PVOID P; // [rsp+48h] [rbp-90h]
  unsigned int v63; // [rsp+50h] [rbp-88h]
  unsigned __int16 *v64; // [rsp+58h] [rbp-80h]
  __int16 v65; // [rsp+60h] [rbp-78h] BYREF
  char v66; // [rsp+80h] [rbp-58h] BYREF

  v5 = *a2;
  v6 = 0;
  v61 = a2;
  v9 = a2;
  v64 = a1;
  v10 = a1;
  v57 = 0;
  P = 0LL;
  v54 = 0;
  if ( !(_WORD)v5 )
    return *a1 + (_DWORD)v5 == 0;
  v11 = *a1;
  if ( !*a1 )
    return *a1 + (_DWORD)v5 == 0;
  if ( v11 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v40 = *(__m128i *)a1;
    *(_DWORD *)(&Name.MaximumLength + 1) = HIDWORD(*(_QWORD *)a1);
    v41 = v40.m128i_i16[1];
    v42 = v40.m128i_i16[0];
    v43 = _mm_srli_si128(v40, 8).m128i_u64[0];
    v44 = v42 - 2;
    Name.Length = v44;
    Name.MaximumLength = v41 - 2;
    Name.Buffer = (wchar_t *)(v43 + 2);
    if ( !FsRtlDoesNameContainWildCards(&Name) )
    {
      if ( (unsigned __int16)v5 < (unsigned __int16)(v11 - 2) )
        return 0;
      v45 = (v5 - (unsigned __int64)v44) >> 1;
      if ( !a3 )
        return memcmp((const void *)(v43 + 2), (const void *)(*((_QWORD *)v61 + 1) + 2LL * (unsigned int)v45), v44) == 0;
      v46 = v44 >> 1;
      if ( v46 )
      {
        do
        {
          v47 = *(unsigned __int16 *)(v43 + 2 + 2LL * v6);
          if ( a4 )
            LOWORD(v47) = *(_WORD *)(a5 + 2 * v47);
          if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v61 + 1) + 2LL * ((unsigned int)v45 + v6))) != (_WORD)v47 )
            return 0;
          ++v6;
        }
        while ( v6 < v46 );
      }
      return 1;
    }
    v10 = v64;
    v9 = v61;
  }
  v65 = 0;
  v13 = 2 * v11;
  *(_QWORD *)&Name.Length = &v66;
  v55 = v13;
  v14 = &v65;
  v15 = 1;
  v58 = 0;
  v16 = 0;
  while ( 2 )
  {
    if ( v16 >= *v9 )
    {
      v54 = 1;
      if ( v14[v15 - 1] == v13 )
      {
LABEL_50:
        v38 = v14[v15 - 1];
        if ( P )
          ExFreePoolWithTag(P, 0);
        return v38 == v13;
      }
    }
    else
    {
      v17 = (unsigned __int64)v16 >> 1;
      v16 += 2;
      v58 = v16;
      v57 = *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * v17);
    }
    LODWORD(v18) = 0;
    v19 = 0;
    v20 = 0;
    while ( 2 )
    {
      v21 = (unsigned int)v18;
      v18 = (unsigned int)(v18 + 1);
      v22 = ((unsigned int)(unsigned __int16)v14[v21] + 1) >> 1;
      v23 = 0;
      v24 = *(_OWORD **)&Name.Length;
      while ( 1 )
      {
        v25 = *v10;
        if ( (_WORD)v22 == (_WORD)v25 )
          goto LABEL_30;
        LOWORD(v22) = v23 + v22;
        v26 = 2 * v22;
        if ( (_WORD)v22 == (_WORD)v25 )
          break;
        v27 = *(unsigned __int16 *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v22 >> 1));
        v28 = a3;
        if ( a3 && a4 )
          LOWORD(v27) = *(_WORD *)(a5 + 2 * v27);
        if ( v19 >= 0xE && !P )
        {
          v63 = v25 >> 1;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * ((v25 >> 1) + 1), 0x6E725346u);
          P = PoolWithTag;
          if ( !PoolWithTag )
            RtlRaiseStatus(-1073741801);
          v49 = *(_QWORD *)&Name.Length;
          v24 = PoolWithTag;
          v10 = v64;
          v16 = v58;
          v9 = v61;
          v50 = *(_OWORD *)*(_QWORD *)&Name.Length;
          *(_QWORD *)&Name.Length = PoolWithTag;
          *PoolWithTag = v50;
          v51 = *(_OWORD *)(v49 + 16);
          LODWORD(v49) = v63;
          PoolWithTag[1] = v51;
          v52 = (__int16 *)PoolWithTag + (unsigned int)(2 * v49 + 2);
          v28 = a3;
          *(_OWORD *)v52 = *(_OWORD *)v14;
          v53 = *((_OWORD *)v14 + 1);
          v14 = v52;
          *((_OWORD *)v52 + 1) = v53;
        }
        if ( (_WORD)v27 == 42 )
          goto LABEL_19;
        if ( (_WORD)v27 == 60 )
        {
          if ( v57 != 46 || v54 )
            goto LABEL_19;
          v36 = v16;
          if ( v16 >= *v9 )
          {
LABEL_48:
            v37 = v19++;
            *((_WORD *)v24 + v37) = v26 + 3;
            v23 = 2;
          }
          else
          {
            while ( *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)v36 >> 1)) != 46 )
            {
              v36 += 2;
              if ( v36 >= *v9 )
              {
                v16 = v58;
                goto LABEL_48;
              }
            }
            v16 = v58;
LABEL_19:
            v29 = v19;
            v30 = v19 + 1;
            *((_WORD *)v24 + v29) = v26;
            v23 = 2;
            *((_WORD *)v24 + v30) = v26 + 3;
            v19 = v30 + 1;
          }
        }
        else
        {
          v31 = v26 + 4;
          if ( (_WORD)v27 == 62 )
          {
            v23 = 2;
            if ( !v54 && v57 != 46 )
              goto LABEL_29;
          }
          else
          {
            if ( (_WORD)v27 != 34 )
            {
              if ( !v54 )
              {
                v32 = (_WORD)v27 == 63;
                goto LABEL_25;
              }
              goto LABEL_30;
            }
            if ( !v54 )
            {
              v32 = v57 == 46;
LABEL_25:
              if ( v32 || (!v28 ? (v33 = v57) : (v33 = *(_WORD *)(a5 + 2LL * v57)), (_WORD)v27 == v33) )
              {
LABEL_29:
                v34 = v19++;
                *((_WORD *)v24 + v34) = v31;
              }
LABEL_30:
              v13 = v55;
              goto LABEL_31;
            }
            v23 = 2;
          }
        }
      }
      v13 = v55;
      v35 = v19++;
      *((_WORD *)v24 + v35) = v55;
LABEL_31:
      if ( (unsigned int)v18 < v15 )
      {
        while ( v20 < v19 )
        {
          do
          {
            if ( (unsigned __int16)v14[v18] >= *((_WORD *)v24 + v20) )
              break;
            v18 = (unsigned int)(v18 + 1);
          }
          while ( (unsigned int)v18 < v15 );
          ++v20;
          if ( (unsigned int)v18 >= v15 )
            goto LABEL_32;
        }
        continue;
      }
      break;
    }
LABEL_32:
    if ( v19 )
    {
      v15 = v19;
      *(_QWORD *)&Name.Length = v14;
      v14 = (__int16 *)v24;
      if ( v54 )
        goto LABEL_50;
      continue;
    }
    break;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
