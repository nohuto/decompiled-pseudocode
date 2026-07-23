/*
 * XREFs of RtlpCopyEffectiveAce @ 0x180011D88
 * Callers:
 *     RtlpCopyAces @ 0x1800118FC (RtlpCopyAces.c)
 *     RtlpGenerateInheritedAce @ 0x180044620 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x1800120D0 (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x180012190 (RtlMapGenericMask.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        char *Src,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        __int64 a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  __int64 v16; // r10
  _DWORD *v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rdx
  void **v22; // r9
  __int64 v23; // rdi
  char *v24; // r13
  unsigned int v25; // esi
  char *v26; // r12
  int v27; // ecx
  unsigned int GenericAll; // r15d
  ACCESS_MASK v29; // r15d
  _BYTE *v30; // r14
  int v31; // r15d
  char *v32; // r14
  char *v33; // rbx
  int v34; // esi
  unsigned int v35; // esi
  _BYTE *v36; // rcx
  int v38; // ecx
  char *v39; // rax
  int v40; // eax
  int v41; // edx
  unsigned int v42; // r8d
  __int64 v43; // rcx
  char *v44; // rcx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  unsigned __int8 *v48; // rax
  int v49; // eax
  int v50; // eax
  unsigned __int8 *v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // r8d
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // ecx
  int v58; // ecx
  char v59; // [rsp+20h] [rbp-C9h]
  int v62; // [rsp+24h] [rbp-C5h]
  unsigned __int8 *Srca; // [rsp+30h] [rbp-B9h]
  ACCESS_MASK AccessMask; // [rsp+38h] [rbp-B1h] BYREF
  _BYTE *v65; // [rsp+40h] [rbp-A9h]
  void **v66; // [rsp+48h] [rbp-A1h]
  __int64 v67; // [rsp+50h] [rbp-99h]
  __int64 v68; // [rsp+58h] [rbp-91h]
  _BYTE *v69; // [rsp+60h] [rbp-89h]
  __int64 v70; // [rsp+68h] [rbp-81h]
  __int64 v71; // [rsp+70h] [rbp-79h]
  unsigned __int8 *v72; // [rsp+78h] [rbp-71h]
  void *v73; // [rsp+80h] [rbp-69h]
  __int64 v74; // [rsp+88h] [rbp-61h]
  __int16 Sid2; // [rsp+90h] [rbp-59h] BYREF
  int v76; // [rsp+92h] [rbp-57h]
  __int16 v77; // [rsp+96h] [rbp-53h]
  int v78; // [rsp+98h] [rbp-51h]
  char v79[8]; // [rsp+C0h] [rbp-29h] BYREF
  int v80; // [rsp+C8h] [rbp-21h]

  v16 = a7;
  v19 = a12;
  v20 = a13;
  v21 = a6;
  v72 = (unsigned __int8 *)a4;
  v22 = a11;
  if ( !a6 )
    v21 = a4;
  if ( !a7 )
    v16 = (__int64)a5;
  v70 = v16;
  v74 = (__int64)a5;
  v66 = a11;
  v68 = (__int64)a12;
  v67 = a13;
  v69 = a15;
  v65 = a16;
  v59 = 0;
  Sid2 = 257;
  v76 = 0;
  v77 = 768;
  v78 = 0;
  v71 = v21;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v23 = *((unsigned __int16 *)Src + 1);
  if ( (unsigned __int8)(*Src - 11) > 1u && (unsigned __int8)*Src < 0xFu )
  {
    v73 = 0LL;
    v62 = 0;
    Srca = 0LL;
    if ( (unsigned __int8)*Src <= 3u )
    {
      v24 = Src + 8;
LABEL_11:
      v25 = 8;
LABEL_12:
      v26 = Src;
      goto LABEL_13;
    }
    if ( (unsigned __int8)(*Src - 9) <= 1u )
      goto LABEL_89;
    if ( (unsigned __int8)*Src >= 0xDu )
    {
      if ( (unsigned __int8)*Src > 0xEu )
        goto LABEL_50;
LABEL_89:
      v24 = Src + 8;
      v56 = (unsigned __int8)Src[9];
      v73 = &Src[4 * v56 + 16];
      v62 = v23 - (4 * v56 + 16);
      goto LABEL_11;
    }
    if ( *Src != 4 )
    {
LABEL_50:
      v41 = *((_DWORD *)Src + 2) & 2;
      v42 = *((_DWORD *)Src + 2) & 1;
      v43 = v41 != 0 ? 0x10 : 0;
      v24 = &Src[16 * v42 + 12 + v43];
      v25 = v43 + 12 + 16 * v42;
      if ( v41 )
      {
        if ( v42 )
          v44 = Src + 28;
        else
          v44 = Src + 12;
      }
      else
      {
        v44 = 0LL;
      }
      v26 = Src;
      if ( a14 && v44 )
      {
        v53 = a9;
        if ( !a9 || (v54 = 0, !a10) )
        {
LABEL_82:
          LODWORD(v23) = 0;
          goto LABEL_29;
        }
        while ( 1 )
        {
          v55 = *(_QWORD *)v44 - **(_QWORD **)v53;
          if ( *(_QWORD *)v44 == **(_QWORD **)v53 )
            v55 = *((_QWORD *)v44 + 1) - *(_QWORD *)(*(_QWORD *)v53 + 8LL);
          if ( !v55 )
            break;
          ++v54;
          v53 += 8LL;
          if ( v54 >= a10 )
            goto LABEL_82;
        }
        *a14 = 1;
        if ( a3 )
        {
          v59 = 1;
        }
        else
        {
          *a15 = 1;
          if ( (Src[8] & 1) != 0 )
          {
            v25 -= 16;
            LODWORD(v23) = v23 - 16;
            memmove(v79, Src, v25);
            v80 &= ~2u;
          }
          else
          {
            v25 -= 20;
            LODWORD(v23) = v23 - 20;
            memmove(v79, Src, v25);
            v79[0] = RtlBaseAceType[(unsigned __int8)*Src];
          }
          v22 = v66;
          v26 = v79;
        }
      }
LABEL_13:
      if ( !(_DWORD)v23 )
        goto LABEL_29;
      AccessMask = *((_DWORD *)Src + 1);
      RtlMapGenericMask(&AccessMask, GenericMapping);
      if ( (unsigned __int8)*Src <= 0xAu && (v27 = 1651, _bittest(&v27, (unsigned __int8)*Src)) )
        GenericAll = GenericMapping->GenericAll;
      else
        GenericAll = GenericMapping->GenericAll | 0x1000000;
      v29 = AccessMask & GenericAll;
      v30 = v69;
      if ( v29 != *((_DWORD *)Src + 1) )
        *v69 = 1;
      v31 = v29 & 0x11FFFFF;
      if ( !v31 && !RtlEqualPrefixSid(v24, &Sid2) )
      {
        v22 = v66;
        LODWORD(v23) = 0;
        goto LABEL_29;
      }
      if ( !RtlEqualPrefixSid(v24, &Sid2) )
      {
LABEL_21:
        if ( v59 && *v30 )
        {
          if ( (Src[8] & 1) != 0 )
          {
            v25 -= 16;
            LODWORD(v23) = v23 - 16;
            memmove(v79, Src, v25);
            v80 &= ~2u;
          }
          else
          {
            v25 -= 20;
            LODWORD(v23) = v23 - 20;
            memmove(v79, Src, v25);
            v79[0] = RtlBaseAceType[(unsigned __int8)*Src];
          }
          v26 = v79;
        }
        v22 = v66;
        v32 = (char *)*v66;
        if ( !*v66 || (unsigned int)v23 > v67 + *(unsigned __int16 *)(v67 + 2) - (_QWORD)v32 )
        {
          v36 = v65;
          *v65 = 1;
          goto LABEL_30;
        }
        memmove(*v66, v26, v25);
        v33 = &v32[v25];
        if ( Srca )
        {
          memmove(v33, Srca, 4LL * Srca[1] + 8);
          v33 += 4 * Srca[1] + 8;
        }
        memmove(v33, v24, 4LL * (unsigned __int8)v24[1] + 8);
        v34 = (_DWORD)v33 + 4 * ((unsigned __int8)v24[1] + 2);
        if ( v73 && v62 > 0 )
        {
          memmove(&v33[4 * (unsigned __int8)v24[1] + 8], v73, v62);
          v34 += v62;
        }
        v22 = v66;
        v35 = v34 - *(_DWORD *)v66;
        if ( (unsigned int)v23 < v35 )
          return 0;
        LODWORD(v23) = v35;
        *((_WORD *)*v66 + 1) = v35;
        *((_DWORD *)*v22 + 1) = v31;
LABEL_29:
        v36 = v65;
LABEL_30:
        v20 = v67;
        v19 = (_DWORD *)v68;
        goto LABEL_31;
      }
      v38 = *((_DWORD *)v24 + 2);
      if ( v38 )
      {
        v57 = v38 - 1;
        if ( v57 )
        {
          v58 = v57 - 1;
          if ( v58 )
          {
            if ( v58 != 1 )
              goto LABEL_21;
            v39 = (char *)v70;
          }
          else
          {
            v39 = (char *)v71;
          }
        }
        else
        {
          v39 = (char *)v74;
          if ( !v74 )
            goto LABEL_21;
        }
      }
      else
      {
        v39 = (char *)v72;
      }
      v24 = v39;
      v40 = (unsigned __int8)v39[1];
      *v30 = 1;
      LODWORD(v23) = v23 + 4 * v40 - 4;
      goto LABEL_21;
    }
    Srca = (unsigned __int8 *)(Src + 12);
    v25 = 12;
    v24 = &Src[4 * (unsigned __int8)Src[13] + 20];
    if ( !RtlEqualPrefixSid(Src + 12, &Sid2) )
    {
      v52 = (unsigned __int8)Src[13];
      goto LABEL_70;
    }
    v45 = *((_DWORD *)Src + 5);
    if ( v45 )
    {
      v46 = v45 - 1;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( !v47 )
        {
          v48 = (unsigned __int8 *)v71;
          goto LABEL_61;
        }
        if ( v47 == 1 )
        {
          v48 = (unsigned __int8 *)v70;
LABEL_61:
          Srca = v48;
          v49 = v48[1];
          *a15 = 1;
          LODWORD(v23) = v23 + 4 * v49 - 4;
LABEL_71:
          v22 = v66;
          goto LABEL_12;
        }
        goto LABEL_66;
      }
      if ( !a5 )
      {
LABEL_66:
        v51 = (unsigned __int8 *)(Src + 12);
        goto LABEL_67;
      }
      v50 = a5[1];
      v51 = a5;
      Srca = a5;
    }
    else
    {
      v51 = v72;
      Srca = v72;
      v50 = v72[1];
    }
    *a15 = 1;
    LODWORD(v23) = v23 + 4 * v50 - 4;
LABEL_67:
    if ( *a15 )
      goto LABEL_71;
    v52 = v51[1];
LABEL_70:
    v25 = 4 * v52 + 20;
    Srca = 0LL;
    goto LABEL_71;
  }
  if ( v23 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
  {
    v36 = v65;
    *v65 = 1;
    goto LABEL_36;
  }
  memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
  v22 = v66;
  v36 = v65;
LABEL_31:
  if ( !*v36 && (_DWORD)v23 )
  {
    *((_BYTE *)*v22 + 1) &= 0xE0u;
    if ( a2 )
      *((_BYTE *)*v22 + 1) |= 0x10u;
    ++*(_WORD *)(v20 + 4);
  }
LABEL_36:
  if ( (unsigned int)v23 > 0xFFFF )
    return 0;
  if ( !*v36 )
    *v22 = (char *)*v22 + (unsigned int)v23;
  *v19 = v23;
  return 1;
}
