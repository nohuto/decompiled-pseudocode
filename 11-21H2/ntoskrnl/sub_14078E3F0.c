/*
 * XREFs of sub_14078E3F0 @ 0x14078E3F0
 * Callers:
 *     sub_1406623D0 @ 0x1406623D0 (sub_1406623D0.c)
 *     SeFilterToken @ 0x140831700 (SeFilterToken.c)
 * Callees:
 *     sub_140204B30 @ 0x140204B30 (sub_140204B30.c)
 *     sub_140258DE8 @ 0x140258DE8 (sub_140258DE8.c)
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlSidHashInitialize @ 0x1402E1660 (RtlSidHashInitialize.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F5174 @ 0x1405F5174 (sub_1405F5174.c)
 *     sub_14066A17C @ 0x14066A17C (sub_14066A17C.c)
 *     RtlCopySidAndAttributesArray @ 0x14066A420 (RtlCopySidAndAttributesArray.c)
 *     sub_14067231C @ 0x14067231C (sub_14067231C.c)
 *     sub_140672524 @ 0x140672524 (sub_140672524.c)
 *     sub_140695E18 @ 0x140695E18 (sub_140695E18.c)
 *     sub_1406A26A8 @ 0x1406A26A8 (sub_1406A26A8.c)
 *     sub_1406A28A8 @ 0x1406A28A8 (sub_1406A28A8.c)
 *     sub_1406E5F34 @ 0x1406E5F34 (sub_1406E5F34.c)
 *     sub_1407259B0 @ 0x1407259B0 (sub_1407259B0.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_14078EC8C @ 0x14078EC8C (sub_14078EC8C.c)
 *     sub_14078ECD8 @ 0x14078ECD8 (sub_14078ECD8.c)
 *     sub_140799BB0 @ 0x140799BB0 (sub_140799BB0.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409C6578 @ 0x1409C6578 (sub_1409C6578.c)
 *     sub_1409CCCB0 @ 0x1409CCCB0 (sub_1409CCCB0.c)
 *     sub_1409CD320 @ 0x1409CD320 (sub_1409CD320.c)
 *     sub_1409CEB64 @ 0x1409CEB64 (sub_1409CEB64.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14078E3F0(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        unsigned int a8,
        _QWORD *a9,
        int a10,
        _QWORD *a11)
{
  PVOID *v13; // r14
  unsigned int v14; // esi
  _QWORD *v15; // rbx
  __int64 Pool2; // rax
  PVOID *v17; // rsi
  struct _ERESOURCE *v18; // r15
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // eax
  int v22; // r8d
  ULONG v23; // r13d
  signed int v24; // ebx
  int v25; // eax
  _QWORD *v26; // rbx
  _QWORD *v27; // rdx
  PVOID v28; // r15
  struct _KTHREAD *CurrentThread; // rax
  char *v30; // rbx
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  _DWORD *v33; // r14
  unsigned int v34; // eax
  int v35; // esi
  _DWORD *v36; // rcx
  _SID_AND_ATTRIBUTES *v37; // r14
  int v38; // eax
  unsigned int v39; // eax
  _SID_AND_ATTRIBUTES **v40; // r13
  unsigned int v41; // r12d
  _SID_AND_ATTRIBUTES *v42; // r12
  ULONG v43; // r8d
  NTSTATUS v44; // eax
  __int64 v45; // r8
  unsigned int v46; // r13d
  _SID_AND_ATTRIBUTES *v47; // r14
  char **v48; // rbx
  unsigned int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rdx
  size_t v52; // r14
  char *v53; // r12
  char v54; // al
  _DWORD *v55; // rcx
  PSID_AND_ATTRIBUTES *v56; // r13
  unsigned int v57; // r14d
  __int64 v58; // r9
  unsigned __int8 *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  struct _ERESOURCE *v64; // rcx
  char *v65; // rbx
  PVOID v66; // rcx
  int v68; // eax
  PVOID *v69; // rcx
  bool v70; // zf
  ULONG v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  void *v74; // rbx
  struct _KTHREAD *v75; // rax
  PERESOURCE *PrimaryToken; // rbx
  int v77; // edx
  PSID SidArea; // [rsp+28h] [rbp-E0h]
  __int64 v79; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  ULONG SidAreaSize[2]; // [rsp+68h] [rbp-A0h] BYREF
  PSID RemainingSidArea; // [rsp+70h] [rbp-98h] BYREF
  __int64 v83; // [rsp+78h] [rbp-90h]
  PSID_AND_ATTRIBUTES *v84; // [rsp+80h] [rbp-88h]
  _DWORD *v85; // [rsp+88h] [rbp-80h]
  _QWORD *v86; // [rsp+90h] [rbp-78h]
  _QWORD *v87; // [rsp+98h] [rbp-70h]
  _QWORD *v88; // [rsp+A0h] [rbp-68h]
  _QWORD *v89; // [rsp+A8h] [rbp-60h]
  PSID_AND_ATTRIBUTES *v90; // [rsp+B0h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v91; // [rsp+B8h] [rbp-50h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+C0h] [rbp-48h]
  ULONG *v93; // [rsp+C8h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-38h] BYREF
  int v95; // [rsp+F0h] [rbp-18h]
  int v96; // [rsp+F4h] [rbp-14h]
  __int64 v97; // [rsp+F8h] [rbp-10h]
  __int64 v98; // [rsp+100h] [rbp-8h]
  int v99; // [rsp+108h] [rbp+0h]
  int v100; // [rsp+10Ch] [rbp+4h]
  __int128 v101; // [rsp+110h] [rbp+8h]
  struct _SECURITY_SUBJECT_CONTEXT v102; // [rsp+120h] [rbp+18h] BYREF

  Object = 0LL;
  v96 = 0;
  v100 = 0;
  LOBYTE(SidAreaSize[0]) = *((_BYTE *)KeGetCurrentThread() + 562);
  v13 = 0LL;
  LOWORD(v79) = 0;
  LODWORD(v83) = a3 & 8;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  memset(&v102, 0, sizeof(v102));
  if ( (a3 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
    return 3221225485LL;
  v14 = 0;
  if ( a8 )
  {
    v15 = a9;
    while ( !(unsigned __int8)sub_14078ECD8(*v15) && !(unsigned __int8)sub_14078EC8C(*v15) )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= a8 )
        goto LABEL_7;
    }
    return 3221225485LL;
  }
LABEL_7:
  Pool2 = ExAllocatePool2(256LL, 48LL, 1950442835LL);
  v17 = (PVOID *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = 0;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
  *(_DWORD *)(Pool2 + 24) = 0;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    v13 = (PVOID *)ExAllocatePool2(256LL, 288LL, 1950442835LL);
    if ( !v13 )
    {
      v69 = v17;
      goto LABEL_77;
    }
  }
  v18 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1817470291LL);
  if ( !v18 )
  {
    ExFreePoolWithTag(v17, 0);
    if ( !HIDWORD(NlsMbOemCodePageTag) )
      return 3221225626LL;
    v69 = v13;
LABEL_77:
    ExFreePoolWithTag(v69, 0);
    return 3221225626LL;
  }
  v19 = *(_DWORD *)(a1 + 132);
  v20 = v19 + a10;
  if ( v19 + a10 < v19 )
  {
    v24 = -1073741675;
LABEL_80:
    ExFreePoolWithTag(v18, 0);
    ExFreePoolWithTag(v17, 0);
    v70 = HIDWORD(NlsMbOemCodePageTag) == 0;
    goto LABEL_81;
  }
  v21 = v20 + 4;
  v22 = -1;
  v23 = -1;
  if ( v20 + 4 >= v20 )
    v23 = v20 + 4;
  v24 = v21 < v20 ? 0xC0000095 : 0;
  SidAreaSize[1] = v23;
  if ( v21 < v20 )
    goto LABEL_80;
  if ( v23 < 0xFFFFFB70 )
    v22 = v23 + 1168;
  v24 = v23 >= 0xFFFFFB70 ? 0xC0000095 : 0;
  if ( v23 + 1168 < 0x490 )
    goto LABEL_80;
  v25 = *(_DWORD *)(a1 + 136);
  v97 = 0LL;
  v99 = 0;
  v98 = 0LL;
  v95 = 48;
  v101 = 0LL;
  v24 = sub_14072B3B0(a2, SeTokenObjectType, 0, a2, (__int64)SidArea, v22, v25, v22, &Object, 0LL);
  if ( v24 >= 0 )
  {
    v26 = Object;
    *((_QWORD *)Object + 6) = v18;
    ExInitializeResourceLite(v18);
    v27 = Object;
    v26[7] = _InterlockedIncrement64(&qword_140C0DA70);
    v28 = Object;
    v27[2] = _InterlockedIncrement64(&qword_140C0DA70);
    *((_BYTE *)v28 + 204) = 0;
    *((_QWORD *)v28 + 3) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)v28 = *(_OWORD *)a1;
    *((_DWORD *)v28 + 35) = 0;
    *((_DWORD *)v28 + 32) = 0;
    *((_DWORD *)v28 + 33) = v23;
    *((_QWORD *)v28 + 4) = *(_QWORD *)(a1 + 16);
    *((_DWORD *)v28 + 48) = *(_DWORD *)(a1 + 192);
    *((_DWORD *)v28 + 49) = *(_DWORD *)(a1 + 196);
    *((_QWORD *)v28 + 5) = *(_QWORD *)(a1 + 40);
    *((_QWORD *)v28 + 28) = *(_QWORD *)(a1 + 224);
    *((_QWORD *)v28 + 140) = 0LL;
    *((_QWORD *)v28 + 141) = 0LL;
    *((_QWORD *)v28 + 137) = 0LL;
    *((_QWORD *)v28 + 143) = v13;
    *((_DWORD *)v28 + 30) = 0;
    *((_QWORD *)v28 + 145) = 0LL;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      v71 = RtlWalkFrameChain(v13 + 5, 0x1Eu, 0);
      if ( KeGetCurrentIrql() < 2u )
        RtlWalkFrameChain((PVOID *)(*((_QWORD *)v28 + 143) + 40LL + 8LL * v71), 30 - v71, 1u);
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v30 = (char *)Object;
    v31 = Object;
    *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
    v31[36] = *(_DWORD *)(a1 + 144);
    sub_140672524((__int64)v31, *(unsigned int *)(a1 + 120), 0LL, 0LL, 0LL);
    v33 = v30 + 200;
    *((_DWORD *)v28 + 30) = *(_DWORD *)(a1 + 120);
    v34 = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
    v85 = v30 + 200;
    *((_DWORD *)v30 + 50) = v34;
    if ( (v34 & 0x400000) != 0 )
    {
      _InterlockedIncrement(&dword_140D3CAD0);
      v30 = (char *)Object;
    }
    *(_OWORD *)(v30 + 88) = *(_OWORD *)(a1 + 88);
    *((_QWORD *)v30 + 13) = *(_QWORD *)(a1 + 104);
    *((_DWORD *)v30 + 28) = *(_DWORD *)(a1 + 112);
    *((_WORD *)v30 + 58) = *(_WORD *)(a1 + 116);
    v30[118] = *(_BYTE *)(a1 + 118);
    *((_DWORD *)v30 + 52) = *(_DWORD *)(a1 + 208);
    *((_DWORD *)v30 + 53) = *(_DWORD *)(a1 + 212);
    *((_OWORD *)v30 + 4) = *(_OWORD *)(a1 + 64);
    *((_QWORD *)v30 + 10) = *(_QWORD *)(a1 + 80);
    *((_QWORD *)v30 + 97) = v17;
    if ( v30[118] == 2 )
    {
      LOBYTE(v32) = 1;
      sub_1409C6578(v30 + 88, v32);
    }
    *((_QWORD *)v30 + 135) = 0LL;
    v87 = v30 + 1080;
    *((_QWORD *)v30 + 136) = 0LL;
    v88 = v30 + 1088;
    *((_QWORD *)v30 + 144) = 0LL;
    v89 = v30 + 1152;
    *((_QWORD *)v30 + 99) = 0LL;
    v91 = (PSID_AND_ATTRIBUTES *)(v30 + 792);
    *((_QWORD *)v30 + 98) = 0LL;
    v93 = (ULONG *)(v30 + 800);
    *((_DWORD *)v30 + 200) = 0;
    SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v30 + 808);
    memset(v30 + 808, 0, 0x110uLL);
    *((_QWORD *)v30 + 22) = 0LL;
    *((_QWORD *)v30 + 138) = 0LL;
    *((_QWORD *)v30 + 139) = 0LL;
    *((_QWORD *)v30 + 142) = 0LL;
    v86 = v30 + 176;
    v35 = sub_140258DE8((__int64)v30, a1);
    if ( v35 < 0 )
      goto LABEL_86;
    sub_14067231C(a1, 0);
    *((_QWORD *)v30 + 142) = *(_QWORD *)(a1 + 1136);
    v36 = *(_DWORD **)(a1 + 776);
    if ( *v36 )
    {
      v35 = sub_140204B30((__int64)v36, *((_QWORD **)v30 + 97), 0);
      if ( v35 < 0 )
        goto LABEL_86;
    }
    if ( *(_QWORD *)(a1 + 1096) )
    {
      v35 = sub_1409CEB64(a1, v30);
      if ( v35 < 0 )
        goto LABEL_86;
    }
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      **((_QWORD **)v28 + 143) = *((_QWORD *)KeGetCurrentThread() + 153);
      *(_QWORD *)(*((_QWORD *)v28 + 143) + 8LL) = *((_QWORD *)KeGetCurrentThread() + 154);
      *(_DWORD *)(*((_QWORD *)v28 + 143) + 32LL) = 15;
      *(_DWORD *)(*((_QWORD *)v28 + 143) + 280LL) = 0;
      *(_DWORD *)(*((_QWORD *)v28 + 143) + 284LL) = 0;
      v72 = *((_QWORD *)v28 + 143);
      v30 = (char *)Object;
      v73 = *((_QWORD *)KeGetCurrentThread() + 23);
      *(_QWORD *)(v72 + 16) = *(_QWORD *)(v73 + 1448);
      *(_DWORD *)(v72 + 24) = *(_DWORD *)(v73 + 1456);
      *(_WORD *)(v72 + 28) = *(_WORD *)(v73 + 1460);
      *(_BYTE *)(v72 + 30) = *(_BYTE *)(v73 + 1462);
      sub_1409CD320(v30);
    }
    if ( (a3 & 2) != 0 )
    {
      v74 = (void *)sub_140347920(*((_QWORD *)KeGetCurrentThread() + 23), 0x746C6644u);
      if ( (int)sub_1405F5174(v74, &v79) >= 0 && (_BYTE)v79 )
        *v33 |= 0x40u;
      ObfDereferenceObject(v74);
      v30 = (char *)Object;
    }
    v37 = (_SID_AND_ATTRIBUTES *)(v30 + 1168);
    v38 = ((_BYTE)v30 - 112) & 7;
    if ( (((_BYTE)v30 - 112) & 7) != 0 )
    {
      v37 = (_SID_AND_ATTRIBUTES *)((char *)v37 + (unsigned int)(8 - v38));
      SidAreaSize[1] = v23 - (8 - v38);
    }
    v39 = *(_DWORD *)(a1 + 128);
    v40 = (_SID_AND_ATTRIBUTES **)(v30 + 152);
    v41 = a8;
    v90 = (PSID_AND_ATTRIBUTES *)(v30 + 152);
    if ( v39 > a8 )
      v41 = v39;
    v42 = &v37[*(_DWORD *)(a1 + 124) + v41];
    *v40 = v37;
    RemainingSidArea = v42;
    if ( byte_140C5AEB0 )
    {
      v35 = sub_1409CCCB0(a1, v30);
      if ( v35 < 0 )
      {
        *v40 = 0LL;
        goto LABEL_86;
      }
    }
    else
    {
      v43 = SidAreaSize[1];
      *((_DWORD *)v30 + 31) = *(_DWORD *)(a1 + 124);
      v44 = RtlCopySidAndAttributesArray(
              *(_DWORD *)(a1 + 124),
              *(PSID_AND_ATTRIBUTES *)(a1 + 152),
              v43,
              v37,
              v42,
              &RemainingSidArea,
              &SidAreaSize[1]);
      v42 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
      v35 = v44;
    }
    v46 = 0;
    v47 = (_SID_AND_ATTRIBUTES *)((char *)v37 + (unsigned int)(16 * *(_DWORD *)(a1 + 124)));
    v84 = (PSID_AND_ATTRIBUTES *)(v30 + 160);
    *((_QWORD *)v30 + 20) = v47;
    if ( a8 )
    {
      v48 = (char **)a9;
      do
      {
        v49 = *(_DWORD *)(a1 + 128);
        if ( !v49 || sub_1406A28A8(*(unsigned __int8 ***)(a1 + 160), v49, v45, *v48) )
        {
          v35 = RtlCopySidAndAttributesArray(
                  1u,
                  (PSID_AND_ATTRIBUTES)&a9[2 * v46],
                  SidAreaSize[1],
                  v47,
                  v42,
                  &RemainingSidArea,
                  &SidAreaSize[1]);
          v42 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
          ++v47;
          (*v84)[(*((_DWORD *)v28 + 32))++].Attributes = 7;
        }
        ++v46;
        v48 += 2;
      }
      while ( v46 < a8 );
      v30 = (char *)Object;
    }
    v50 = *(_QWORD *)(a1 + 184);
    v51 = 4 * (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
    if ( v50 )
      v51 = *(unsigned __int16 *)(v50 + 2) + (unsigned int)v51;
    v52 = (unsigned int)v51;
    v53 = (char *)ExAllocatePool2(256LL, v51, 1683252563LL);
    *v86 = v53;
    if ( !v53 )
    {
      v35 = -1073741670;
      goto LABEL_86;
    }
    if ( *(_DWORD *)(a1 + 128) && !*((_DWORD *)v28 + 32) )
    {
      v35 = -1073741811;
      goto LABEL_86;
    }
    v54 = 0;
    v55 = v85;
    v56 = v84;
    if ( *((_DWORD *)v28 + 32) )
    {
      *v85 |= 0x810u;
      v54 = 1;
    }
    else
    {
      *v84 = 0LL;
    }
    if ( (_DWORD)v83 )
    {
      *v55 |= 0x18u;
    }
    else if ( !v54 )
    {
      goto LABEL_51;
    }
    sub_1406E5F34(a1);
LABEL_51:
    memmove(v53, *(const void **)(a1 + 176), v52);
    if ( *(_QWORD *)(a1 + 184) )
      *((_QWORD *)v30 + 23) = &v53[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
    else
      *((_QWORD *)v30 + 23) = 0LL;
    v57 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
    v58 = *(unsigned int *)(a1 + 800);
    if ( (_DWORD)v58 )
      v35 = sub_140799BB0(v30, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v58);
    if ( v35 >= 0 )
    {
      v59 = *(unsigned __int8 **)(a1 + 784);
      if ( !v59 || (v68 = sub_14066A17C((__int64)v30, v59), v68 >= 0) )
      {
        v60 = *(_QWORD *)(a1 + 1080);
        if ( v60 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v60 + 24)) <= 1 )
            __fastfail(0xEu);
          v30 = (char *)Object;
          *v87 = *(_QWORD *)(a1 + 1080);
        }
        v61 = *(_QWORD *)(a1 + 1088);
        if ( v61 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v61 + 24)) <= 1 )
            __fastfail(0xEu);
          v30 = (char *)Object;
          *v88 = *(_QWORD *)(a1 + 1088);
        }
        v62 = *(_QWORD *)(a1 + 1152);
        if ( v62 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v62 + 24)) <= 1 )
            __fastfail(0xEu);
          v30 = (char *)Object;
          *v89 = *(_QWORD *)(a1 + 1152);
        }
        v63 = sub_1407259B0((__int64)v30, *(unsigned __int8 **)(a1 + 1104));
        v64 = *(struct _ERESOURCE **)(a1 + 48);
        v35 = v63;
        if ( v63 >= 0 )
        {
          ExReleaseResourceLite(v64);
          sub_1402F9540((__int64)KeGetCurrentThread());
          v65 = (char *)Object;
          v66 = Object;
          *((_QWORD *)Object + 21) = &v53[v57];
          sub_1406A26A8((__int64)v66, a3, a4, a5, a6, a7);
          RtlSidHashInitialize(*v90, *((_DWORD *)v65 + 31), (PSID_AND_ATTRIBUTES_HASH)(v65 + 232));
          RtlSidHashInitialize(*v56, *((_DWORD *)v28 + 32), (PSID_AND_ATTRIBUTES_HASH)(v65 + 504));
          SeCaptureSubjectContext(&SubjectContext);
          v102.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v102) )
          {
            v75 = KeGetCurrentThread();
            --*((_WORD *)v75 + 242);
            PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            v35 = sub_140695E18(Object, PrimaryToken, (_BYTE *)&v79 + 1);
            ExReleaseResourceLite(PrimaryToken[6]);
            sub_1402F9540((__int64)KeGetCurrentThread());
            if ( v35 < 0 || !BYTE1(v79) )
            {
              ObfDereferenceObject(Object);
              SeReleaseSubjectContext(&SubjectContext);
              return (unsigned int)v35;
            }
            v65 = (char *)Object;
          }
          SeReleaseSubjectContext(&SubjectContext);
          if ( *v91 )
            RtlSidHashInitialize(*v91, *v93, SidAttrHash);
          if ( HIDWORD(NlsMbOemCodePageTag) && dword_140D04938 == 15 )
          {
            if ( *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL) == qword_140D04928 )
            {
              *(_DWORD *)(*((_QWORD *)v28 + 143) + 280LL) = _InterlockedIncrement(&dword_140D04930);
              v77 = *(_DWORD *)(*((_QWORD *)v28 + 143) + 280LL);
              if ( v77 >= dword_140D04934 )
              {
                DbgPrint("\nToken number 0x%x = 0x%p\n", v77, Object);
                __debugbreak();
              }
            }
            v65 = (char *)Object;
          }
          *a11 = v65;
          return (unsigned int)v35;
        }
LABEL_87:
        ExReleaseResourceLite(v64);
        sub_1402F9540((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return (unsigned int)v35;
      }
      v35 = v68;
    }
LABEL_86:
    v64 = *(struct _ERESOURCE **)(a1 + 48);
    goto LABEL_87;
  }
  ExFreePoolWithTag(v18, 0);
  ExFreePoolWithTag(v17, 0);
  v70 = HIDWORD(NlsMbOemCodePageTag) == 0;
LABEL_81:
  if ( !v70 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v24;
}
