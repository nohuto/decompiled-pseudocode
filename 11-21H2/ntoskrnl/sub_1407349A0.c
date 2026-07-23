/*
 * XREFs of sub_1407349A0 @ 0x1407349A0
 * Callers:
 *     <none>
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     sub_1406E08E4 @ 0x1406E08E4 (sub_1406E08E4.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 *     sub_14091BC64 @ 0x14091BC64 (sub_14091BC64.c)
 */

__int64 __fastcall sub_1407349A0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned __int8 a4,
        int a5,
        __int64 a6,
        __int128 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  _DWORD *v12; // rbx
  struct _LOOKASIDE_LIST_EX *v13; // r9
  __int64 v14; // r15
  __int64 v15; // r14
  __int128 v16; // xmm0
  POBJECT_TYPE *v17; // r10
  __int64 v18; // r13
  unsigned __int16 v19; // dx
  _WORD *v20; // rcx
  __int16 v21; // ax
  int v22; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // r12
  int v25; // r9d
  __int64 v26; // rax
  int v27; // eax
  int v28; // ebx
  int v29; // esi
  int v30; // eax
  __int64 v31; // r8
  _DWORD *v32; // rdx
  __int64 v33; // rdi
  int v34; // ecx
  int v35; // ecx
  struct _KTHREAD *v36; // rcx
  bool v37; // zf
  _PRIVILEGE_SET *v38; // rdi
  __int64 i; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // ebx
  _PRIVILEGE_SET *v44; // rax
  _PRIVILEGE_SET *v45; // rsi
  _DWORD *v46; // rsi
  int v47; // eax
  int Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v49; // [rsp+28h] [rbp-D8h]
  __int128 v50; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v51[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+70h] [rbp-90h] BYREF
  __int128 v53; // [rsp+78h] [rbp-88h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  int v56; // [rsp+98h] [rbp-68h]
  int v57; // [rsp+9Ch] [rbp-64h]
  __int128 *v58; // [rsp+A0h] [rbp-60h]
  int v59; // [rsp+A8h] [rbp-58h]
  __int128 v60; // [rsp+ACh] [rbp-54h]
  __int64 v61; // [rsp+BCh] [rbp-44h]
  int v62; // [rsp+C4h] [rbp-3Ch]
  PPRIVILEGE_SET Privileges; // [rsp+C8h] [rbp-38h]
  __int64 *v64; // [rsp+D0h] [rbp-30h] BYREF
  __int128 *v65; // [rsp+D8h] [rbp-28h]
  _WORD v66[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v67; // [rsp+E4h] [rbp-1Ch]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  __int128 v69; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v70; // [rsp+100h] [rbp+0h]
  __int128 v71; // [rsp+110h] [rbp+10h]
  __int128 v72; // [rsp+120h] [rbp+20h]
  __int128 v73; // [rsp+130h] [rbp+30h]
  __int128 v74; // [rsp+140h] [rbp+40h]
  __int128 v75; // [rsp+150h] [rbp+50h]
  __int128 v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+170h] [rbp+70h]
  __int128 v78; // [rsp+180h] [rbp+80h] BYREF
  __int128 v79; // [rsp+190h] [rbp+90h] BYREF
  char v80; // [rsp+1F0h] [rbp+F0h]
  int v81; // [rsp+1F8h] [rbp+F8h] BYREF
  _DWORD *v82; // [rsp+200h] [rbp+100h]
  unsigned __int8 v83; // [rsp+208h] [rbp+108h]

  v83 = a4;
  v82 = a3;
  v12 = a3;
  v79 = 0LL;
  v78 = 0LL;
  sub_140347770((__int64)&v79);
  v14 = (__int64)a11;
  v15 = a8;
  v80 = 0;
  v16 = *a7;
  *a11 = 0LL;
  v77 = 0LL;
  v54 = 0LL;
  v51[1] = v51;
  v50 = v16;
  v51[0] = v51;
  v52 = 0LL;
  Privileges = 0LL;
  v69 = 0LL;
  LODWORD(a7) = 0;
  v70 = 0LL;
  v81 = 0;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v53 = 0LL;
  if ( v17 != CmKeyObjectType )
  {
    v28 = -1073741788;
    goto LABEL_46;
  }
  v18 = a10;
  if ( (PVOID)a1 == qword_140D3CB10 )
  {
    for ( i = *(_QWORD *)(a10 + 8); ; i = PsGetParentSilo(i, v41, v42, v13) )
    {
      a8 = 0LL;
      PsGetPermanentSiloContext(i, dword_140C490B8, (unsigned __int64 *)&a8);
      if ( a8 )
      {
        a1 = *(_QWORD *)(a8 + 32);
        if ( a1 )
          break;
      }
    }
    v14 = (__int64)a11;
    v12 = v82;
  }
  v19 = v50;
  if ( (_WORD)v50 )
  {
    v20 = (_WORD *)*((_QWORD *)&v50 + 1);
    while ( *(_WORD *)(*((_QWORD *)&v50 + 1) + 2 * ((unsigned __int64)v19 >> 1) - 2) == 92 )
    {
      v37 = v19 == 2;
      v19 -= 2;
      LOWORD(v50) = v19;
      if ( v37 )
        goto LABEL_9;
    }
    if ( v19 )
    {
      v21 = WORD1(v50);
      do
      {
        if ( *v20 != 92 )
          break;
        ++v20;
        v19 -= 2;
        v21 -= 2;
        *((_QWORD *)&v50 + 1) = v20;
        LOWORD(v50) = v19;
        WORD1(v50) = v21;
      }
      while ( v19 );
    }
  }
LABEL_9:
  if ( !v15 )
  {
    v44 = (_PRIVILEGE_SET *)Allocate(PagedPool, 0x128uLL, 0x34364D43u, v13);
    Privileges = v44;
    v45 = v44;
    if ( !v44 )
    {
      v28 = -1073741670;
      goto LABEL_46;
    }
    memset(v44, 0, 0x128uLL);
    v45[4].Privilege[0].Attributes = -1;
    *(_QWORD *)&v45[7].Privilege[0].Luid.HighPart = (char *)v45 + 144;
    *(_QWORD *)&v45[7].Control = (char *)v45 + 144;
    memset(&v45[10].Privilege[0].Attributes, 0, 0x50uLL);
    v15 = (__int64)v45;
  }
  v22 = *(_DWORD *)(v18 + 4) & *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v15 + 96) = v22;
  if ( *(_QWORD *)(a1 + 8) == *((_QWORD *)qword_140D3CB10 + 1)
    && (_WORD)v50
    && ((**((_WORD **)&v50 + 1) - 65) & 0xFFDF) == 0
    && ((unsigned __int16)v50 <= 2u || *(_WORD *)(*((_QWORD *)&v50 + 1) + 2LL) == 92)
    && (*(_DWORD *)v15 & 0x40) == 0 )
  {
    v28 = -1073741790;
    goto LABEL_44;
  }
  if ( (*(_DWORD *)v15 & 0x800) == 0 || sub_1406E08E4(a1, (unsigned __int16 *)&v50) )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
      *(_DWORD *)(v15 + 24) |= 0x10u;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v24 = a6;
    if ( dword_140C54CA8 && !sub_1402ACD00() )
    {
      *((_QWORD *)&v75 + 1) = 1LL;
      DWORD2(v76) = *(_DWORD *)(v15 + 28);
      LOBYTE(v25) = 1;
      HIDWORD(v76) = a5;
      *(_QWORD *)&v76 = &v50;
      LOBYTE(v77) = v83;
      DWORD2(v70) = *(_DWORD *)(v15 + 24);
      *(_QWORD *)&v70 = CmKeyObjectType;
      DWORD2(v72) = v12[4];
      *(_QWORD *)&v69 = v24;
      *((_QWORD *)&v69 + 1) = a1;
      *((_QWORD *)&v73 + 1) = v14;
      v26 = *(_QWORD *)(v15 + 72);
      if ( (v26 & 1) != 0 )
        v26 = 0LL;
      *(_QWORD *)&v75 = v26;
      *(_QWORD *)&v53 = &v69;
      DWORD2(v53) = *(_DWORD *)(v15 + 96);
      v54 = v15 + 144;
      if ( (*(_DWORD *)v15 & 1) != 0 )
      {
        v66[0] = *(_WORD *)(v15 + 4);
        v66[1] = v66[0];
        v68 = *(_QWORD *)(v15 + 8);
        *(_QWORD *)&v73 = v15 + 32;
        *(_QWORD *)&v71 = v66;
        *((_QWORD *)&v71 + 1) = *((_QWORD *)v12 + 8);
        *(_QWORD *)&v72 = a9;
        v67 = 0;
        v27 = sub_140735760(26, (unsigned int)&v69, (unsigned int)&v53, v25, 27, a1, (__int64)v51);
      }
      else
      {
        v27 = sub_140735760(28, (unsigned int)&v69, (unsigned int)&v53, v25, 29, a1, (__int64)v51);
      }
      v28 = v27;
      if ( v27 < 0 )
      {
        if ( v27 != -1073740541 )
        {
LABEL_43:
          v36 = KeGetCurrentThread();
          v37 = (*((_WORD *)v36 + 242))++ == 0xFFFF;
          if ( v37
            && *((struct _KTHREAD **)v36 + 19) != (struct _KTHREAD *)((char *)v36 + 152)
            && !*((_WORD *)v36 + 243) )
          {
            KiCheckForKernelApcDelivery();
          }
          goto LABEL_44;
        }
        v28 = HIDWORD(v53);
        if ( HIDWORD(v53) == 872 )
        {
LABEL_69:
          *(_QWORD *)(v15 + 64) = 0LL;
          *(_QWORD *)(v18 + 8) = 0LL;
          goto LABEL_43;
        }
        if ( HIDWORD(v53) != 260 )
        {
          v46 = v82;
          v47 = HIDWORD(v72);
          v82[5] |= HIDWORD(v72);
          v46[4] &= ~(v47 | 0x2000000);
          v28 = 0;
          goto LABEL_43;
        }
        goto LABEL_40;
      }
      a1 = *((_QWORD *)&v69 + 1);
      *(_DWORD *)(v15 + 96) = DWORD2(v53);
      v80 = 1;
    }
    v29 = (int)v82;
    while ( 1 )
    {
      while ( 1 )
      {
        v78 = v50;
        v30 = sub_1407362A0(a1, v29, v83, a5, v24, (__int64)&v78, v15, a9, (__int64)&v52);
        v28 = v30;
        if ( v30 != 259 )
          break;
        KeWaitForSingleObject((char *)&unk_140C025A0 + 184 * *(unsigned int *)(v15 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v15 &= ~0x100u;
      }
      if ( v30 != -1073741267 )
        break;
      v43 = (int)a7;
      if ( (unsigned int)a7 >= 0x40 )
      {
        v28 = -1073741772;
        v22 = *(_DWORD *)(v18 + 4) & *(_DWORD *)(a1 + 96);
        goto LABEL_27;
      }
      if ( (*(_DWORD *)(v15 + 100) & 4) != 0 )
      {
        sub_14091BC64(*(unsigned int *)(v15 + 120), *(_QWORD *)(v15 + 128), v31, &v81);
        *(_DWORD *)(v15 + 100) &= ~4u;
        *(_DWORD *)(v15 + 120) = 0;
        *(_QWORD *)(v15 + 128) = 0LL;
      }
      LODWORD(a7) = v43 + 1;
    }
    v22 = *(_DWORD *)(v18 + 4) & *(_DWORD *)(a1 + 96);
    if ( v30 >= 0 )
    {
      *(_QWORD *)v14 = v52;
      v52 = 0LL;
    }
LABEL_27:
    if ( v80 )
    {
      v32 = v82;
      v33 = *(_QWORD *)v14;
      v34 = v82[5];
      HIDWORD(v72) = v34;
      if ( (*(_DWORD *)v15 & 1) != 0 )
      {
        if ( !dword_140C54CA8 )
        {
LABEL_35:
          if ( v28 >= 0 && v34 != v32[5] )
          {
            v32[5] = v34;
            v32[4] = v32[6] & ~(v34 | 0x2000000);
          }
          if ( *(_QWORD *)v14 )
            *(_DWORD *)(*(_QWORD *)v14 + 96LL) = DWORD2(v53);
          goto LABEL_40;
        }
        if ( sub_1402ACD00() || (_QWORD *)v51[0] == v51 )
        {
LABEL_34:
          v34 = HIDWORD(v72);
          v32 = v82;
          goto LABEL_35;
        }
        v35 = 27;
        v58 = &v69;
        v64 = &v55;
        v65 = &v53;
        v49 = v33;
        Timeout = 27;
      }
      else
      {
        if ( !dword_140C54CA8 )
          goto LABEL_35;
        if ( sub_1402ACD00() || (_QWORD *)v51[0] == v51 )
          goto LABEL_34;
        v35 = 29;
        v58 = &v69;
        v64 = &v55;
        v65 = &v53;
        v49 = v33;
        Timeout = 29;
      }
      v57 = 0;
      v61 = 0LL;
      v62 = 0;
      v55 = v33;
      v60 = 0LL;
      v56 = v28;
      v59 = v28;
      sub_140735760(v35, (unsigned int)&v55, (unsigned int)&v64, 0, Timeout, v49, (__int64)v51);
      v28 = v59;
      goto LABEL_34;
    }
LABEL_40:
    if ( v28 != 872 )
    {
      if ( v28 == 260 )
      {
        *(_DWORD *)(v15 + 96) = v22;
        *(_QWORD *)(v18 + 8) = PsGetCurrentSilo();
      }
      goto LABEL_43;
    }
    goto LABEL_69;
  }
  v28 = -1073741790;
LABEL_44:
  v38 = Privileges;
  if ( Privileges )
  {
    sub_14067FE98(Privileges, 0LL);
    SeFreePrivileges(v38);
  }
LABEL_46:
  sub_14022EA30((__int64 *)&v79);
  return (unsigned int)v28;
}
