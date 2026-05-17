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
        __int64 a8,
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
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  int v30; // r15d
  int v31; // r15d
  _BYTE *v32; // r14
  int v33; // r15d
  char *v34; // r14
  char *v35; // rbx
  int v36; // esi
  unsigned int v37; // esi
  _BYTE *v38; // rcx
  int v40; // ecx
  char *v41; // rax
  int v42; // eax
  int v43; // edx
  unsigned int v44; // r8d
  __int64 v45; // rcx
  char *v46; // rcx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  unsigned __int8 *v50; // rax
  int v51; // eax
  int v52; // eax
  unsigned __int8 *v53; // rcx
  int v54; // eax
  __int64 v55; // rdx
  unsigned int v56; // r8d
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // ecx
  int v60; // ecx
  char v61; // [rsp+20h] [rbp-C9h]
  int v64; // [rsp+24h] [rbp-C5h]
  unsigned __int8 *Srca; // [rsp+30h] [rbp-B9h]
  int v66; // [rsp+38h] [rbp-B1h] BYREF
  _BYTE *v67; // [rsp+40h] [rbp-A9h]
  void **v68; // [rsp+48h] [rbp-A1h]
  __int64 v69; // [rsp+50h] [rbp-99h]
  __int64 v70; // [rsp+58h] [rbp-91h]
  _BYTE *v71; // [rsp+60h] [rbp-89h]
  __int64 v72; // [rsp+68h] [rbp-81h]
  __int64 v73; // [rsp+70h] [rbp-79h]
  unsigned __int8 *v74; // [rsp+78h] [rbp-71h]
  void *v75; // [rsp+80h] [rbp-69h]
  __int64 v76; // [rsp+88h] [rbp-61h]
  __int16 v77; // [rsp+90h] [rbp-59h] BYREF
  int v78; // [rsp+92h] [rbp-57h]
  __int16 v79; // [rsp+96h] [rbp-53h]
  int v80; // [rsp+98h] [rbp-51h]
  char v81[8]; // [rsp+C0h] [rbp-29h] BYREF
  int v82; // [rsp+C8h] [rbp-21h]

  v16 = a7;
  v19 = a12;
  v20 = a13;
  v21 = a6;
  v74 = (unsigned __int8 *)a4;
  v22 = a11;
  if ( !a6 )
    v21 = a4;
  if ( !a7 )
    v16 = (__int64)a5;
  v72 = v16;
  v76 = (__int64)a5;
  v68 = a11;
  v70 = (__int64)a12;
  v69 = a13;
  v71 = a15;
  v67 = a16;
  v61 = 0;
  v77 = 257;
  v78 = 0;
  v79 = 768;
  v80 = 0;
  v73 = v21;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v23 = *((unsigned __int16 *)Src + 1);
  if ( (unsigned __int8)(*Src - 11) > 1u && (unsigned __int8)*Src < 0xFu )
  {
    v75 = 0LL;
    v64 = 0;
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
      v58 = (unsigned __int8)Src[9];
      v75 = &Src[4 * v58 + 16];
      v64 = v23 - (4 * v58 + 16);
      goto LABEL_11;
    }
    if ( *Src != 4 )
    {
LABEL_50:
      v43 = *((_DWORD *)Src + 2) & 2;
      v44 = *((_DWORD *)Src + 2) & 1;
      v45 = v43 != 0 ? 0x10 : 0;
      v24 = &Src[16 * v44 + 12 + v45];
      v25 = v45 + 12 + 16 * v44;
      if ( v43 )
      {
        if ( v44 )
          v46 = Src + 28;
        else
          v46 = Src + 12;
      }
      else
      {
        v46 = 0LL;
      }
      v26 = Src;
      if ( a14 && v46 )
      {
        v55 = a9;
        if ( !a9 || (v56 = 0, !a10) )
        {
LABEL_82:
          LODWORD(v23) = 0;
          goto LABEL_29;
        }
        while ( 1 )
        {
          v57 = *(_QWORD *)v46 - **(_QWORD **)v55;
          if ( *(_QWORD *)v46 == **(_QWORD **)v55 )
            v57 = *((_QWORD *)v46 + 1) - *(_QWORD *)(*(_QWORD *)v55 + 8LL);
          if ( !v57 )
            break;
          ++v56;
          v55 += 8LL;
          if ( v56 >= a10 )
            goto LABEL_82;
        }
        *a14 = 1;
        if ( a3 )
        {
          v61 = 1;
        }
        else
        {
          *a15 = 1;
          if ( (Src[8] & 1) != 0 )
          {
            v25 -= 16;
            LODWORD(v23) = v23 - 16;
            memmove(v81, Src, v25);
            v82 &= ~2u;
          }
          else
          {
            v25 -= 20;
            LODWORD(v23) = v23 - 20;
            memmove(v81, Src, v25);
            v81[0] = RtlBaseAceType[(unsigned __int8)*Src];
          }
          v22 = v68;
          v26 = v81;
        }
      }
LABEL_13:
      if ( !(_DWORD)v23 )
        goto LABEL_29;
      v66 = *((_DWORD *)Src + 1);
      RtlMapGenericMask(&v66, a8);
      if ( (unsigned __int8)*Src <= 0xAu && (v29 = 1651, _bittest(&v29, (unsigned __int8)*Src)) )
        v30 = *(_DWORD *)(a8 + 12);
      else
        v30 = *(_DWORD *)(a8 + 12) | 0x1000000;
      v31 = v66 & v30;
      v32 = v71;
      if ( v31 != *((_DWORD *)Src + 1) )
        *v71 = 1;
      v33 = v31 & 0x11FFFFF;
      if ( !v33 && !(unsigned __int8)RtlEqualPrefixSid(v24, &v77, v27, v28) )
      {
        v22 = v68;
        LODWORD(v23) = 0;
        goto LABEL_29;
      }
      if ( !(unsigned __int8)RtlEqualPrefixSid(v24, &v77, v27, v28) )
      {
LABEL_21:
        if ( v61 && *v32 )
        {
          if ( (Src[8] & 1) != 0 )
          {
            v25 -= 16;
            LODWORD(v23) = v23 - 16;
            memmove(v81, Src, v25);
            v82 &= ~2u;
          }
          else
          {
            v25 -= 20;
            LODWORD(v23) = v23 - 20;
            memmove(v81, Src, v25);
            v81[0] = RtlBaseAceType[(unsigned __int8)*Src];
          }
          v26 = v81;
        }
        v22 = v68;
        v34 = (char *)*v68;
        if ( !*v68 || (unsigned int)v23 > v69 + *(unsigned __int16 *)(v69 + 2) - (_QWORD)v34 )
        {
          v38 = v67;
          *v67 = 1;
          goto LABEL_30;
        }
        memmove(*v68, v26, v25);
        v35 = &v34[v25];
        if ( Srca )
        {
          memmove(v35, Srca, 4LL * Srca[1] + 8);
          v35 += 4 * Srca[1] + 8;
        }
        memmove(v35, v24, 4LL * (unsigned __int8)v24[1] + 8);
        v36 = (_DWORD)v35 + 4 * ((unsigned __int8)v24[1] + 2);
        if ( v75 && v64 > 0 )
        {
          memmove(&v35[4 * (unsigned __int8)v24[1] + 8], v75, v64);
          v36 += v64;
        }
        v22 = v68;
        v37 = v36 - *(_DWORD *)v68;
        if ( (unsigned int)v23 < v37 )
          return 0;
        LODWORD(v23) = v37;
        *((_WORD *)*v68 + 1) = v37;
        *((_DWORD *)*v22 + 1) = v33;
LABEL_29:
        v38 = v67;
LABEL_30:
        v20 = v69;
        v19 = (_DWORD *)v70;
        goto LABEL_31;
      }
      v40 = *((_DWORD *)v24 + 2);
      if ( v40 )
      {
        v59 = v40 - 1;
        if ( v59 )
        {
          v60 = v59 - 1;
          if ( v60 )
          {
            if ( v60 != 1 )
              goto LABEL_21;
            v41 = (char *)v72;
          }
          else
          {
            v41 = (char *)v73;
          }
        }
        else
        {
          v41 = (char *)v76;
          if ( !v76 )
            goto LABEL_21;
        }
      }
      else
      {
        v41 = (char *)v74;
      }
      v24 = v41;
      v42 = (unsigned __int8)v41[1];
      *v32 = 1;
      LODWORD(v23) = v23 + 4 * v42 - 4;
      goto LABEL_21;
    }
    Srca = (unsigned __int8 *)(Src + 12);
    v25 = 12;
    v24 = &Src[4 * (unsigned __int8)Src[13] + 20];
    if ( !(unsigned __int8)RtlEqualPrefixSid(Src + 12, &v77, a16, a11) )
    {
      v54 = (unsigned __int8)Src[13];
      goto LABEL_70;
    }
    v47 = *((_DWORD *)Src + 5);
    if ( v47 )
    {
      v48 = v47 - 1;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( !v49 )
        {
          v50 = (unsigned __int8 *)v73;
          goto LABEL_61;
        }
        if ( v49 == 1 )
        {
          v50 = (unsigned __int8 *)v72;
LABEL_61:
          Srca = v50;
          v51 = v50[1];
          *a15 = 1;
          LODWORD(v23) = v23 + 4 * v51 - 4;
LABEL_71:
          v22 = v68;
          goto LABEL_12;
        }
        goto LABEL_66;
      }
      if ( !a5 )
      {
LABEL_66:
        v53 = (unsigned __int8 *)(Src + 12);
        goto LABEL_67;
      }
      v52 = a5[1];
      v53 = a5;
      Srca = a5;
    }
    else
    {
      v53 = v74;
      Srca = v74;
      v52 = v74[1];
    }
    *a15 = 1;
    LODWORD(v23) = v23 + 4 * v52 - 4;
LABEL_67:
    if ( *a15 )
      goto LABEL_71;
    v54 = v53[1];
LABEL_70:
    v25 = 4 * v54 + 20;
    Srca = 0LL;
    goto LABEL_71;
  }
  if ( v23 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
  {
    v38 = v67;
    *v67 = 1;
    goto LABEL_36;
  }
  memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
  v22 = v68;
  v38 = v67;
LABEL_31:
  if ( !*v38 && (_DWORD)v23 )
  {
    *((_BYTE *)*v22 + 1) &= 0xE0u;
    if ( a2 )
      *((_BYTE *)*v22 + 1) |= 0x10u;
    ++*(_WORD *)(v20 + 4);
  }
LABEL_36:
  if ( (unsigned int)v23 > 0xFFFF )
    return 0;
  if ( !*v38 )
    *v22 = (char *)*v22 + (unsigned int)v23;
  *v19 = v23;
  return 1;
}
