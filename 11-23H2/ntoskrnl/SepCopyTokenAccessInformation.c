/*
 * XREFs of SepCopyTokenAccessInformation @ 0x1407F3D84
 * Callers:
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140730CC0 (NtQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140226AA0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     RtlSidHashInitialize @ 0x140228520 (RtlSidHashInitialize.c)
 *     SeQueryMandatoryPolicyToken @ 0x140370E94 (SeQueryMandatoryPolicyToken.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCopySidAndAttributesArray @ 0x1407150C0 (RtlCopySidAndAttributesArray.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1407F436C (AuthzBasepQueryInternalSecurityAttributesToken.c)
 */

__int64 __fastcall SepCopyTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        char a14,
        unsigned __int8 *Src)
{
  int v19; // r12d
  __int64 v20; // rcx
  char *v21; // rsi
  int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 *Hash; // rcx
  __int64 v27; // rdx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r15
  ULONG v39; // ecx
  __int64 v40; // rbx
  __int64 v41; // r15
  ULONG v42; // ecx
  __int64 v43; // rax
  char *v44; // rbx
  char *v45; // r15
  __int64 v46; // r15
  char *v47; // rbx
  char *v48; // rbx
  int v49; // eax
  char *v50; // rdx
  unsigned __int64 *v52; // rcx
  __int64 v53; // rdx
  _OWORD *v54; // rax
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  unsigned __int64 *v62; // rcx
  __int64 v63; // rdx
  _OWORD *v64; // rax
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  PSID RemainingSidArea; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v73; // [rsp+48h] [rbp-B8h]
  unsigned int v74; // [rsp+4Ch] [rbp-B4h]
  unsigned int v75; // [rsp+50h] [rbp-B0h]
  unsigned int v76; // [rsp+54h] [rbp-ACh]
  unsigned int v77; // [rsp+58h] [rbp-A8h]
  unsigned int v78; // [rsp+5Ch] [rbp-A4h]
  unsigned int v79; // [rsp+60h] [rbp-A0h]
  unsigned int v80; // [rsp+64h] [rbp-9Ch]
  int v81; // [rsp+68h] [rbp-98h]
  _SID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+70h] [rbp-90h] BYREF

  v73 = a5;
  LODWORD(RemainingSidArea) = a6;
  v74 = a7;
  v77 = a8;
  v76 = a9;
  v75 = a10;
  v78 = a11;
  v79 = a12;
  v80 = a13;
  v81 = a4;
  memset(&SidAttrHash, 0, 0x10CuLL);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  v19 = a2 + a3;
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 200);
  SeQueryMandatoryPolicyToken(a1, (_DWORD *)(a2 + 40));
  v20 = *(_QWORD *)(a1 + 1080);
  v21 = 0LL;
  v22 = 0;
  if ( v20 )
    v22 = *(_DWORD *)(v20 + 40);
  v23 = v73;
  *(_DWORD *)(a2 + 48) = v22;
  v24 = a2 + 360;
  v25 = (unsigned int)RemainingSidArea;
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 124);
  *(_QWORD *)(a2 + 96) = a2 + 360;
  *(_QWORD *)a2 = a2 + 88;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    v23 - v25,
    (PSID_AND_ATTRIBUTES)(a2 + 360),
    (PSID)(a2 + 360 + v25),
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 152), *(_DWORD *)(a1 + 124), &SidAttrHash);
  memset((void *)(a2 + 92), 0, 0x10CuLL);
  Hash = SidAttrHash.Hash;
  v27 = 2LL;
  *(_DWORD *)(a2 + 88) = SidAttrHash.SidCount;
  v28 = (_OWORD *)(a2 + 104);
  do
  {
    v29 = *((_OWORD *)Hash + 1);
    *v28 = *(_OWORD *)Hash;
    v30 = *((_OWORD *)Hash + 2);
    v28[1] = v29;
    v31 = *((_OWORD *)Hash + 3);
    v28[2] = v30;
    v32 = *((_OWORD *)Hash + 4);
    v28[3] = v31;
    v33 = *((_OWORD *)Hash + 5);
    v28[4] = v32;
    v34 = *((_OWORD *)Hash + 6);
    v28[5] = v33;
    v35 = *((_OWORD *)Hash + 7);
    Hash += 16;
    v28[6] = v34;
    v28 += 8;
    *(v28 - 1) = v35;
    --v27;
  }
  while ( v27 );
  v36 = v73;
  *(_QWORD *)(a2 + 96) = v24;
  v37 = v36 + v24;
  *(_DWORD *)v37 = *(_DWORD *)(a1 + 128);
  v38 = v37 + 272;
  *(_QWORD *)(v37 + 8) = v37 + 272;
  *(_QWORD *)(a2 + 8) = v37;
  v39 = *(_DWORD *)(a1 + 128);
  if ( v39 )
  {
    RtlCopySidAndAttributesArray(
      v39,
      *(PSID_AND_ATTRIBUTES *)(a1 + 160),
      v74 - v77,
      (PSID_AND_ATTRIBUTES)(v37 + 272),
      (PSID)(v38 + v77),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 160), *(_DWORD *)(a1 + 128), &SidAttrHash);
    v62 = SidAttrHash.Hash;
    *(_DWORD *)(v37 + 4) = 0;
    v63 = 2LL;
    *(_DWORD *)v37 = SidAttrHash.SidCount;
    v64 = (_OWORD *)(v37 + 16);
    do
    {
      v65 = *((_OWORD *)v62 + 1);
      *v64 = *(_OWORD *)v62;
      v66 = *((_OWORD *)v62 + 2);
      v64[1] = v65;
      v67 = *((_OWORD *)v62 + 3);
      v64[2] = v66;
      v68 = *((_OWORD *)v62 + 4);
      v64[3] = v67;
      v69 = *((_OWORD *)v62 + 5);
      v64[4] = v68;
      v70 = *((_OWORD *)v62 + 6);
      v64[5] = v69;
      v71 = *((_OWORD *)v62 + 7);
      v62 += 16;
      v64[6] = v70;
      v64 += 8;
      *(v64 - 1) = v71;
      --v63;
    }
    while ( v63 );
    *(_QWORD *)(v37 + 8) = v38;
  }
  v40 = v38 + v74;
  *(_DWORD *)v40 = *(_DWORD *)(a1 + 800);
  v41 = v40 + 272;
  *(_QWORD *)(v40 + 8) = v40 + 272;
  *(_QWORD *)(a2 + 64) = v40;
  v42 = *(_DWORD *)(a1 + 800);
  if ( v42 )
  {
    RtlCopySidAndAttributesArray(
      v42,
      *(PSID_AND_ATTRIBUTES *)(a1 + 792),
      v75 - v78,
      (PSID_AND_ATTRIBUTES)(v40 + 272),
      (PSID)(v41 + v78),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 792), *(_DWORD *)(a1 + 800), &SidAttrHash);
    v52 = SidAttrHash.Hash;
    *(_DWORD *)(v40 + 4) = 0;
    v53 = 2LL;
    *(_DWORD *)v40 = SidAttrHash.SidCount;
    v54 = (_OWORD *)(v40 + 16);
    do
    {
      v55 = *((_OWORD *)v52 + 1);
      *v54 = *(_OWORD *)v52;
      v56 = *((_OWORD *)v52 + 2);
      v54[1] = v55;
      v57 = *((_OWORD *)v52 + 3);
      v54[2] = v56;
      v58 = *((_OWORD *)v52 + 4);
      v54[3] = v57;
      v59 = *((_OWORD *)v52 + 5);
      v54[4] = v58;
      v60 = *((_OWORD *)v52 + 6);
      v54[5] = v59;
      v61 = *((_OWORD *)v52 + 7);
      v52 += 16;
      v54[6] = v60;
      v54 += 8;
      *(v54 - 1) = v61;
      --v53;
    }
    while ( v53 );
    *(_QWORD *)(v40 + 8) = v41;
  }
  v43 = v76;
  v44 = (char *)(v41 + v75);
  v45 = 0LL;
  if ( v76 )
  {
    v45 = v44;
    memmove(v44, *(const void **)(a1 + 784), 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 784) + 1LL) + 8);
    v43 = v76;
  }
  *(_QWORD *)(a2 + 56) = v45;
  if ( !a14 )
    Src = *(unsigned __int8 **)(a1 + 1104);
  v46 = v79;
  v47 = &v44[v43];
  if ( v79 )
  {
    v21 = v47;
    memmove(v47, Src, 4LL * Src[1] + 8);
  }
  v48 = &v47[v46];
  *(_QWORD *)(a2 + 72) = v21;
  AuthzBasepQueryInternalSecurityAttributesToken(
    *(_QWORD *)(a1 + 776),
    v48,
    (unsigned int)(v19 - (_DWORD)v48),
    &RemainingSidArea);
  v49 = v81;
  v50 = &v48[v80];
  *(_QWORD *)(a2 + 80) = v48;
  *(_DWORD *)v50 = v49;
  *(_QWORD *)(a2 + 16) = v50;
  return SepConvertTokenPrivilegesToLuidAndAttributes((_QWORD *)a1, (__int64)(v50 + 4));
}
