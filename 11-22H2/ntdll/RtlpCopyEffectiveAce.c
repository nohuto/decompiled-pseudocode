/*
 * XREFs of RtlpCopyEffectiveAce @ 0x1800169EC
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x18001A2E0 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x18006EEF4 (RtlpCopyAces.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x180016D50 (RtlEqualPrefixSid.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        unsigned __int16 *Src,
        char a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  __int64 v18; // rcx
  _DWORD *v19; // r13
  __int64 v21; // r15
  __int64 v22; // rdx
  void **v23; // r9
  __int64 v24; // rdi
  unsigned __int16 *v25; // r13
  unsigned int v26; // r15d
  char *v27; // r12
  int v28; // esi
  int v29; // edx
  int v30; // esi
  int v31; // esi
  int v32; // esi
  char *v33; // r14
  char *v34; // rbx
  int v35; // r14d
  unsigned int v36; // r14d
  _BYTE *v37; // rcx
  int v39; // ecx
  __int64 v40; // rax
  int v41; // eax
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  unsigned __int8 *v45; // rax
  int v46; // eax
  int v47; // eax
  unsigned __int8 *v48; // rcx
  int v49; // eax
  int v50; // edx
  unsigned int v51; // r8d
  __int64 v52; // rcx
  char *v53; // rcx
  __int64 v54; // rdx
  unsigned int v55; // r8d
  __int64 v56; // rax
  unsigned int v57; // eax
  int v58; // ecx
  int v59; // ecx
  char v60; // [rsp+20h] [rbp-B9h]
  int v62; // [rsp+24h] [rbp-B5h]
  unsigned __int8 *Srca; // [rsp+30h] [rbp-A9h]
  __int64 v64; // [rsp+58h] [rbp-81h]
  __int64 v65; // [rsp+60h] [rbp-79h]
  char *v67; // [rsp+70h] [rbp-69h]
  __int16 Sid2; // [rsp+80h] [rbp-59h] BYREF
  int v69; // [rsp+82h] [rbp-57h]
  __int16 v70; // [rsp+86h] [rbp-53h]
  int v71; // [rsp+88h] [rbp-51h]
  char v72[8]; // [rsp+B0h] [rbp-29h] BYREF
  int v73; // [rsp+B8h] [rbp-21h]

  v18 = a7;
  v19 = a12;
  v21 = a13;
  v22 = a6;
  v23 = a11;
  if ( !a6 )
    v22 = (__int64)a4;
  v69 = 0;
  if ( !a7 )
    v18 = (__int64)a5;
  v64 = v18;
  v60 = 0;
  Sid2 = 257;
  v70 = 768;
  v71 = 0;
  v65 = v22;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v24 = Src[1];
  if ( *(_BYTE *)Src >= 0xBu && (unsigned __int8)(*(_BYTE *)Src - 13) > 1u )
  {
    if ( v24 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v37 = a16;
      *a16 = 1;
      goto LABEL_42;
    }
    memmove(*a11, Src, Src[1]);
    v23 = a11;
    goto LABEL_36;
  }
  v67 = 0LL;
  v62 = 0;
  Srca = 0LL;
  if ( *(_BYTE *)Src <= 3u )
  {
    v25 = Src + 4;
    v26 = 8;
LABEL_10:
    v27 = (char *)Src;
    goto LABEL_11;
  }
  if ( (unsigned __int8)(*(_BYTE *)Src - 9) <= 1u || (unsigned __int8)(*(_BYTE *)Src - 13) <= 1u )
  {
    v25 = Src + 4;
    v26 = 8;
    v57 = 4 * *((unsigned __int8 *)Src + 9) + 8;
    v67 = (char *)Src + v57 + 8;
    v62 = v24 - v57 - 8;
    goto LABEL_10;
  }
  if ( *(_BYTE *)Src == 4 )
  {
    Srca = (unsigned __int8 *)(Src + 6);
    v26 = 12;
    v25 = &Src[2 * *((unsigned __int8 *)Src + 13) + 10];
    if ( !RtlEqualPrefixSid(Src + 6, &Sid2) )
    {
      v49 = *((unsigned __int8 *)Src + 13);
      goto LABEL_74;
    }
    v42 = *((_DWORD *)Src + 5);
    if ( v42 )
    {
      v43 = v42 - 1;
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( !v44 )
        {
          v45 = (unsigned __int8 *)v65;
          goto LABEL_65;
        }
        if ( v44 == 1 )
        {
          v45 = (unsigned __int8 *)v64;
LABEL_65:
          Srca = v45;
          v46 = v45[1];
          *a15 = 1;
          LODWORD(v24) = v24 + 4 * v46 - 4;
LABEL_75:
          v23 = a11;
          goto LABEL_10;
        }
        goto LABEL_70;
      }
      if ( !a5 )
      {
LABEL_70:
        v48 = (unsigned __int8 *)(Src + 6);
        goto LABEL_71;
      }
      v47 = a5[1];
      v48 = a5;
      Srca = a5;
    }
    else
    {
      v48 = a4;
      Srca = a4;
      v47 = a4[1];
    }
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v47 - 4;
LABEL_71:
    if ( *a15 )
      goto LABEL_75;
    v49 = v48[1];
LABEL_74:
    v26 = 4 * v49 + 20;
    Srca = 0LL;
    goto LABEL_75;
  }
  v50 = *((_DWORD *)Src + 2) & 2;
  v51 = *((_DWORD *)Src + 2) & 1;
  v52 = v50 != 0 ? 0x10 : 0;
  v25 = (unsigned __int16 *)((char *)&Src[8 * v51 + 6] + v52);
  v26 = v52 + 12 + 16 * v51;
  if ( v50 )
  {
    if ( v51 )
      v53 = (char *)(Src + 14);
    else
      v53 = (char *)(Src + 6);
  }
  else
  {
    v53 = 0LL;
  }
  v27 = (char *)Src;
  if ( a14 && v53 )
  {
    v54 = a9;
    if ( !a9 || (v55 = 0, !a10) )
    {
LABEL_90:
      v21 = a13;
      LODWORD(v24) = 0;
      v19 = a12;
      goto LABEL_36;
    }
    while ( 1 )
    {
      v56 = *(_QWORD *)v53 - **(_QWORD **)v54;
      if ( *(_QWORD *)v53 == **(_QWORD **)v54 )
        v56 = *((_QWORD *)v53 + 1) - *(_QWORD *)(*(_QWORD *)v54 + 8LL);
      if ( !v56 )
        break;
      ++v55;
      v54 += 8LL;
      if ( v55 >= a10 )
      {
        v23 = a11;
        goto LABEL_90;
      }
    }
    *a14 = 1;
    if ( a3 )
    {
      v60 = 1;
    }
    else
    {
      *a15 = 1;
      if ( (Src[4] & 1) != 0 )
      {
        v26 -= 16;
        LODWORD(v24) = v24 - 16;
        memmove(v72, Src, v26);
        v73 &= ~2u;
      }
      else
      {
        v26 -= 20;
        LODWORD(v24) = v24 - 20;
        memmove(v72, Src, v26);
        v72[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
      }
      v27 = v72;
    }
    v23 = a11;
  }
LABEL_11:
  if ( (_DWORD)v24 )
  {
    v28 = *((_DWORD *)Src + 1);
    if ( v28 < 0 )
      v28 |= *a8;
    if ( (v28 & 0x40000000) != 0 )
      v28 |= a8[1];
    if ( (v28 & 0x20000000) != 0 )
      v28 |= a8[2];
    if ( (v28 & 0x10000000) != 0 )
      v28 |= a8[3];
    if ( *(_BYTE *)Src <= 0xAu && (v29 = 1651, _bittest(&v29, *(unsigned __int8 *)Src)) )
      v30 = a8[3] & v28;
    else
      v30 = (a8[3] | 0x1000000) & v28;
    v31 = v30 & 0xFFFFFFF;
    if ( v31 != *((_DWORD *)Src + 1) )
      *a15 = 1;
    v32 = v31 & 0x11FFFFF;
    if ( !v32 && !RtlEqualPrefixSid(v25, &Sid2) )
    {
      v23 = a11;
      LODWORD(v24) = 0;
      goto LABEL_35;
    }
    if ( !RtlEqualPrefixSid(v25, &Sid2) )
    {
LABEL_27:
      if ( v60 && *a15 )
      {
        if ( (Src[4] & 1) != 0 )
        {
          v26 -= 16;
          LODWORD(v24) = v24 - 16;
          memmove(v72, Src, v26);
          v73 &= ~2u;
        }
        else
        {
          v26 -= 20;
          LODWORD(v24) = v24 - 20;
          memmove(v72, Src, v26);
          v72[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
        }
        v27 = v72;
      }
      v23 = a11;
      v33 = (char *)*a11;
      if ( !*a11 || (unsigned int)v24 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)v33 )
      {
        v37 = a16;
        v21 = a13;
        v19 = a12;
        *a16 = 1;
        goto LABEL_37;
      }
      memmove(*a11, v27, v26);
      v34 = &v33[v26];
      if ( Srca )
      {
        memmove(v34, Srca, 4LL * Srca[1] + 8);
        v34 += 4 * Srca[1] + 8;
      }
      memmove(v34, v25, 4LL * *((unsigned __int8 *)v25 + 1) + 8);
      v35 = (_DWORD)v34 + 4 * (*((unsigned __int8 *)v25 + 1) + 2);
      if ( v67 && v62 > 0 )
      {
        memmove(&v34[4 * *((unsigned __int8 *)v25 + 1) + 8], v67, v62);
        v35 += v62;
      }
      v23 = a11;
      v36 = v35 - *(_DWORD *)a11;
      if ( (unsigned int)v24 < v36 )
        return 0;
      LODWORD(v24) = v36;
      *((_WORD *)*a11 + 1) = v36;
      *((_DWORD *)*a11 + 1) = v32;
      goto LABEL_35;
    }
    v39 = *((_DWORD *)v25 + 2);
    if ( v39 )
    {
      v58 = v39 - 1;
      if ( v58 )
      {
        v59 = v58 - 1;
        if ( v59 )
        {
          if ( v59 != 1 )
            goto LABEL_27;
          v40 = v64;
        }
        else
        {
          v40 = v65;
        }
      }
      else
      {
        v40 = (__int64)a5;
        if ( !a5 )
          goto LABEL_27;
      }
    }
    else
    {
      v40 = (__int64)a4;
    }
    v25 = (unsigned __int16 *)v40;
    v41 = *(unsigned __int8 *)(v40 + 1);
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v41 - 4;
    goto LABEL_27;
  }
LABEL_35:
  v21 = a13;
  v19 = a12;
LABEL_36:
  v37 = a16;
LABEL_37:
  if ( !*v37 && (_DWORD)v24 )
  {
    *((_BYTE *)*v23 + 1) &= 0xE0u;
    if ( a2 )
      *((_BYTE *)*v23 + 1) |= 0x10u;
    ++*(_WORD *)(v21 + 4);
  }
LABEL_42:
  if ( (unsigned int)v24 > 0xFFFF )
    return 0;
  if ( !*v37 )
    *v23 = (char *)*v23 + (unsigned int)v24;
  *v19 = v24;
  return 1;
}
