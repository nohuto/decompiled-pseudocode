/*
 * XREFs of FsRtlIsDbcsInExpression @ 0x14092F040
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x1408814B0 (FsRtlDoesDbcsContainWildCards.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

BOOLEAN __stdcall FsRtlIsDbcsInExpression(PANSI_STRING Expression, PANSI_STRING Name)
{
  int Length; // ebx
  PANSI_STRING v3; // r15
  void *v5; // r11
  unsigned __int16 v6; // bp
  _STRING v8; // xmm0
  __int64 v9; // rdi
  char *v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  int v14; // eax
  bool v15; // zf
  char *v16; // rdx
  char *v17; // r14
  int v18; // edi
  unsigned __int16 v19; // si
  __int16 v20; // bp
  char *Buffer; // r9
  __int16 v22; // dx
  __int16 v23; // ax
  char v24; // r8
  __int64 v25; // r12
  unsigned int v26; // ebx
  __int16 v27; // cx
  unsigned int v28; // r15d
  int v29; // eax
  __int16 v30; // di
  char *v31; // rdx
  __int16 v32; // r8
  __int16 v33; // si
  _OWORD *Pool2; // rax
  __int128 v35; // xmm0
  _OWORD *v36; // rdx
  __int128 v37; // xmm1
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbx
  unsigned __int16 v41; // r9
  char *v42; // r11
  __int16 v43; // r8
  __int16 v44; // ax
  __int16 v45; // dx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbx
  __int16 v49; // di
  __int64 v50; // rax
  __int16 v51; // r15
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // r9d
  char *v55; // rax
  __int16 v56; // bx
  char v57; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v58; // [rsp+22h] [rbp-B6h]
  __int16 v59; // [rsp+24h] [rbp-B4h]
  __int16 v60; // [rsp+28h] [rbp-B0h]
  _STRING Namea; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v62; // [rsp+40h] [rbp-98h]
  unsigned int v63; // [rsp+44h] [rbp-94h]
  _OWORD *v64; // [rsp+48h] [rbp-90h]
  int v65; // [rsp+50h] [rbp-88h]
  PANSI_STRING v66; // [rsp+58h] [rbp-80h]
  _WORD v67[16]; // [rsp+60h] [rbp-78h] BYREF
  char v68; // [rsp+80h] [rbp-58h] BYREF

  Length = Name->Length;
  v66 = Name;
  v3 = Name;
  v60 = 0;
  v64 = 0LL;
  v5 = 0LL;
  v57 = 0;
  if ( !(_WORD)Length )
    return Expression->Length + Length == 0;
  v6 = Expression->Length;
  if ( !Expression->Length )
    return Expression->Length + Length == 0;
  if ( v6 == 1 && *Expression->Buffer == 42 )
    return 1;
  if ( *Expression->Buffer == 42 )
  {
    v8 = *Expression;
    *(_DWORD *)(&Namea.MaximumLength + 1) = HIDWORD(*(_QWORD *)&Expression->Length);
    Namea.MaximumLength = v8.MaximumLength - 1;
    v9 = (unsigned __int16)(v8.Length - 1);
    Namea.Length = v8.Length - 1;
    v10 = (char *)(_mm_srli_si128((__m128i)v8, 8).m128i_u64[0] + 1);
    Namea.Buffer = v10;
    if ( !FsRtlDoesDbcsContainWildCards(&Namea) )
    {
      if ( (unsigned __int16)Length >= (unsigned __int16)(v6 - 1) )
      {
        v11 = Length - (unsigned int)(unsigned __int16)v9;
        if ( !(_BYTE)NlsMbOemCodePageTag )
          return memcmp(v10, &v3->Buffer[v11], (unsigned __int16)v9) == 0;
        v12 = 0;
        if ( !(_DWORD)v11 )
          return memcmp(v10, &v3->Buffer[v11], (unsigned __int16)v9) == 0;
        do
        {
          v13 = (unsigned __int8)v3->Buffer[v12];
          if ( (unsigned __int8)v13 >= 0x80u )
            v14 = (*((_WORD *)NlsOemLeadByteInfo + v13) != 0) + 1;
          else
            v14 = 1;
          v12 += v14;
        }
        while ( v12 < (unsigned int)v11 );
        if ( v12 <= (unsigned int)v11 )
          return memcmp(v10, &v3->Buffer[v11], (unsigned __int16)v9) == 0;
      }
      return 0;
    }
    v5 = 0LL;
  }
  v16 = (char *)v67;
  v67[0] = 0;
  *(_QWORD *)&Namea.Length = v67;
  v17 = &v68;
  v18 = 1;
  v63 = 1;
  v19 = 0;
  v58 = 0;
  v20 = 2 * v6;
  do
  {
    if ( v19 >= v3->Length )
    {
      v57 = 1;
      v24 = 1;
      if ( *(_WORD *)&v16[2 * (v18 - 1)] == v20 )
        break;
    }
    else
    {
      Buffer = v3->Buffer;
      v22 = Buffer[v19];
      if ( (unsigned __int8)Buffer[v19] >= 0x80u
        && (_BYTE)NlsMbOemCodePageTag
        && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v22) )
      {
        v23 = 2;
        v60 = v22 + (Buffer[v19 + 1] << 8);
      }
      else
      {
        v60 = Buffer[v19];
        v23 = 1;
      }
      v16 = *(char **)&Namea.Length;
      v19 += v23;
      v24 = v57;
      v58 = v19;
    }
    v62 = 0;
    LODWORD(v25) = 0;
    v26 = 0;
    do
    {
      v27 = 0;
      v28 = ((unsigned int)*(unsigned __int16 *)&v16[2 * (unsigned int)v25] + 1) >> 1;
      v25 = (unsigned int)(v25 + 1);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v29 = Expression->Length;
              if ( (_WORD)v28 == (_WORD)v29 )
                goto LABEL_79;
              LOWORD(v28) = v27 + v28;
              v30 = 2 * v28;
              if ( (_WORD)v28 == (_WORD)v29 )
              {
                v53 = v26++;
                *(_WORD *)&v17[2 * v53] = v20;
                goto LABEL_79;
              }
              v31 = Expression->Buffer;
              v65 = Expression->Length;
              if ( (unsigned __int16)v28 == v29 - 1 )
              {
                v32 = v31[(unsigned __int16)v28];
                if ( (unsigned __int8)v31[(unsigned __int16)v28] >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v32) )
                {
                  v59 = 1;
LABEL_41:
                  v33 = v32;
                  goto LABEL_42;
                }
              }
              v32 = v31[(unsigned __int16)v28];
              if ( (unsigned __int8)v31[(unsigned __int16)v28] < 0x80u
                || !(_BYTE)NlsMbOemCodePageTag
                || !*((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v32) )
              {
                v59 = 1;
                goto LABEL_41;
              }
              v59 = 2;
              v33 = v32 + (v31[(unsigned __int16)v28 + 1] << 8);
LABEL_42:
              if ( v26 >= 0xE && !v5 )
              {
                Pool2 = (_OWORD *)ExAllocatePool2(290LL, 8LL * (unsigned int)(v65 + 1), 1685214022LL);
                v35 = *(_OWORD *)v17;
                v36 = *(_OWORD **)&Namea.Length;
                v5 = Pool2;
                v64 = Pool2;
                *Pool2 = v35;
                v37 = *((_OWORD *)v17 + 1);
                v17 = (char *)Pool2;
                Pool2[1] = v37;
                v38 = Expression->Length;
                *(_OWORD *)((char *)Pool2 + 4 * v38 + 4) = *v36;
                *(_OWORD *)((char *)Pool2 + 4 * v38 + 20) = v36[1];
                *(_QWORD *)&Namea.Length = (char *)Pool2 + 4 * Expression->Length + 4;
              }
              v24 = v57;
              if ( v33 != 42 )
                break;
              v27 = v59;
              v19 = v58;
              v39 = v26;
              v40 = v26 + 1;
              *(_WORD *)&v17[2 * v39] = v30;
              *(_WORD *)&v17[2 * v40] = v30 + 1;
              v26 = v40 + 1;
            }
            if ( v33 != 60 )
              break;
            v19 = v58;
            if ( v57 || v60 != 46 )
              goto LABEL_62;
            v41 = v58;
            if ( v58 >= v66->Length )
            {
LABEL_60:
              v27 = v59;
              v46 = v26++;
              *(_WORD *)&v17[2 * v46] = v30 + 1;
            }
            else
            {
              v42 = v66->Buffer;
              while ( 1 )
              {
                v43 = v42[v41];
                if ( (unsigned __int8)v42[v41] >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && (v19 = v58, *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v43)) )
                {
                  v44 = 2;
                  v45 = v43 + (v42[v41 + 1] << 8);
                }
                else
                {
                  v45 = v42[v41];
                  v44 = 1;
                }
                if ( v45 == 46 )
                  break;
                v41 += v44;
                if ( v41 >= v66->Length )
                {
                  v5 = v64;
                  v24 = 0;
                  goto LABEL_60;
                }
              }
              v5 = v64;
              v24 = 0;
LABEL_62:
              v27 = v59;
              v47 = v26;
              v48 = v26 + 1;
              *(_WORD *)&v17[2 * v47] = v30;
              *(_WORD *)&v17[2 * v48] = v30 + 1;
              v26 = v48 + 1;
            }
          }
          v27 = v59;
          v49 = 2 * v59 + v30;
          if ( v33 != 62 )
            break;
          v19 = v58;
          if ( !v57 && v60 != 46 )
            goto LABEL_66;
        }
        if ( v33 != 34 )
          break;
        if ( !v57 )
        {
          v51 = v60;
          if ( v60 == 46 )
          {
LABEL_71:
            v19 = v58;
            v52 = v26++;
            *(_WORD *)&v17[2 * v52] = v49;
            goto LABEL_79;
          }
          goto LABEL_75;
        }
        v19 = v58;
      }
      if ( v57 )
      {
        v19 = v58;
        goto LABEL_79;
      }
      if ( v33 == 63 )
        goto LABEL_71;
      v51 = v60;
LABEL_75:
      v15 = v33 == v51;
      v19 = v58;
      if ( v15 )
      {
LABEL_66:
        v50 = v26++;
        *(_WORD *)&v17[2 * v50] = v49;
      }
LABEL_79:
      v16 = *(char **)&Namea.Length;
      if ( (unsigned int)v25 >= v63 )
        break;
      v54 = v62;
      do
      {
        if ( v54 >= v26 )
          break;
        for ( ; (unsigned int)v25 < v63; v25 = (unsigned int)(v25 + 1) )
        {
          if ( *(_WORD *)(*(_QWORD *)&Namea.Length + 2 * v25) >= *(_WORD *)&v17[2 * v54] )
            break;
        }
        ++v54;
      }
      while ( (unsigned int)v25 < v63 );
      v62 = v54;
    }
    while ( (unsigned int)v25 < v63 );
    if ( !v26 )
    {
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      return 0;
    }
    v3 = v66;
    v55 = *(char **)&Namea.Length;
    v63 = v26;
    v16 = v17;
    *(_QWORD *)&Namea.Length = v17;
    v18 = v26;
    v17 = v55;
  }
  while ( !v24 );
  v56 = *(_WORD *)&v16[2 * (v18 - 1)];
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v56 == v20;
}
