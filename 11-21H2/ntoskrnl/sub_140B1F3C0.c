/*
 * XREFs of sub_140B1F3C0 @ 0x140B1F3C0
 * Callers:
 *     sub_140B1E170 @ 0x140B1E170 (sub_140B1E170.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlLengthRequiredSid @ 0x14066A560 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     sub_140848B8C @ 0x140848B8C (sub_140848B8C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B2114C @ 0x140B2114C (sub_140B2114C.c)
 */

bool sub_140B1F3C0()
{
  int v0; // eax
  bool v1; // cl
  ULONG v2; // edi
  _DWORD *Pool2; // rbx
  _DWORD *v4; // r12
  _DWORD *v5; // r13
  _DWORD *v6; // r15
  _DWORD *v7; // r14
  _DWORD *v8; // rsi
  ULONG v9; // eax
  ULONG v10; // ebx
  ULONG v11; // edi
  ULONG v12; // ebx
  _DWORD *v13; // r12
  _DWORD *v14; // r13
  _DWORD *v15; // r15
  _DWORD *v16; // r14
  _DWORD *v17; // rdi
  _DWORD *v18; // rbx
  PSID v19; // rsi
  _DWORD *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  PSID v24; // rdx
  _DWORD *v25; // rax
  _DWORD *v26; // rbx
  _DWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rax
  PSID v35; // r8
  PSID v36; // rdx
  __int64 v37; // rdx
  char *v38; // rcx
  _DWORD *v40; // [rsp+20h] [rbp-E0h]
  _DWORD *v41; // [rsp+20h] [rbp-E0h]
  __int64 v42; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  __int64 IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  PSID Sid; // [rsp+50h] [rbp-B0h]
  PSID v48; // [rsp+58h] [rbp-A8h]
  PSID v49; // [rsp+60h] [rbp-A0h]
  PSID v50; // [rsp+68h] [rbp-98h]
  PSID v51; // [rsp+70h] [rbp-90h]
  PSID v52; // [rsp+78h] [rbp-88h]
  PSID v53; // [rsp+80h] [rbp-80h]
  PSID v54; // [rsp+88h] [rbp-78h]
  PSID v55; // [rsp+90h] [rbp-70h]
  PSID v56; // [rsp+98h] [rbp-68h]
  PSID v57; // [rsp+A0h] [rbp-60h]
  PSID v58; // [rsp+A8h] [rbp-58h]
  PSID v59; // [rsp+B0h] [rbp-50h]
  PSID v60; // [rsp+B8h] [rbp-48h]
  PSID v61; // [rsp+C0h] [rbp-40h]
  PSID v62; // [rsp+C8h] [rbp-38h]
  PSID v63; // [rsp+D0h] [rbp-30h]
  PSID v64; // [rsp+D8h] [rbp-28h]
  PSID v65; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING v66; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v67; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v68; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v70; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v71; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING v72; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v73; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v74; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v75; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v76; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v77; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v78; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v79; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v80; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING v81; // [rsp+1D8h] [rbp+D8h] BYREF
  UNICODE_STRING v82; // [rsp+1E8h] [rbp+E8h] BYREF
  UNICODE_STRING v83; // [rsp+1F8h] [rbp+F8h] BYREF
  UNICODE_STRING v84; // [rsp+208h] [rbp+108h] BYREF
  UNICODE_STRING v85; // [rsp+218h] [rbp+118h] BYREF
  UNICODE_STRING v86; // [rsp+228h] [rbp+128h] BYREF
  PSID v87; // [rsp+238h] [rbp+138h]
  PSID v88; // [rsp+240h] [rbp+140h]
  PSID v89; // [rsp+248h] [rbp+148h]
  PSID v90; // [rsp+250h] [rbp+150h]
  PSID v91; // [rsp+258h] [rbp+158h]
  PSID v92; // [rsp+260h] [rbp+160h]
  PSID v93; // [rsp+268h] [rbp+168h]
  PSID v94; // [rsp+270h] [rbp+170h]
  PSID v95; // [rsp+278h] [rbp+178h]
  PSID CapabilityGroupSid; // [rsp+280h] [rbp+180h]
  ULONG Size; // [rsp+2E0h] [rbp+1E0h]
  __int64 v98; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v99; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v100; // [rsp+2F8h] [rbp+1F8h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2359330LL;
  UnicodeString.Buffer = L"lpacAppExperience";
  v70.Buffer = L"lpacCom";
  v71.Buffer = L"lpacCryptoServices";
  v72.Buffer = L"lpacIdentityServices";
  v73.Buffer = L"lpacInstrumentation";
  v74.Buffer = L"lpacEnterprisePolicyChangeNotifications";
  v75.Buffer = L"lpacMedia";
  v76.Buffer = L"lpacPnpNotifications";
  v77.Buffer = L"registryRead";
  v78.Buffer = L"lpacServicesManagement";
  v79.Buffer = L"lpacSessionManagement";
  v80.Buffer = L"lpacPrinting";
  v81.Buffer = L"lpacWebPlatform";
  v82.Buffer = L"lpacPayments";
  v83.Buffer = L"lpacClipboard";
  v84.Buffer = L"lpacIME";
  v85.Buffer = L"lpacPackageManagerOperation";
  v86.Buffer = L"lpacDeviceAccess";
  v66.Buffer = L"permissiveLearningMode";
  v68.Buffer = L"sessionImpersonation";
  v67.Buffer = L"constrainedImpersonation";
  LODWORD(IdentifierAuthority) = 0;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(v45) = 0;
  WORD2(v45) = 256;
  LODWORD(v46) = 0;
  WORD2(v46) = 512;
  LODWORD(v100) = 0;
  WORD2(v100) = 768;
  LODWORD(v98) = 0;
  *(_QWORD *)&v70.Length = 1048590LL;
  *(_QWORD *)&v71.Length = 2490404LL;
  *(_QWORD *)&v72.Length = 2752552LL;
  *(_QWORD *)&v73.Length = 2621478LL;
  *(_QWORD *)&v74.Length = 5242958LL;
  *(_QWORD *)&v75.Length = 1310738LL;
  *(_QWORD *)&v76.Length = 2752552LL;
  *(_QWORD *)&v77.Length = 1703960LL;
  *(_QWORD *)&v78.Length = 3014700LL;
  *(_QWORD *)&v79.Length = 2883626LL;
  *(_QWORD *)&v80.Length = 1703960LL;
  *(_QWORD *)&v81.Length = 2097182LL;
  *(_QWORD *)&v82.Length = 1703960LL;
  *(_QWORD *)&v83.Length = 1835034LL;
  *(_QWORD *)&v84.Length = 1048590LL;
  *(_QWORD *)&v85.Length = 3670070LL;
  *(_QWORD *)&v86.Length = 2228256LL;
  *(_QWORD *)&v66.Length = 3014700LL;
  *(_QWORD *)&v68.Length = 2752552LL;
  *(_QWORD *)&v67.Length = 3276848LL;
  WORD2(v98) = 1280;
  LODWORD(v42) = 0;
  WORD2(v42) = 4096;
  LODWORD(v43) = 0;
  WORD2(v43) = 3840;
  LODWORD(v99) = 0;
  WORD2(v99) = 4864;
  v0 = *(_DWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 132LL);
  v1 = (v0 & 0x40) == 0 && MEMORY[0xFFFFF78000000264] == 1 && MEMORY[0xFFFFF780000002E8] <= 0x83400u;
  byte_140C5AEB0 = v1;
  byte_140C5AEB1 = v1;
  byte_140C5AEB2 = (v0 & 0x80) != 0;
  v2 = RtlLengthRequiredSid(1u);
  Size = RtlLengthRequiredSid(6u);
  qword_140D3CAF8 = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  qword_140C5AE50 = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C5AE88 = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C5AE98 = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C5AE90 = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C5AFA8 = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C5AFB8 = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  Pool2 = (_DWORD *)ExAllocatePool2(96LL, v2, 0x69536553u);
  Buf1 = Pool2;
  v40 = qword_140D3CAF8;
  if ( !qword_140D3CAF8 )
    return 0;
  Sid = qword_140C5AFA8;
  if ( !qword_140C5AFA8 )
    return 0;
  v4 = qword_140C5AFB8;
  if ( !qword_140C5AFB8 )
    return 0;
  v5 = qword_140C5AE50;
  if ( !qword_140C5AE50 )
    return 0;
  v6 = qword_140C5AE88;
  if ( !qword_140C5AE88 )
    return 0;
  v7 = qword_140C5AE98;
  if ( !qword_140C5AE98 )
    return 0;
  if ( !Pool2 )
    return 0;
  v8 = qword_140C5AE90;
  if ( !qword_140C5AE90 )
    return 0;
  RtlInitializeSid(qword_140D3CAF8, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v45, 1u);
  RtlInitializeSid(v4, (PSID_IDENTIFIER_AUTHORITY)&v46, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v100, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&v100, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v100, 1u);
  RtlInitializeSid(v8, (PSID_IDENTIFIER_AUTHORITY)&v100, 1u);
  RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&v100, 1u);
  v40[2] = 0;
  *((_DWORD *)Sid + 2) = 0;
  v4[2] = 0;
  v5[2] = 0;
  v6[2] = 1;
  v7[2] = 2;
  v8[2] = 3;
  Pool2[2] = 4;
  v9 = RtlLengthRequiredSid(0);
  qword_140D3CD90 = (PSID)ExAllocatePool2(288LL, v9, 0x69536553u);
  qword_140D3CCA8 = ExAllocatePool2(288LL, v2, 0x69536553u);
  qword_140C5AE68 = ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C5AE70 = ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C5AFC8 = ExAllocatePool2(96LL, v2, 0x69536553u);
  Sid1 = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140D3CC08 = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  Group = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140D3CC00 = ExAllocatePool2(288LL, v2, 0x69536553u);
  qword_140D3CAA8 = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  qword_140D3CA60 = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  qword_140D3CAE0 = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  qword_140D3CB20 = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  qword_140D3CBA8 = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  v10 = RtlLengthRequiredSid(2u);
  SidToCheck = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  qword_140D3CB58 = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  qword_140D3CBF8 = ExAllocatePool2(288LL, v10, 0x69536553u);
  qword_140D3CC30 = ExAllocatePool2(288LL, v10, 0x69536553u);
  qword_140D3CC28 = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  qword_140D3CC20 = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  qword_140D3CC18 = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  qword_140D3CC10 = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  qword_140C1B9C0 = ExAllocatePool2(96LL, v2, 0x69536553u);
  ::Sid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C1B9B8 = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C1B9B0 = (void *)ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C1B9A8 = ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C5AE78 = ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C5AE80 = ExAllocatePool2(96LL, v2, 0x69536553u);
  qword_140C5AFB0 = (PSID)ExAllocatePool2(96LL, v10, 0x69536553u);
  qword_140C5AE48 = (PSID)ExAllocatePool2(96LL, v10, 0x69536553u);
  v11 = RtlLengthRequiredSid(0xAu);
  CapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA70 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA68 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA60 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA58 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA50 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA48 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA40 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA38 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BAB0 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BAA8 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BAA0 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA98 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA90 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA88 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA80 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA78 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BAC0 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C5AE60 = (PSID)ExAllocatePool2(96LL, Size, 0x69536553u);
  qword_140C5AE58 = ExAllocatePool2(96LL, Size, 0x69536553u);
  ProcessTrustLabelSid = (PSID)ExAllocatePool2(96LL, v10, 0x69536553u);
  qword_140C1B9F8 = ExAllocatePool2(96LL, v10, 0x69536553u);
  qword_140C1B9F0 = ExAllocatePool2(96LL, v10, 0x69536553u);
  qword_140C1B9E8 = ExAllocatePool2(96LL, v10, 0x69536553u);
  qword_140C1B9E0 = ExAllocatePool2(96LL, v10, 0x69536553u);
  qword_140C1B9D8 = ExAllocatePool2(96LL, v10, 0x69536553u);
  qword_140C1B9D0 = ExAllocatePool2(96LL, v10, 0x69536553u);
  qword_140C1B9C8 = ExAllocatePool2(96LL, v10, 0x69536553u);
  qword_140C1BA10 = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  qword_140C1BAB8 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  v12 = RtlLengthRequiredSid(9u);
  ::CapabilityGroupSid = (PSID)ExAllocatePool2(288LL, v12, 0x69536553u);
  qword_140C1BA28 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  qword_140C1BA20 = (PSID)ExAllocatePool2(288LL, v12, 0x69536553u);
  qword_140C1BA18 = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  if ( !qword_140D3CD90 )
    return 0;
  v100 = qword_140D3CCA8;
  if ( !qword_140D3CCA8 )
    return 0;
  Sid = (PSID)qword_140C5AE68;
  if ( !qword_140C5AE68 )
    return 0;
  v59 = (PSID)qword_140C5AE70;
  if ( !qword_140C5AE70 )
    return 0;
  v58 = (PSID)qword_140C5AFC8;
  if ( !qword_140C5AFC8 )
    return 0;
  v57 = qword_140D3CC08;
  if ( !qword_140D3CC08 )
    return 0;
  v56 = Sid1;
  if ( !Sid1 )
    return 0;
  v55 = Group;
  if ( !Group )
    return 0;
  v54 = (PSID)qword_140D3CC00;
  if ( !qword_140D3CC00 )
    return 0;
  v53 = qword_140D3CAA8;
  if ( !qword_140D3CAA8 )
    return 0;
  v52 = qword_140D3CA60;
  if ( !qword_140D3CA60 )
    return 0;
  v51 = qword_140D3CAE0;
  if ( !qword_140D3CAE0 )
    return 0;
  v50 = qword_140D3CB20;
  if ( !qword_140D3CB20 )
    return 0;
  v49 = qword_140D3CBA8;
  if ( !qword_140D3CBA8 )
    return 0;
  v48 = SidToCheck;
  if ( !SidToCheck )
    return 0;
  v46 = (__int64)qword_140D3CB58;
  if ( !qword_140D3CB58 )
    return 0;
  v45 = qword_140D3CBF8;
  if ( !qword_140D3CBF8 )
    return 0;
  IdentifierAuthority = qword_140D3CC30;
  if ( !qword_140D3CC30 )
    return 0;
  v13 = qword_140D3CC28;
  if ( !qword_140D3CC28 )
    return 0;
  v14 = qword_140D3CC20;
  if ( !qword_140D3CC20 )
    return 0;
  v15 = qword_140D3CC18;
  if ( !qword_140D3CC18 )
    return 0;
  v16 = qword_140D3CC10;
  if ( !qword_140D3CC10 )
    return 0;
  v60 = (PSID)qword_140C1B9C0;
  if ( !qword_140C1B9C0 )
    return 0;
  v61 = ::Sid;
  if ( !::Sid )
    return 0;
  v62 = qword_140C1B9B8;
  if ( !qword_140C1B9B8 )
    return 0;
  v63 = qword_140C1B9B0;
  if ( !qword_140C1B9B0 )
    return 0;
  v64 = (PSID)qword_140C1B9A8;
  if ( !qword_140C1B9A8 )
    return 0;
  v65 = (PSID)qword_140C5AE78;
  if ( !qword_140C5AE78 )
    return 0;
  v41 = (_DWORD *)qword_140C5AE80;
  if ( !qword_140C5AE80 )
    return 0;
  v17 = qword_140C5AFB0;
  if ( !qword_140C5AFB0 )
    return 0;
  v18 = qword_140C5AE48;
  if ( !qword_140C5AE48 )
    return 0;
  if ( !CapabilitySid )
    return 0;
  if ( !qword_140C1BA70 )
    return 0;
  if ( !qword_140C1BA68 )
    return 0;
  if ( !qword_140C1BA60 )
    return 0;
  if ( !qword_140C1BA58 )
    return 0;
  if ( !qword_140C1BA50 )
    return 0;
  if ( !qword_140C1BA48 )
    return 0;
  if ( !qword_140C1BA40 )
    return 0;
  if ( !qword_140C1BA38 )
    return 0;
  if ( !qword_140C1BAB0 )
    return 0;
  if ( !qword_140C1BAA8 )
    return 0;
  if ( !qword_140C1BAA0 )
    return 0;
  if ( !qword_140C1BA98 )
    return 0;
  if ( !qword_140C1BA90 )
    return 0;
  if ( !qword_140C1BA88 )
    return 0;
  if ( !qword_140C1BA80 )
    return 0;
  if ( !qword_140C1BA78 )
    return 0;
  if ( !qword_140C1BAC0 )
    return 0;
  v19 = qword_140C5AE60;
  if ( !qword_140C5AE60 )
    return 0;
  v89 = ProcessTrustLabelSid;
  if ( !ProcessTrustLabelSid )
    return 0;
  v90 = (PSID)qword_140C1B9F8;
  if ( !qword_140C1B9F8 )
    return 0;
  v91 = (PSID)qword_140C1B9F0;
  if ( !qword_140C1B9F0 )
    return 0;
  v92 = (PSID)qword_140C1B9E8;
  if ( !qword_140C1B9E8 )
    return 0;
  v93 = (PSID)qword_140C1B9E0;
  if ( !qword_140C1B9E0 )
    return 0;
  v94 = (PSID)qword_140C1B9D8;
  if ( !qword_140C1B9D8 )
    return 0;
  v95 = (PSID)qword_140C1B9D0;
  if ( !qword_140C1B9D0 )
    return 0;
  v88 = (PSID)qword_140C1B9C8;
  if ( !qword_140C1B9C8 )
    return 0;
  v87 = (PSID)qword_140C5AE58;
  if ( !qword_140C5AE58 )
    return 0;
  if ( !qword_140C1BA10 )
    return 0;
  if ( !qword_140C1BAB8 )
    return 0;
  if ( !qword_140C1BA28 )
    return 0;
  CapabilityGroupSid = ::CapabilityGroupSid;
  if ( !::CapabilityGroupSid )
    return 0;
  if ( !qword_140C1BA18 )
    return 0;
  if ( !qword_140C1BA20 )
    return 0;
  RtlInitializeSid(qword_140D3CD90, (PSID_IDENTIFIER_AUTHORITY)&v98, 0);
  RtlInitializeSid((PSID)v100, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v59, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v57, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v51, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid((PSID)v46, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid((PSID)v45, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid(v13, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid(v14, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid(v87, (PSID_IDENTIFIER_AUTHORITY)&v98, 6u);
  RtlInitializeSid(v60, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v61, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v62, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v63, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v64, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v65, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(v41, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(v17, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  RtlInitializeSid(v18, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  memset(v19, 0, Size);
  RtlInitializeSid(v19, (PSID_IDENTIFIER_AUTHORITY)&v98, 6u);
  RtlInitializeSid(v88, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v89, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v90, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v91, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v92, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v93, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v94, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v95, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  v20 = v48;
  v21 = v46;
  v22 = v45;
  *(_DWORD *)(v100 + 8) = 1;
  *((_DWORD *)Sid + 2) = 2;
  *((_DWORD *)v59 + 2) = 3;
  *((_DWORD *)v58 + 2) = 4;
  *((_DWORD *)v57 + 2) = 6;
  *((_DWORD *)v56 + 2) = 10;
  *((_DWORD *)v55 + 2) = 18;
  *((_DWORD *)v54 + 2) = 11;
  *((_DWORD *)v53 + 2) = 12;
  *((_DWORD *)v52 + 2) = 7;
  *((_DWORD *)v51 + 2) = 19;
  *((_DWORD *)v50 + 2) = 20;
  *((_DWORD *)v49 + 2) = 17;
  v23 = IdentifierAuthority;
  v20[2] = 32;
  *(_DWORD *)(v21 + 8) = 32;
  *(_DWORD *)(v22 + 8) = 32;
  *(_DWORD *)(v23 + 8) = 32;
  v13[2] = 32;
  v14[2] = 32;
  v15[2] = 32;
  v16[2] = 32;
  v20[3] = 544;
  *(_DWORD *)(v21 + 12) = 545;
  v24 = CapabilityGroupSid;
  *(_DWORD *)(v22 + 12) = 546;
  *(_DWORD *)(v23 + 12) = 547;
  v25 = v60;
  v13[3] = 548;
  v14[3] = 549;
  v15[3] = 550;
  v16[3] = 551;
  v25[2] = 0;
  *((_DWORD *)v61 + 2) = 4096;
  *((_DWORD *)v62 + 2) = 0x2000;
  *((_DWORD *)v63 + 2) = 12288;
  *((_DWORD *)v64 + 2) = 0x4000;
  *((_DWORD *)v65 + 2) = 2;
  v41[2] = 3;
  v17[2] = 2;
  v17[3] = 1;
  v18[2] = 2;
  v18[3] = 2;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, v24, CapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v70, ::CapabilityGroupSid, qword_140C1BA70) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v71, ::CapabilityGroupSid, qword_140C1BA68) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v72, ::CapabilityGroupSid, qword_140C1BA60) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v73, ::CapabilityGroupSid, qword_140C1BA58) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v74, ::CapabilityGroupSid, qword_140C1BA50) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v75, ::CapabilityGroupSid, qword_140C1BA48) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v76, ::CapabilityGroupSid, qword_140C1BA40) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v77, ::CapabilityGroupSid, qword_140C1BA38) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v78, ::CapabilityGroupSid, qword_140C1BAB0) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v79, ::CapabilityGroupSid, qword_140C1BAA8) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v80, ::CapabilityGroupSid, qword_140C1BAA0) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v81, ::CapabilityGroupSid, qword_140C1BA98) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v82, ::CapabilityGroupSid, qword_140C1BA90) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v83, ::CapabilityGroupSid, qword_140C1BA88) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v84, ::CapabilityGroupSid, qword_140C1BA80) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v85, ::CapabilityGroupSid, qword_140C1BA78) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v86, ::CapabilityGroupSid, qword_140C1BAC0) < 0 )
    return 0;
  v26 = qword_140C1BA10;
  *((_DWORD *)qword_140C5AE60 + 2) = 84;
  *(_QWORD *)(qword_140C1B9C8 + 8) = 0LL;
  v27 = ProcessTrustLabelSid;
  *((_DWORD *)ProcessTrustLabelSid + 2) = 1024;
  v27[3] = 0x2000;
  v28 = qword_140C1B9F8;
  *(_DWORD *)(qword_140C1B9F8 + 8) = 1024;
  *(_DWORD *)(v28 + 12) = 4096;
  v29 = qword_140C1B9F0;
  *(_DWORD *)(qword_140C1B9F0 + 8) = 1024;
  *(_DWORD *)(v29 + 12) = 1024;
  v30 = qword_140C1B9E8;
  *(_DWORD *)(qword_140C1B9E8 + 8) = 512;
  *(_DWORD *)(v30 + 12) = 1536;
  v31 = qword_140C1B9E0;
  *(_DWORD *)(qword_140C1B9E0 + 8) = 512;
  *(_DWORD *)(v31 + 12) = 0x2000;
  v32 = qword_140C1B9D8;
  *(_DWORD *)(qword_140C1B9D8 + 8) = 512;
  *(_DWORD *)(v32 + 12) = 4096;
  v33 = qword_140C1B9D0;
  *(_DWORD *)(qword_140C1B9D0 + 8) = 512;
  *(_DWORD *)(v33 + 12) = 2048;
  v34 = (_DWORD *)qword_140C5AE58;
  *(_DWORD *)(qword_140C5AE58 + 8) = 80;
  v34[3] = 956008885;
  v34[4] = -876444647;
  v34[5] = 1831038044;
  v34[6] = 1853292631;
  v34[7] = -2023488832;
  RtlInitializeSid(v26, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  v35 = qword_140C1BAB8;
  v36 = ::CapabilityGroupSid;
  v26[2] = 32;
  v26[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&v66, v36, v35) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v67, ::CapabilityGroupSid, qword_140C1BA28) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v68, qword_140C1BA20, qword_140C1BA18) < 0 )
    return 0;
  sub_140B2114C();
  v98 = 3LL;
  stru_140D3CB28 = (LUID)2LL;
  stru_140D3CB50 = (LUID)3LL;
  v99 = 4LL;
  stru_140D3CA80 = (LUID)4LL;
  v100 = 5LL;
  stru_140D3CAF0 = (LUID)5LL;
  v46 = 6LL;
  qword_140D3CF18 = 6LL;
  v45 = 7LL;
  stru_140D3CA10 = (LUID)7LL;
  IdentifierAuthority = 8LL;
  stru_140D3CA98 = (LUID)8LL;
  v43 = 9LL;
  qword_140D3CAC0 = 9LL;
  v42 = 10LL;
  PrivilegeValue = (LUID)10LL;
  v48 = (PSID)15;
  stru_140D3CCF0 = (LUID)15LL;
  v49 = (PSID)14;
  stru_140D3CA68 = (LUID)14LL;
  v50 = (PSID)11;
  stru_140D3CB00 = (LUID)11LL;
  v51 = (PSID)12;
  stru_140D3CB60 = (LUID)12LL;
  v52 = (PSID)13;
  stru_140D3CA90 = (LUID)13LL;
  v53 = (PSID)16;
  stru_140D3CB68 = (LUID)16LL;
  v54 = (PSID)17;
  stru_140D3CA58 = (LUID)17LL;
  v55 = (PSID)18;
  stru_140D3CA70 = (LUID)18LL;
  v56 = (PSID)19;
  stru_140D3CAB8 = (LUID)19LL;
  v57 = (PSID)20;
  stru_140D3CA18 = (LUID)20LL;
  v58 = (PSID)21;
  v59 = (PSID)22;
  Sid = (PSID)23;
  qword_140D3CBC0 = 21LL;
  stru_140D3CA50 = (LUID)22LL;
  qword_140D3CCE0 = 23LL;
  qword_140D3CDA8 = 24LL;
  qword_140D3CE68 = 25LL;
  qword_140D3CF20 = 26LL;
  qword_140D3CCD8 = 27LL;
  qword_140D3D078 = (__int64)qword_140D3CAF8;
  qword_140D3D080 = (__int64)qword_140C5AFA8;
  qword_140D3D088 = (__int64)qword_140C5AFB8;
  qword_140D3D090 = (__int64)qword_140C5AE50;
  qword_140D3D098 = (__int64)qword_140C5AE88;
  qword_140D3D1C0 = (__int64)Buf1;
  qword_140D3D0A0 = (__int64)qword_140D3CD90;
  qword_140D3D0A8 = qword_140D3CCA8;
  qword_140D3D0B0 = qword_140C5AE68;
  qword_140D3D0B8 = qword_140C5AE70;
  qword_140D3D0C0 = qword_140C5AFC8;
  qword_140D3D0C8 = (__int64)Group;
  qword_140D3D110 = qword_140D3CC00;
  qword_140D3D118 = (__int64)qword_140D3CAA8;
  qword_140D3D120 = (__int64)qword_140D3CA60;
  qword_140D3D140 = (__int64)qword_140D3CAE0;
  qword_140D3D148 = (__int64)qword_140D3CB20;
  qword_140D3D190 = (__int64)qword_140D3CBA8;
  qword_140D3D0D0 = (__int64)SidToCheck;
  qword_140D3D0D8 = (__int64)qword_140D3CB58;
  qword_140D3D0E0 = qword_140D3CBF8;
  qword_140D3D0E8 = qword_140D3CC30;
  qword_140D3D0F0 = (__int64)qword_140D3CC28;
  qword_140D3D0F8 = (__int64)qword_140D3CC20;
  qword_140D3D100 = (__int64)qword_140D3CC18;
  qword_140D3D108 = (__int64)qword_140D3CC10;
  qword_140D3D198 = qword_140C1B9C0;
  qword_140D3D1A0 = (__int64)::Sid;
  qword_140D3CCD0 = 28LL;
  qword_140D3CDA0 = 29LL;
  stru_140D3CC58 = (LUID)30LL;
  qword_140D3CCC8 = 31LL;
  qword_140D3CAA0 = 32LL;
  qword_140D3CD88 = 33LL;
  stru_140D3CCE8 = (LUID)34LL;
  qword_140D3CE70 = 35LL;
  qword_140D3CDB0 = 36LL;
  qword_140D3D1A8 = (__int64)qword_140C1B9B8;
  qword_140D3D1B0 = (__int64)qword_140C1B9B0;
  qword_140D3D1B8 = qword_140C1B9A8;
  qword_140D3D1C8 = (__int64)qword_140C5AFB0;
  qword_140D3D1D0 = (__int64)qword_140C5AE60;
  qword_140D3D1D8 = (__int64)ProcessTrustLabelSid;
  qword_140D3D1E0 = qword_140C5AE58;
  qword_140D3CFC0 = 2LL;
  qword_140D3CFC8 = 3LL;
  qword_140D3CFD0 = 4LL;
  qword_140D3CFD8 = 5LL;
  qword_140D3CFE0 = 6LL;
  qword_140D3CFE8 = 7LL;
  qword_140D3CFF0 = 8LL;
  qword_140D3CFF8 = 9LL;
  qword_140D3D000 = 10LL;
  qword_140D3D008 = 15LL;
  qword_140D3D010 = 14LL;
  qword_140D3D018 = 11LL;
  qword_140D3D020 = 12LL;
  qword_140D3D028 = 13LL;
  qword_140D3D030 = 16LL;
  qword_140D3D038 = 17LL;
  qword_140D3D040 = 18LL;
  qword_140D3D048 = 19LL;
  qword_140D3D050 = 20LL;
  qword_140D3D058 = 21LL;
  qword_140D3D060 = 22LL;
  qword_140D3D1E8 = 36LL;
  qword_140D3D158 = 29LL;
  qword_140D3D180 = 34LL;
  v37 = 5LL;
  qword_140D3D188 = 35LL;
  v38 = (char *)&unk_140C25358;
  qword_140D3D068 = 23LL;
  qword_140D3D070 = 24LL;
  qword_140D3D128 = 25LL;
  qword_140D3D130 = 26LL;
  qword_140D3D138 = 27LL;
  qword_140D3D150 = 28LL;
  qword_140D3D160 = 30LL;
  qword_140D3D168 = 31LL;
  qword_140D3D170 = 32LL;
  qword_140D3D178 = 33LL;
  SeExports = (PSE_EXPORTS)&qword_140D3CFC0;
  do
  {
    v38[8] = 0;
    *(_QWORD *)v38 = 0LL;
    *((_QWORD *)v38 - 3) = 0LL;
    v38 += 40;
    --v37;
  }
  while ( v37 );
  qword_140C25410 = 0LL;
  qword_140C25408 = 0LL;
  return (int)sub_140848B8C() >= 0;
}
