/*
 * XREFs of SepCopyTokenAccessInformation @ 0x1407F4034
 * Callers:
 *     SeQueryInformationToken @ 0x140719710 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140730A90 (NtQueryInformationToken.c)
 * Callees:
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1402269B0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     RtlSidHashInitialize @ 0x140228430 (RtlSidHashInitialize.c)
 *     SeQueryMandatoryPolicyToken @ 0x1403706A4 (SeQueryMandatoryPolicyToken.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     Feature_1410919738__private_IsEnabledDeviceUsage @ 0x1404116EC (Feature_1410919738__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlCopySidAndAttributesArray @ 0x140714F60 (RtlCopySidAndAttributesArray.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1407F4710 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 */

__int64 __fastcall SepCopyTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
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
  __int64 v18; // rbx
  __int64 v19; // rcx
  char *v20; // rdi
  int v21; // eax
  unsigned int v22; // r8d
  __int64 v23; // r15
  int IsEnabledDeviceUsage; // eax
  ULONG v25; // edx
  __int64 v26; // r12
  _SID_AND_ATTRIBUTES *v27; // rcx
  unsigned __int64 *Hash; // rcx
  _OWORD *v29; // rax
  __int64 v30; // rdx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 v38; // rbx
  __int64 v39; // r15
  ULONG v40; // ecx
  int v41; // eax
  ULONG v42; // edx
  _SID_AND_ATTRIBUTES *v43; // rcx
  unsigned __int64 *v44; // rcx
  __int64 v45; // rdx
  _OWORD *v46; // rax
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int64 v54; // rbx
  __int64 v55; // r15
  ULONG v56; // ecx
  int v57; // eax
  ULONG v58; // edx
  _SID_AND_ATTRIBUTES *v59; // rcx
  unsigned __int64 *v60; // rcx
  _OWORD *v61; // rax
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int64 v69; // rax
  char *v70; // rbx
  char *v71; // r15
  __int64 v72; // r15
  char *v73; // rbx
  int v74; // r8d
  char *v75; // rbx
  int v76; // eax
  char *v77; // rdx
  PSID RemainingSidArea; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v80; // [rsp+48h] [rbp-B8h]
  unsigned int v81; // [rsp+4Ch] [rbp-B4h]
  unsigned int v82; // [rsp+50h] [rbp-B0h]
  unsigned int v83; // [rsp+54h] [rbp-ACh]
  unsigned int v84; // [rsp+58h] [rbp-A8h]
  unsigned int v85; // [rsp+5Ch] [rbp-A4h]
  unsigned int v86; // [rsp+60h] [rbp-A0h]
  unsigned int v87; // [rsp+64h] [rbp-9Ch]
  int v88; // [rsp+68h] [rbp-98h]
  __int64 v89; // [rsp+70h] [rbp-90h]
  _SID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+80h] [rbp-80h] BYREF

  v80 = a5;
  v81 = a7;
  v84 = a8;
  v83 = a9;
  v82 = a10;
  v85 = a11;
  v86 = a12;
  v18 = a3;
  v87 = a13;
  v88 = a4;
  memset(&SidAttrHash, 0, 0x10CuLL);
  Feature_1410919738__private_IsEnabledDeviceUsage();
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 200);
  v89 = a2 + v18;
  SeQueryMandatoryPolicyToken(a1, (_DWORD *)(a2 + 40));
  v19 = *(_QWORD *)(a1 + 1080);
  v20 = 0LL;
  v21 = 0;
  if ( v19 )
    v21 = *(_DWORD *)(v19 + 40);
  v22 = v80;
  *(_DWORD *)(a2 + 48) = v21;
  v23 = a2 + 360;
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 124);
  *(_QWORD *)(a2 + 96) = a2 + 360;
  *(_QWORD *)a2 = a2 + 88;
  RtlCopySidAndAttributesArray(
    *(_DWORD *)(a1 + 124),
    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
    v22 - a6,
    (PSID_AND_ATTRIBUTES)(a2 + 360),
    (PSID)(a2 + 360 + a6),
    &RemainingSidArea,
    (PULONG)&RemainingSidArea);
  IsEnabledDeviceUsage = Feature_1410919738__private_IsEnabledDeviceUsage();
  v25 = *(_DWORD *)(a1 + 124);
  v26 = 2LL;
  v27 = *(_SID_AND_ATTRIBUTES **)(a1 + 152);
  if ( IsEnabledDeviceUsage )
  {
    RtlSidHashInitialize(v27, v25, &SidAttrHash);
    memset((void *)(a2 + 92), 0, 0x10CuLL);
    Hash = SidAttrHash.Hash;
    *(_DWORD *)(a2 + 88) = SidAttrHash.SidCount;
    v29 = (_OWORD *)(a2 + 104);
    v30 = 2LL;
    do
    {
      v31 = *((_OWORD *)Hash + 1);
      *v29 = *(_OWORD *)Hash;
      v32 = *((_OWORD *)Hash + 2);
      v29[1] = v31;
      v33 = *((_OWORD *)Hash + 3);
      v29[2] = v32;
      v34 = *((_OWORD *)Hash + 4);
      v29[3] = v33;
      v35 = *((_OWORD *)Hash + 5);
      v29[4] = v34;
      v36 = *((_OWORD *)Hash + 6);
      v29[5] = v35;
      v37 = *((_OWORD *)Hash + 7);
      Hash += 16;
      v29[6] = v36;
      v29 += 8;
      *(v29 - 1) = v37;
      --v30;
    }
    while ( v30 );
  }
  else
  {
    RtlSidHashInitialize(v27, v25, (PSID_AND_ATTRIBUTES_HASH)(a2 + 88));
  }
  *(_QWORD *)(a2 + 96) = v23;
  v38 = v23 + v80;
  *(_DWORD *)v38 = *(_DWORD *)(a1 + 128);
  v39 = v38 + 272;
  *(_QWORD *)(v38 + 8) = v38 + 272;
  *(_QWORD *)(a2 + 8) = v38;
  v40 = *(_DWORD *)(a1 + 128);
  if ( v40 )
  {
    RtlCopySidAndAttributesArray(
      v40,
      *(PSID_AND_ATTRIBUTES *)(a1 + 160),
      v81 - v84,
      (PSID_AND_ATTRIBUTES)(v38 + 272),
      (PSID)(v39 + v84),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    v41 = Feature_1410919738__private_IsEnabledDeviceUsage();
    v42 = *(_DWORD *)(a1 + 128);
    v43 = *(_SID_AND_ATTRIBUTES **)(a1 + 160);
    if ( v41 )
    {
      RtlSidHashInitialize(v43, v42, &SidAttrHash);
      v44 = SidAttrHash.Hash;
      *(_DWORD *)(v38 + 4) = 0;
      v45 = 2LL;
      *(_DWORD *)v38 = SidAttrHash.SidCount;
      v46 = (_OWORD *)(v38 + 16);
      do
      {
        v47 = *((_OWORD *)v44 + 1);
        *v46 = *(_OWORD *)v44;
        v48 = *((_OWORD *)v44 + 2);
        v46[1] = v47;
        v49 = *((_OWORD *)v44 + 3);
        v46[2] = v48;
        v50 = *((_OWORD *)v44 + 4);
        v46[3] = v49;
        v51 = *((_OWORD *)v44 + 5);
        v46[4] = v50;
        v52 = *((_OWORD *)v44 + 6);
        v46[5] = v51;
        v53 = *((_OWORD *)v44 + 7);
        v44 += 16;
        v46[6] = v52;
        v46 += 8;
        *(v46 - 1) = v53;
        --v45;
      }
      while ( v45 );
    }
    else
    {
      RtlSidHashInitialize(v43, v42, (PSID_AND_ATTRIBUTES_HASH)v38);
    }
    *(_QWORD *)(v38 + 8) = v39;
  }
  v54 = v39 + v81;
  *(_DWORD *)v54 = *(_DWORD *)(a1 + 800);
  v55 = v54 + 272;
  *(_QWORD *)(v54 + 8) = v54 + 272;
  *(_QWORD *)(a2 + 64) = v54;
  v56 = *(_DWORD *)(a1 + 800);
  if ( v56 )
  {
    RtlCopySidAndAttributesArray(
      v56,
      *(PSID_AND_ATTRIBUTES *)(a1 + 792),
      v82 - v85,
      (PSID_AND_ATTRIBUTES)(v54 + 272),
      (PSID)(v55 + v85),
      &RemainingSidArea,
      (PULONG)&RemainingSidArea);
    v57 = Feature_1410919738__private_IsEnabledDeviceUsage();
    v58 = *(_DWORD *)(a1 + 800);
    v59 = *(_SID_AND_ATTRIBUTES **)(a1 + 792);
    if ( v57 )
    {
      RtlSidHashInitialize(v59, v58, &SidAttrHash);
      v60 = SidAttrHash.Hash;
      *(_DWORD *)(v54 + 4) = 0;
      *(_DWORD *)v54 = SidAttrHash.SidCount;
      v61 = (_OWORD *)(v54 + 16);
      do
      {
        v62 = *((_OWORD *)v60 + 1);
        *v61 = *(_OWORD *)v60;
        v63 = *((_OWORD *)v60 + 2);
        v61[1] = v62;
        v64 = *((_OWORD *)v60 + 3);
        v61[2] = v63;
        v65 = *((_OWORD *)v60 + 4);
        v61[3] = v64;
        v66 = *((_OWORD *)v60 + 5);
        v61[4] = v65;
        v67 = *((_OWORD *)v60 + 6);
        v61[5] = v66;
        v68 = *((_OWORD *)v60 + 7);
        v60 += 16;
        v61[6] = v67;
        v61 += 8;
        *(v61 - 1) = v68;
        --v26;
      }
      while ( v26 );
    }
    else
    {
      RtlSidHashInitialize(v59, v58, (PSID_AND_ATTRIBUTES_HASH)v54);
    }
    *(_QWORD *)(v54 + 8) = v55;
  }
  v69 = v83;
  v70 = (char *)(v55 + v82);
  v71 = 0LL;
  if ( v83 )
  {
    v71 = v70;
    memmove(v70, *(const void **)(a1 + 784), 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 784) + 1LL) + 8);
    v69 = v83;
  }
  *(_QWORD *)(a2 + 56) = v71;
  if ( !a14 )
    Src = *(unsigned __int8 **)(a1 + 1104);
  v72 = v86;
  v73 = &v70[v69];
  if ( v86 )
  {
    v20 = v73;
    memmove(v73, Src, 4LL * Src[1] + 8);
  }
  v74 = v89;
  v75 = &v73[v72];
  *(_QWORD *)(a2 + 72) = v20;
  AuthzBasepQueryInternalSecurityAttributesToken(
    *(_QWORD *)(a1 + 776),
    v75,
    (unsigned int)(v74 - (_DWORD)v75),
    &RemainingSidArea);
  v76 = v88;
  v77 = &v75[v87];
  *(_QWORD *)(a2 + 80) = v75;
  *(_DWORD *)v77 = v76;
  *(_QWORD *)(a2 + 16) = v77;
  return SepConvertTokenPrivilegesToLuidAndAttributes((_QWORD *)a1, (__int64)(v77 + 4));
}
