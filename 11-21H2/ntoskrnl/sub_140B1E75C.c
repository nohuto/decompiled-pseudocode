/*
 * XREFs of sub_140B1E75C @ 0x140B1E75C
 * Callers:
 *     sub_140B1E170 @ 0x140B1E170 (sub_140B1E170.c)
 * Callees:
 *     sub_14022D554 @ 0x14022D554 (sub_14022D554.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_14075563C @ 0x14075563C (sub_14075563C.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     sub_14084895C @ 0x14084895C (sub_14084895C.c)
 *     RtlAddProcessTrustLabelAce @ 0x140848A40 (RtlAddProcessTrustLabelAce.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B1E75C()
{
  char *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rax
  unsigned int v3; // r8d
  PSID v4; // r12
  PSID v5; // rbx
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // r13d
  ULONG v9; // edi
  ACL *Pool2; // rax
  ACL *v11; // r14
  ULONG v12; // edi
  ACL *v13; // rax
  ACL *v14; // rsi
  void *v15; // rax
  void *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  ACL *v23; // rcx
  signed __int32 v24[8]; // [rsp+8h] [rbp-120h] BYREF
  UCHAR AceType[4]; // [rsp+28h] [rbp-100h]
  ACCESS_MASK AccessMask[2]; // [rsp+30h] [rbp-F8h]
  int v27; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-70h] BYREF
  int v30[2]; // [rsp+C0h] [rbp-68h] BYREF
  _SID_AND_ATTRIBUTES v31; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-48h]
  __int64 v34; // [rsp+E8h] [rbp-40h]
  int v35; // [rsp+F0h] [rbp-38h]
  int v36; // [rsp+F4h] [rbp-34h]
  void *v37; // [rsp+F8h] [rbp-30h]
  __int64 v38; // [rsp+100h] [rbp-28h]
  __m128i si128; // [rsp+108h] [rbp-20h] BYREF
  __int64 v40; // [rsp+118h] [rbp-10h] BYREF
  int v41; // [rsp+120h] [rbp-8h]
  LUID v42; // [rsp+124h] [rbp-4h]
  int v43; // [rsp+12Ch] [rbp+4h]
  __int64 v44; // [rsp+130h] [rbp+8h]
  int v45; // [rsp+138h] [rbp+10h]
  LUID v46; // [rsp+13Ch] [rbp+14h]
  int v47; // [rsp+144h] [rbp+1Ch]
  LUID v48; // [rsp+148h] [rbp+20h]
  int v49; // [rsp+150h] [rbp+28h]
  LUID v50; // [rsp+154h] [rbp+2Ch]
  int v51; // [rsp+15Ch] [rbp+34h]
  LUID v52; // [rsp+160h] [rbp+38h]
  int v53; // [rsp+168h] [rbp+40h]
  LUID v54; // [rsp+16Ch] [rbp+44h]
  int v55; // [rsp+174h] [rbp+4Ch]
  LUID v56; // [rsp+178h] [rbp+50h]
  int v57; // [rsp+180h] [rbp+58h]
  LUID v58; // [rsp+184h] [rbp+5Ch]
  int v59; // [rsp+18Ch] [rbp+64h]
  __int64 v60; // [rsp+190h] [rbp+68h]
  int v61; // [rsp+198h] [rbp+70h]
  LUID v62; // [rsp+19Ch] [rbp+74h]
  int v63; // [rsp+1A4h] [rbp+7Ch]
  LUID v64; // [rsp+1A8h] [rbp+80h]
  int v65; // [rsp+1B0h] [rbp+88h]
  __int64 v66; // [rsp+1B4h] [rbp+8Ch]
  int v67; // [rsp+1BCh] [rbp+94h]
  LUID v68; // [rsp+1C0h] [rbp+98h]
  int v69; // [rsp+1C8h] [rbp+A0h]
  LUID v70; // [rsp+1CCh] [rbp+A4h]
  int v71; // [rsp+1D4h] [rbp+ACh]
  LUID v72; // [rsp+1D8h] [rbp+B0h]
  int v73; // [rsp+1E0h] [rbp+B8h]
  LUID v74; // [rsp+1E4h] [rbp+BCh]
  int v75; // [rsp+1ECh] [rbp+C4h]
  LUID v76; // [rsp+1F0h] [rbp+C8h]
  int v77; // [rsp+1F8h] [rbp+D0h]
  LUID v78; // [rsp+1FCh] [rbp+D4h]
  int v79; // [rsp+204h] [rbp+DCh]
  __int64 v80; // [rsp+208h] [rbp+E0h]
  int v81; // [rsp+210h] [rbp+E8h]
  __int64 v82; // [rsp+214h] [rbp+ECh]
  int v83; // [rsp+21Ch] [rbp+F4h]
  __int64 v84; // [rsp+220h] [rbp+F8h]
  int v85; // [rsp+228h] [rbp+100h]
  LUID v86; // [rsp+22Ch] [rbp+104h]
  int v87; // [rsp+234h] [rbp+10Ch]
  __int64 v88; // [rsp+238h] [rbp+110h]
  int v89; // [rsp+240h] [rbp+118h]
  __int64 v90; // [rsp+244h] [rbp+11Ch]
  int v91; // [rsp+24Ch] [rbp+124h]
  __int64 v92; // [rsp+250h] [rbp+128h]
  int v93; // [rsp+258h] [rbp+130h]
  LUID v94; // [rsp+25Ch] [rbp+134h]
  int v95; // [rsp+264h] [rbp+13Ch]
  __int64 v96; // [rsp+268h] [rbp+140h]
  int v97; // [rsp+270h] [rbp+148h]
  LUID v98; // [rsp+274h] [rbp+14Ch]
  int v99; // [rsp+27Ch] [rbp+154h]
  __int64 v100; // [rsp+280h] [rbp+158h]
  int v101; // [rsp+288h] [rbp+160h]
  _SID_AND_ATTRIBUTES v102; // [rsp+298h] [rbp+170h] BYREF
  PSID v103; // [rsp+2A8h] [rbp+180h]
  int v104; // [rsp+2B0h] [rbp+188h]
  __int64 v105; // [rsp+2B8h] [rbp+190h]
  int v106; // [rsp+2C0h] [rbp+198h]
  __int64 v107; // [rsp+2C8h] [rbp+1A0h]
  int v108; // [rsp+2D0h] [rbp+1A8h]

  v0 = (char *)qword_140C15B58;
  *(_QWORD *)v30 = 0LL;
  *(&v31.Attributes + 1) = 0;
  HIDWORD(v32) = 0;
  v36 = 0;
  v29 = 0LL;
  v27 = 1;
  v28 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140025B50);
  if ( !qword_140C15B58 || !*(_BYTE *)qword_140C15B58 )
  {
    sub_14022D554(si128.m128i_i16, &v29);
    goto LABEL_6;
  }
  v1 = *((_DWORD *)qword_140C15B58 + 1);
  _InterlockedOr(v24, 0);
  if ( !sub_14022D554(si128.m128i_i16, &v28) )
    goto LABEL_6;
  v2 = v28;
  v3 = 0;
  if ( !v1 )
    goto LABEL_5;
  v20 = (__int64 *)(v0 + 8);
  while ( 1 )
  {
    v21 = *v20;
    if ( *v20 >= 0 )
    {
      if ( v2 < v21 + 10000000 )
      {
        if ( v2 < v21 )
          goto LABEL_5;
        v2 = 2 * v2 - v21;
      }
      else
      {
        v2 += 10000000LL;
      }
      goto LABEL_18;
    }
    v22 = v21 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v2 < v22 + 10000000 )
      break;
    v2 -= 10000000LL;
LABEL_18:
    ++v3;
    ++v20;
    if ( v3 >= v1 )
      goto LABEL_5;
  }
  if ( v2 < v22 )
LABEL_5:
    v29 = v2;
LABEL_6:
  v4 = SidToCheck;
  v5 = Group;
  v104 = 7;
  v106 = 7;
  v103 = qword_140C5AFA8;
  v31.Sid = Group;
  v31.Attributes = 0;
  v102.Sid = SidToCheck;
  v105 = qword_140D3CC00;
  v107 = qword_140C1B9A8;
  v102.Attributes = 14;
  v108 = 96;
  v6 = ((4 * *(unsigned __int8 *)(qword_140D3CC00 + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)qword_140C5AFA8 + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)SidToCheck + 1) + 11) & 0xFFFFFFFC);
  v7 = *(unsigned __int8 *)(qword_140C1B9A8 + 1);
  v41 = 3;
  v43 = 0;
  v45 = 0;
  v47 = 3;
  v40 = (__int64)stru_140D3CA10;
  v8 = v6 + ((4 * v7 + 11) & 0xFFFFFFFC) + 16;
  v42 = stru_140D3CB28;
  v44 = qword_140D3CAC0;
  v46 = stru_140D3CCF0;
  v48 = stru_140D3CA80;
  v50 = stru_140D3CB50;
  v52 = stru_140D3CAF0;
  v54 = stru_140D3CA68;
  v56 = stru_140D3CB68;
  v58 = stru_140D3CA18;
  v60 = qword_140D3CBC0;
  v62 = stru_140D3CA98;
  v64 = stru_140D3CA50;
  v66 = qword_140D3CCE0;
  v68 = stru_140D3CA58;
  v70 = stru_140D3CA70;
  v49 = 3;
  v51 = 0;
  v53 = 0;
  v55 = 3;
  v57 = 3;
  v59 = 3;
  v61 = 3;
  v63 = 0;
  v65 = 0;
  v67 = 3;
  v69 = 0;
  v72 = stru_140D3CAB8;
  v74 = PrivilegeValue;
  v76 = stru_140D3CA90;
  v78 = stru_140D3CB60;
  v80 = qword_140D3CE68;
  v82 = qword_140D3CCD0;
  v84 = qword_140D3CDA0;
  v86 = stru_140D3CC58;
  v88 = qword_140D3CCC8;
  v90 = qword_140D3CAA0;
  v92 = qword_140D3CD88;
  v94 = stru_140D3CCE8;
  v96 = qword_140D3CE70;
  v98 = stru_140D3CB00;
  v77 = 3;
  v85 = 3;
  v87 = 3;
  v93 = 3;
  v95 = 3;
  v97 = 3;
  v99 = 3;
  v101 = 3;
  v100 = qword_140D3CDB0;
  v71 = 0;
  v73 = 0;
  v75 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v89 = 0;
  v91 = 0;
  v9 = 4 * *((unsigned __int8 *)Group + 1) + 24;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v9, 0x63416553u);
  v11 = Pool2;
  if ( Pool2 )
  {
    RtlCreateAcl(Pool2, v9, 2u);
    v12 = 4 * *((unsigned __int8 *)ProcessTrustLabelSid + 1) + 24;
    v13 = (ACL *)ExAllocatePool2(256LL, v12, 0x63416553u);
    v14 = v13;
    if ( v13 )
    {
      RtlCreateAcl(v13, v12, 2u);
      RtlAddAccessAllowedAce(v11, 2u, 0xF01FFu, Group);
      RtlAddProcessTrustLabelAce(v14, 2u, 0, ProcessTrustLabelSid, 0x14u, 0x20018u);
      v15 = (void *)ExAllocatePool2(256LL, 0x28uLL, 0x64536553u);
      v16 = v15;
      if ( v15 )
      {
        RtlCreateSecurityDescriptor(v15, 1u);
        RtlSetDaclSecurityDescriptor(v16, 1u, v11, 0);
        RtlSetSaclSecurityDescriptor(v16, 1u, v14, 0);
        RtlSetOwnerSecurityDescriptor(v16, SidToCheck, 0);
        RtlSetGroupSecurityDescriptor(v16, SidToCheck, 0);
        LODWORD(v32) = 48;
        v33 = 0LL;
        v35 = 0;
        v34 = 0LL;
        v38 = 0LL;
        v37 = v16;
        sub_14084895C(
          (HANDLE *)v30,
          v17,
          v18,
          &v32,
          *(int *)AceType,
          AccessMask[0],
          (__int64)&qword_140A37C38,
          &v29,
          &v31,
          4u,
          &v102,
          v8,
          0x1Fu,
          (char **)&v40,
          v4,
          v5,
          SeSystemDefaultDacl);
        sub_14075563C(*(__int64 *)v30, &v27);
        ExFreePoolWithTag(v11, 0);
        ExFreePoolWithTag(v14, 0);
        ExFreePoolWithTag(v16, 0);
        return *(_QWORD *)v30;
      }
      ExFreePoolWithTag(v11, 0);
      v23 = v14;
    }
    else
    {
      v23 = v11;
    }
    ExFreePoolWithTag(v23, 0);
  }
  return 0LL;
}
