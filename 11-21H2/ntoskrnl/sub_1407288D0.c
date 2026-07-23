/*
 * XREFs of sub_1407288D0 @ 0x1407288D0
 * Callers:
 *     sub_140728450 @ 0x140728450 (sub_140728450.c)
 *     sub_140728F70 @ 0x140728F70 (sub_140728F70.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlMapGenericMask @ 0x140728CB0 (RtlMapGenericMask.c)
 *     sub_140728CFC @ 0x140728CFC (sub_140728CFC.c)
 */

char __fastcall sub_1407288D0(
        ACCESS_MASK *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        void **a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  char v17; // r12
  __int64 v18; // r9
  unsigned __int8 v19; // cl
  __int64 v20; // rbx
  unsigned int v22; // eax
  int v23; // ecx
  ACCESS_MASK GenericAll; // eax
  ACCESS_MASK v25; // eax
  _DWORD *v26; // r12
  _BYTE *v27; // rax
  char *v28; // rdx
  char *v29; // r12
  __int64 v30; // rdi
  char *v31; // r12
  unsigned __int8 *v32; // rdi
  unsigned __int8 *v33; // rdi
  char *v34; // r12
  unsigned int v35; // r12d
  int v36; // eax
  unsigned __int8 *v37; // rax
  int v38; // ebx
  int v39; // edi
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  unsigned int v43; // r10d
  __int64 v44; // rax
  int v45; // edx
  ACCESS_MASK *v46; // r10
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  unsigned __int8 *v50; // rax
  int v51; // eax
  void **v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rcx
  size_t v55; // r8
  size_t v56; // r8
  char v57; // [rsp+20h] [rbp-B9h]
  ACCESS_MASK v59; // [rsp+24h] [rbp-B5h]
  int v60; // [rsp+24h] [rbp-B5h]
  ACCESS_MASK AccessMask; // [rsp+2Ch] [rbp-ADh] BYREF
  _BYTE *v62; // [rsp+30h] [rbp-A9h]
  size_t Size; // [rsp+38h] [rbp-A1h]
  void *v64; // [rsp+40h] [rbp-99h]
  void *v65; // [rsp+48h] [rbp-91h]
  void *Srca; // [rsp+50h] [rbp-89h]
  int v67; // [rsp+58h] [rbp-81h]
  unsigned __int8 *v68; // [rsp+60h] [rbp-79h]
  unsigned __int8 *v69; // [rsp+68h] [rbp-71h]
  __int64 v70; // [rsp+70h] [rbp-69h]
  unsigned __int8 *v71; // [rsp+78h] [rbp-61h]
  void *v72; // [rsp+80h] [rbp-59h]
  __int16 v73; // [rsp+88h] [rbp-51h] BYREF
  int v74; // [rsp+8Ah] [rbp-4Fh]
  __int16 v75; // [rsp+8Eh] [rbp-4Bh]
  int v76; // [rsp+90h] [rbp-49h]
  char v77[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v78; // [rsp+C0h] [rbp-19h]

  v17 = a2;
  v71 = (unsigned __int8 *)a4;
  if ( a6 )
    a4 = a6;
  v69 = (unsigned __int8 *)a4;
  v18 = a5;
  if ( a7 )
    v18 = a7;
  v74 = 0;
  v68 = (unsigned __int8 *)v18;
  v70 = a5;
  v62 = a15;
  v57 = 0;
  v73 = 257;
  v75 = 768;
  v76 = 0;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v19 = *(_BYTE *)Src;
  v20 = *((unsigned __int16 *)Src + 1);
  if ( (unsigned __int8)(*(_BYTE *)Src - 11) > 1u && v19 < 0xFu )
  {
    v64 = 0LL;
    v72 = 0LL;
    v67 = 0;
    if ( v19 <= 3u )
    {
      v65 = Src + 2;
      Size = 8LL;
LABEL_22:
      Srca = Src;
      goto LABEL_23;
    }
    if ( (unsigned __int8)(v19 - 9) <= 1u || v19 >= 0xDu )
    {
      Size = 8LL;
      v65 = Src + 2;
      v72 = (char *)Src + RtlLengthSid(Src + 2) + 8;
      v67 = v20 - RtlLengthSid(Src + 2) - 8;
      goto LABEL_22;
    }
    if ( v19 != 4 )
    {
      v42 = Src[2] & 2;
      v43 = Src[2] & 1;
      v44 = 7LL;
      if ( !v42 )
        v44 = 3LL;
      v65 = &Src[4 * (Src[2] & 1) + v44];
      v45 = (_DWORD)v65 - (_DWORD)Src;
      Size = (unsigned int)((_DWORD)v65 - (_DWORD)Src);
      if ( (v42 & 2) != 0 )
        v46 = &Src[4 * v43 + 3];
      else
        v46 = 0LL;
      Srca = Src;
      if ( a14 )
      {
        Srca = Src;
        if ( v46 )
        {
          v52 = a9;
          if ( !a9 || (AccessMask = 0, !a10) )
          {
LABEL_86:
            LODWORD(v20) = 0;
            goto LABEL_18;
          }
          while ( 1 )
          {
            v53 = *(_QWORD *)v46;
            Srca = *v52;
            v54 = v53 - *(_QWORD *)Srca;
            if ( !v54 )
              v54 = *((_QWORD *)v46 + 1) - *((_QWORD *)Srca + 1);
            if ( !v54 )
              break;
            ++v52;
            if ( ++AccessMask >= a10 )
              goto LABEL_86;
          }
          *a14 = 1;
          if ( a3 )
          {
            v57 = 1;
            goto LABEL_22;
          }
          *a15 = 1;
          if ( (Src[2] & 1) != 0 )
          {
            LODWORD(v20) = v20 - 16;
            Size = (unsigned int)(v45 - 16);
            memmove(v77, Src, Size);
            v78 &= ~2u;
          }
          else
          {
            LODWORD(v20) = v20 - 20;
            Size = (unsigned int)(v45 - 20);
            memmove(v77, Src, Size);
            v77[0] = *((_BYTE *)qword_140A37C48 + *(unsigned __int8 *)Src);
          }
          Srca = v77;
        }
      }
LABEL_23:
      if ( !(_DWORD)v20 )
        goto LABEL_11;
      v59 = Src[1];
      AccessMask = v59;
      RtlMapGenericMask(&AccessMask, GenericMapping);
      v22 = *(unsigned __int8 *)Src;
      if ( (unsigned __int8)v22 <= 0xAu && (v23 = 1651, _bittest(&v23, v22)) )
        GenericAll = GenericMapping->GenericAll;
      else
        GenericAll = GenericMapping->GenericAll | 0x1000000;
      v25 = AccessMask & GenericAll;
      if ( v25 != v59 )
        *v62 = 1;
      v60 = v25 & 0x11FFFFF;
      if ( (v25 & 0x11FFFFF) == 0 && !(unsigned __int8)sub_140728CFC(v65, &v73) )
      {
        LODWORD(v20) = 0;
        goto LABEL_11;
      }
      v26 = v65;
      if ( !(unsigned __int8)sub_140728CFC(v65, &v73) )
        goto LABEL_31;
      v36 = v26[2];
      if ( !v36 )
      {
        v37 = v71;
LABEL_43:
        v65 = v37;
        v38 = v20 + 4 * v37[1];
        v27 = v62;
        LODWORD(v20) = v38 - 4;
        *v62 = 1;
        goto LABEL_32;
      }
      v40 = v36 - 1;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( !v41 )
        {
          v37 = v69;
          goto LABEL_43;
        }
        if ( v41 == 1 )
        {
          v37 = v68;
          goto LABEL_43;
        }
      }
      else
      {
        v37 = (unsigned __int8 *)v70;
        if ( v70 )
          goto LABEL_43;
      }
LABEL_31:
      v27 = v62;
LABEL_32:
      if ( v57 && *v27 )
      {
        if ( (Src[2] & 1) != 0 )
        {
          LODWORD(v20) = v20 - 16;
          v55 = (unsigned int)(Size - 16);
          Size = v55;
          memmove(v77, Src, v55);
          v78 &= ~2u;
          v28 = v77;
        }
        else
        {
          LODWORD(v20) = v20 - 20;
          v56 = (unsigned int)(Size - 20);
          Size = v56;
          memmove(v77, Src, v56);
          v28 = v77;
          v77[0] = *((_BYTE *)qword_140A37C48 + *(unsigned __int8 *)Src);
        }
      }
      else
      {
        v28 = (char *)Srca;
      }
      v29 = (char *)*a11;
      if ( *a11 && (unsigned int)v20 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)v29 )
      {
        v30 = (unsigned int)Size;
        memmove(*a11, v28, (unsigned int)Size);
        v31 = &v29[v30];
        v32 = (unsigned __int8 *)v64;
        if ( v64 )
        {
          memmove(v31, v64, 4LL * *((unsigned __int8 *)v64 + 1) + 8);
          v31 += 4 * v32[1] + 8;
        }
        v33 = (unsigned __int8 *)v65;
        memmove(v31, v65, 4LL * *((unsigned __int8 *)v65 + 1) + 8);
        v34 = &v31[4 * v33[1] + 8];
        if ( v72 && v67 > 0 )
        {
          v39 = v67;
          memmove(v34, v72, v67);
          LODWORD(v34) = v39 + (_DWORD)v34;
        }
        v35 = (_DWORD)v34 - *(_DWORD *)a11;
        if ( (unsigned int)v20 < v35 )
          return 0;
        LODWORD(v20) = v35;
        v17 = a2;
        *((_WORD *)*a11 + 1) = v20;
        *((_DWORD *)*a11 + 1) = v60;
        goto LABEL_11;
      }
LABEL_44:
      *a16 = 1;
      goto LABEL_16;
    }
    Size = 12LL;
    v65 = (char *)Src + RtlLengthSid(Src + 3) + 12;
    v64 = Src + 3;
    if ( (unsigned __int8)sub_140728CFC(Src + 3, &v73) )
    {
      v47 = *((_DWORD *)v64 + 2);
      if ( !v47 )
      {
        v50 = v71;
        goto LABEL_70;
      }
      v48 = v47 - 1;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( !v49 )
        {
          v50 = v69;
          goto LABEL_70;
        }
        if ( v49 == 1 )
        {
          v50 = v68;
LABEL_70:
          v64 = v50;
          LODWORD(v20) = v20 + 4 * v50[1] - 4;
          *v62 = 1;
          goto LABEL_22;
        }
      }
      else
      {
        v50 = (unsigned __int8 *)v70;
        if ( v70 )
          goto LABEL_70;
      }
      if ( *v62 )
        goto LABEL_22;
      v51 = *((unsigned __int8 *)v64 + 1);
      v64 = 0LL;
    }
    else
    {
      v51 = *((unsigned __int8 *)v64 + 1);
      v64 = 0LL;
    }
    Size = (unsigned int)(4 * v51 + 20);
    goto LABEL_22;
  }
  if ( v20 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    goto LABEL_44;
  memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
LABEL_11:
  if ( !*a16 && (_DWORD)v20 )
  {
    *((_BYTE *)*a11 + 1) &= 0xE0u;
    if ( v17 )
      *((_BYTE *)*a11 + 1) |= 0x10u;
    ++*(_WORD *)(a13 + 4);
  }
LABEL_16:
  if ( (unsigned int)v20 <= 0xFFFF )
  {
    if ( *a16 )
    {
LABEL_19:
      *a12 = v20;
      return 1;
    }
LABEL_18:
    *a11 = (char *)*a11 + (unsigned int)v20;
    goto LABEL_19;
  }
  return 0;
}
