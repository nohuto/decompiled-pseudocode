/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x14068FC80
 * Callers:
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCat @ 0x140208C9C (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x140208E68 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     CmpValidateComponents @ 0x14068FC38 (CmpValidateComponents.c)
 *     CmpGetComponentNameAtIndex @ 0x140690A1C (CmpGetComponentNameAtIndex.c)
 *     CmpCompareUnicodeString @ 0x140690A4C (CmpCompareUnicodeString.c)
 *     CmpComputeComponentHashes @ 0x140690B10 (CmpComputeComponentHashes.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406D0FB0 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpFindNameInListWithStatus @ 0x1406D2824 (CmpFindNameInListWithStatus.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3F5C (CmpIsKeyStackDeleted.c)
 *     CmpUnlockKcbStack @ 0x1406D5418 (CmpUnlockKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1406D56E8 (CmpLockKcbStackShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406D5850 (CmpGetKcbAtLayerHeight.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7C1C (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D9378 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpGetValueData @ 0x1406DC8D0 (CmpGetValueData.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E034C (HvpGetCellContextReinitialize.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FBF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmEqualTrans @ 0x1407696D0 (CmEqualTrans.c)
 *     CmpUnlockHashEntryByKcb @ 0x14076ACC0 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076B020 (CmpDereferenceKeyControlBlock.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     CmpConstructAndCacheName @ 0x1407E1FC0 (CmpConstructAndCacheName.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     CmpAttachToRegistryProcess @ 0x140AF6250 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140AF6530 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF65A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpGetSymbolicLinkTarget(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9,
        __int64 *a10)
{
  unsigned int v10; // r12d
  unsigned int v11; // esi
  ULONG_PTR v12; // r15
  __int64 v13; // r9
  __int16 *v14; // rdi
  __int64 v15; // rax
  char v16; // cl
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  char v19; // al
  signed __int64 v20; // rcx
  __int16 v21; // bx
  __int64 v22; // r12
  __int64 v23; // rcx
  unsigned int v24; // r14d
  unsigned int v25; // edi
  unsigned int v26; // ecx
  unsigned __int16 *v27; // rax
  wchar_t *v28; // r12
  int NameInListWithStatus; // ebx
  __int16 v30; // r9
  unsigned __int16 v31; // r8
  unsigned __int64 v32; // rcx
  __int16 v33; // r8
  unsigned __int64 v34; // r9
  unsigned __int16 v35; // ax
  char *v36; // rdx
  unsigned __int64 v37; // rcx
  signed __int64 v38; // r10
  unsigned __int64 v39; // r9
  unsigned int v40; // r15d
  unsigned __int16 *v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // r10
  unsigned __int16 v45; // ax
  _WORD *v46; // rcx
  unsigned __int64 v47; // r8
  __int16 v48; // r9
  unsigned __int64 v49; // rdx
  char *v50; // r11
  UNICODE_STRING *v51; // rbx
  void *v52; // rcx
  ULONG_PTR v53; // rdi
  ULONG_PTR *v54; // rax
  __int16 v55; // di
  unsigned int v56; // esi
  __int64 KcbAtLayerHeight; // rax
  __int16 v58; // r10
  __int64 v59; // rbx
  __int64 v60; // r8
  __int16 v61; // ax
  ULONG_PTR *v62; // rsi
  ULONG_PTR v63; // rcx
  int v64; // eax
  ULONG_PTR v65; // rcx
  __int64 v66; // rax
  bool v67; // zf
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned int v70; // r14d
  __int64 v71; // rdx
  unsigned int v72; // ebx
  __int64 v73; // r15
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v75; // edx
  wchar_t *Buffer; // rdi
  ULONG_PTR v77; // rsi
  __int64 v78; // r8
  __int64 v79; // r9
  wchar_t *v80; // r15
  unsigned __int16 Length; // di
  UNICODE_STRING v82; // xmm6
  __int16 v83; // r8
  wchar_t *v84; // rax
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 v86; // cx
  __int16 v87; // bx
  int v88; // ebx
  ULONG_PTR v89; // rcx
  int v90; // ebx
  __int64 v91; // rcx
  ULONG_PTR v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rsi
  const UNICODE_STRING *v96; // rax
  UNICODE_STRING *v97; // rbx
  void *v98; // rcx
  _SLIST_ENTRY *v99; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *L; // rcx
  char v103; // [rsp+40h] [rbp-C0h]
  _WORD v104[7]; // [rsp+41h] [rbp-BFh] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v107; // [rsp+70h] [rbp-90h]
  __int16 v108; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v109; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v110; // [rsp+7Ch] [rbp-84h]
  __int64 v111; // [rsp+80h] [rbp-80h] BYREF
  __int64 v112; // [rsp+88h] [rbp-78h] BYREF
  __int64 v113; // [rsp+90h] [rbp-70h]
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp-68h]
  __int16 v115; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v117; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v118; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING v119; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v120; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING SourceString; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v122; // [rsp+E8h] [rbp-18h]
  __int128 v123; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v124; // [rsp+100h] [rbp+0h]
  ULONG_PTR *v125; // [rsp+108h] [rbp+8h]
  __int64 *v126; // [rsp+110h] [rbp+10h]
  __int64 v127; // [rsp+118h] [rbp+18h]
  __int128 v128; // [rsp+120h] [rbp+20h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+130h] [rbp+30h]
  PSLIST_ENTRY v130[22]; // [rsp+140h] [rbp+40h] BYREF

  v127 = a7;
  v124 = a8;
  v125 = a9;
  v10 = a4;
  v11 = a3;
  v120 = a2;
  v113 = a1;
  v126 = a10;
  v107 = a4;
  v115 = a3;
  DestinationString = 0LL;
  v111 = 0LL;
  SourceString = 0LL;
  v112 = 0LL;
  v117 = 0LL;
  v108 = 0;
  v123 = 0LL;
  v109 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v103 = 1;
  BugCheckParameter2[0] = 0LL;
  HIBYTE(v104[1]) = 0;
  v104[0] = 0;
  HvpGetCellContextReinitialize(&v111);
  v118 = 0LL;
  *(_DWORD *)((char *)&v104[3] + 1) = -1;
  v12 = 0LL;
  BugCheckParameter3 = 0LL;
  HvpGetCellContextReinitialize(&v112);
  P = 0LL;
  v110 = 0;
  HvpGetCellContextReinitialize(&v117);
  memset(v130, 0, 0xA8uLL);
  v13 = v113;
  v128 = 0LL;
  WORD1(v128) = -1;
  v14 = (__int16 *)(v113 + 2);
  *(_OWORD *)Privileges = 0LL;
  if ( a5 || *v14 )
  {
    v15 = *v14;
    v16 = 0;
    LOBYTE(v104[1]) = 0;
    if ( (int)v15 >= 2 )
    {
      _mm_lfence();
      LOBYTE(v104[1]) = 0;
      v17 = *(_QWORD *)(*(_QWORD *)(v113 + 24) + 8 * v15 - 16);
LABEL_69:
      if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
      {
        CmpAttachToRegistryProcess(a6 + 168);
        *(_DWORD *)(a6 + 160) |= 1u;
        v13 = v113;
      }
      v55 = *v14;
      v122 = 0LL;
      if ( v55 < 0 )
        goto LABEL_175;
      v56 = *(_DWORD *)((char *)&v104[3] + 1);
      while ( 1 )
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v13);
        v59 = KcbAtLayerHeight;
        if ( !v60
          && (*(_DWORD *)(KcbAtLayerHeight + 40) != -1
           || (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 4112LL) & 0x2000) == 0) )
        {
          v122 = KcbAtLayerHeight;
        }
        if ( *(_WORD *)(KcbAtLayerHeight + 66) && *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
          goto LABEL_175;
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) == -1 )
          goto LABEL_93;
        if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(KcbAtLayerHeight + 288), a5) )
          break;
        if ( *(_DWORD *)(v59 + 280) )
        {
          v62 = (ULONG_PTR *)(v59 + 32);
          NameInListWithStatus = CmpFindNameInListWithStatus(*(_QWORD *)(v59 + 32), 0LL, (__int64)&v104[3] + 1);
LABEL_90:
          if ( NameInListWithStatus >= 0 )
          {
            v12 = *v62;
            v56 = *(_DWORD *)((char *)&v104[3] + 1);
            BugCheckParameter3 = v12;
LABEL_97:
            if ( v56 != -1 )
            {
              v66 = (*(_BYTE *)(v12 + 140) & 1) != 0 ? HvpGetCellFlat(v12, v56) : HvpGetCellPaged(v12);
              v67 = (*(_BYTE *)(v66 + 16) & 2) == 0;
              v118 = v66;
              if ( v67 && *(_DWORD *)(v66 + 12) == 6 )
              {
                if ( !(unsigned __int8)CmpGetValueData(v12, (__int64)&P, (__int64)v104 + 1, (__int64)&v117) )
                {
                  NameInListWithStatus = -1073741670;
                  goto LABEL_176;
                }
                if ( v110 <= 0xFFFF && (v110 & 1) == 0 )
                {
                  v70 = v115;
                  v71 = (unsigned int)v115;
                  SourceString.Buffer = (wchar_t *)P;
                  SourceString.Length = v110;
                  SourceString.MaximumLength = v110;
                  v72 = (unsigned __int16)v110;
                  if ( v115 < v10 )
                  {
                    v73 = v120;
                    do
                    {
                      ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v73, v71, v68, v69);
                      v71 = (unsigned int)(v75 + 1);
                      v72 += *ComponentNameAtIndex + 2;
                    }
                    while ( (unsigned int)v71 < v10 );
                    v12 = BugCheckParameter3;
                  }
                  if ( v72 <= 0xFFFF )
                  {
                    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, v72, 909528387LL);
                    Buffer = DestinationString.Buffer;
                    if ( !DestinationString.Buffer )
                    {
                      NameInListWithStatus = -1073741670;
                      goto LABEL_179;
                    }
                    v77 = 0LL;
                    DestinationString.Length = 0;
                    DestinationString.MaximumLength = v72;
                    RtlUnicodeStringCopy(&DestinationString, &SourceString);
                    if ( HIBYTE(v104[0]) )
                    {
                      ExFreePoolWithTag(P, 0);
                    }
                    else if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
                    {
                      HvpReleaseCellFlat(v12, &v117);
                    }
                    else
                    {
                      HvpReleaseCellPaged(v12, &v117);
                    }
                    v67 = (*(_BYTE *)(v12 + 140) & 1) == 0;
                    P = 0LL;
                    if ( v67 )
                      HvpReleaseCellPaged(v12, &v112);
                    else
                      HvpReleaseCellFlat(v12, &v112);
                    v118 = 0LL;
                    CmpUnlockKcbStack(v113);
                    v80 = DestinationString.Buffer;
                    Length = DestinationString.Length;
                    v82 = DestinationString;
                    v103 = 0;
                    if ( !LOBYTE(v104[1]) )
                      goto LABEL_163;
                    v119 = DestinationString;
                    v83 = 0;
                    *((_QWORD *)&v123 + 1) = DestinationString.Buffer;
                    LOWORD(v123) = 0;
                    WORD1(v123) = DestinationString.MaximumLength;
                    if ( DestinationString.Length )
                    {
                      v84 = v119.Buffer;
                      MaximumLength = v119.MaximumLength;
                      v86 = v119.Length;
                      while ( *v84 == 92 )
                      {
                        ++v84;
                        v86 -= 2;
                        MaximumLength -= 2;
                        v119.Buffer = v84;
                        v83 += 2;
                        v119.Length = v86;
                        v119.MaximumLength = MaximumLength;
                        LOWORD(v123) = v83;
                        if ( !v86 )
                          goto LABEL_135;
                      }
                      if ( v86 )
                      {
                        while ( *v84 != 92 )
                        {
                          ++v84;
                          v86 -= 2;
                          MaximumLength -= 2;
                          v119.Buffer = v84;
                          v83 += 2;
                          v119.Length = v86;
                          v119.MaximumLength = MaximumLength;
                          LOWORD(v123) = v83;
                          if ( !v86 )
                            goto LABEL_135;
                        }
                        do
                        {
                          if ( *v84 != 92 )
                            break;
                          ++v84;
                          MaximumLength -= 2;
                          v86 -= 2;
                        }
                        while ( v86 );
                        v119.Buffer = v84;
                        v119.Length = v86;
                        v119.MaximumLength = MaximumLength;
                      }
LABEL_135:
                      v77 = 0LL;
                    }
                    if ( (unsigned int)CmpCompareUnicodeString(&v123, &CmRegistryRootName, 2LL)
                      || (int)CmpComputeComponentHashes(&v119, &v108, v130) < 0
                      || (v87 = v108, (int)CmpValidateComponents(v108, (__int64)v130) < 0)
                      || (int)CmpPerformCompleteKcbCacheLookup(
                                *((_QWORD *)CmpRegistryRootObject + 1),
                                0LL,
                                (__int64)BugCheckParameter2,
                                (__int64)v104,
                                (__int64)&v109) < 0 )
                    {
LABEL_163:
                      v77 = BugCheckParameter2[0];
LABEL_164:
                      BugCheckParameter2[0] = v77;
                    }
                    else
                    {
                      if ( v109 != v87 )
                      {
                        CmpDereferenceKeyControlBlock(BugCheckParameter2[0]);
                        goto LABEL_164;
                      }
                      v77 = BugCheckParameter2[0];
                      if ( (int)CmpStartKcbStackForTopLayerKcb(&v128, BugCheckParameter2[0]) >= 0 )
                      {
                        CmpLockKcbStackShared(&v128);
                        v88 = CmpConstructAndCacheName(v77, 0LL);
                        CmpUnlockKcbStack(&v128);
                        if ( v88 >= 0 )
                        {
                          if ( LOBYTE(v104[0]) )
                          {
                            CmpUnlockHashEntryByKcb(v77);
                            LOBYTE(v104[0]) = 0;
                          }
                          CmpLockKcbStackTopExclusiveRestShared(v113);
                          v103 = 1;
                          if ( !(unsigned __int8)CmpIsKeyStackDeleted(v113, 0LL) )
                          {
                            v89 = *(_QWORD *)(v17 + 32);
                            if ( (*(_BYTE *)(v89 + 140) & 1) != 0 )
                              HvpGetCellFlat(v89, *(unsigned int *)(v17 + 40));
                            else
                              HvpGetCellPaged(v89);
                            v90 = CmpFindNameInListWithStatus(*(_QWORD *)(v17 + 32), 0LL, (__int64)&v104[3] + 1);
                            v91 = *(_QWORD *)(v17 + 32);
                            if ( (*(_BYTE *)(v91 + 140) & 1) != 0 )
                              HvpReleaseCellFlat(v91, &v111);
                            else
                              HvpReleaseCellPaged(v91, &v111);
                            if ( v90 >= 0 )
                            {
                              v92 = *(_QWORD *)(v17 + 32);
                              BugCheckParameter3 = v92;
                              v93 = (*(_BYTE *)(v92 + 140) & 1) != 0
                                  ? HvpGetCellFlat(v92, *(unsigned int *)((char *)&v104[3] + 1))
                                  : HvpGetCellPaged(v92);
                              v67 = *(_DWORD *)(v93 + 12) == 6;
                              v118 = v93;
                              if ( v67 )
                              {
                                if ( (unsigned __int8)CmpGetValueData(
                                                        BugCheckParameter3,
                                                        (__int64)&P,
                                                        (__int64)v104 + 1,
                                                        (__int64)&v117) )
                                {
                                  if ( v110 <= 0xFFFF && (v110 & 1) == 0 )
                                  {
                                    SourceString.Length = v110;
                                    SourceString.MaximumLength = v110;
                                    SourceString.Buffer = (wchar_t *)P;
                                    if ( !(unsigned int)CmpCompareUnicodeString(&DestinationString, &SourceString, 0LL) )
                                    {
                                      CmpCleanUpKcbCachedSymlink(v17, v127);
                                      *(_QWORD *)(v17 + 104) = v77;
                                      CmpReferenceKeyControlBlockUnsafe(v77);
                                      v94 = v113;
                                      *(_WORD *)(v17 + 8) |= 8u;
                                      CmpUnlockKcbStack(v94);
                                      v103 = 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    if ( v70 < v10 )
                    {
                      v95 = v120;
                      while ( 1 )
                      {
                        v96 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v95, v70, v78, v79);
                        DestinationString.Length = Length + 2;
                        v80[(unsigned __int64)Length >> 1] = 92;
                        RtlUnicodeStringCat(&DestinationString, v96);
                        if ( ++v70 >= v10 )
                          break;
                        v80 = DestinationString.Buffer;
                        Length = DestinationString.Length;
                      }
                      v82 = DestinationString;
                      v77 = BugCheckParameter2[0];
                    }
                    v97 = (UNICODE_STRING *)v124;
                    v98 = *(void **)(v124 + 8);
                    if ( v98 )
                    {
                      ExFreePoolWithTag(v98, 0);
                      v97->Buffer = 0LL;
                    }
                    if ( LOBYTE(v104[0]) )
                      CmpUnlockHashEntryByKcb(v77);
                    BugCheckParameter2[0] = 0LL;
                    *v125 = v77;
                    *v97 = v82;
                    RtlInitUnicodeString(&DestinationString, 0LL);
                    NameInListWithStatus = 0;
                    *v126 = v122;
                    goto LABEL_176;
                  }
                }
              }
            }
LABEL_175:
            NameInListWithStatus = -1073741772;
LABEL_176:
            Buffer = DestinationString.Buffer;
            if ( DestinationString.Buffer )
              ExFreePoolWithTag(DestinationString.Buffer, 0);
            v12 = BugCheckParameter3;
LABEL_179:
            if ( P )
            {
              if ( HIBYTE(v104[0]) )
              {
                ExFreePoolWithTag(P, 0);
              }
              else if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
              {
                HvpReleaseCellFlat(v12, &v117);
              }
              else
              {
                HvpReleaseCellPaged(v12, &v117);
              }
            }
            if ( v118 )
            {
              if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v12, &v112);
              else
                HvpReleaseCellPaged(v12, &v112);
            }
            if ( Buffer )
              ExFreePoolWithTag(Buffer, 0);
            if ( v103 )
              CmpUnlockKcbStack(v113);
            goto LABEL_193;
          }
          if ( NameInListWithStatus != -1073741772 )
            goto LABEL_176;
          v56 = *(_DWORD *)((char *)&v104[3] + 1);
          v58 = -1;
          v13 = v113;
LABEL_93:
          v61 = v58;
          goto LABEL_94;
        }
        v13 = v113;
        v56 = -1;
        *(_DWORD *)((char *)&v104[3] + 1) = -1;
        v61 = -1;
LABEL_94:
        v55 += v61;
        if ( v55 < 0 )
          goto LABEL_97;
      }
      v63 = *(_QWORD *)(v59 + 32);
      v62 = (ULONG_PTR *)(v59 + 32);
      if ( (*(_BYTE *)(v63 + 140) & 1) != 0 )
        HvpGetCellFlat(v63, *(unsigned int *)(v59 + 40));
      else
        HvpGetCellPaged(v63);
      v64 = CmpFindNameInListWithStatus(*v62, 0LL, (__int64)&v104[3] + 1);
      v65 = *v62;
      NameInListWithStatus = v64;
      if ( (*(_BYTE *)(*v62 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v65, &v111);
      else
        HvpReleaseCellPaged(v65, &v111);
      goto LABEL_90;
    }
  }
  else
  {
    LOWORD(v15) = *v14;
    v16 = 1;
    LOBYTE(v104[1]) = 1;
  }
  _mm_lfence();
  v17 = *(_QWORD *)(v113 + 8LL * (__int16)v15 + 8);
  if ( !v16 || (*(_DWORD *)(v17 + 8) & 8) == 0 )
    goto LABEL_69;
  BugCheckParameter2[0] = *(_QWORD *)(v17 + 104);
  v18 = *(_QWORD *)(BugCheckParameter2[0] + 296);
  v19 = v18 & 1;
  if ( (v18 & 1) != 0 )
    v18 &= ~1uLL;
  if ( !v18 || v19 )
  {
    v12 = BugCheckParameter3;
    goto LABEL_69;
  }
  v20 = _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2[0]);
  if ( !v20 )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2[0], 0LL, 0LL);
  if ( v20 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  v21 = 0;
  if ( *v14 >= 0 )
  {
    v22 = v13;
    do
    {
      if ( v21 < 2 )
        v23 = *(_QWORD *)(v22 + 8LL * v21 + 8);
      else
        v23 = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL * v21 - 16);
      CmpUnlockKcb(v23);
      ++v21;
    }
    while ( v21 <= *v14 );
    LOWORD(v10) = v107;
  }
  v103 = 0;
  CmpLockKcbShared(BugCheckParameter2[0]);
  v24 = *(unsigned __int16 *)v18;
  v25 = v11;
  v26 = v11;
  for ( HIBYTE(v104[1]) = 1; v26 < (__int16)v10; ++v26 )
  {
    if ( v26 >= 8 )
      v27 = (unsigned __int16 *)(*(_QWORD *)(v120 + 160) + 16 * (v26 - 8 + 6LL));
    else
      v27 = (unsigned __int16 *)(v120 + 16 * (v26 + 2LL));
    v24 += *v27 + 2;
  }
  if ( v24 > 0xFFFF )
    goto LABEL_175;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, v24, 909528387LL);
  v28 = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    DestinationString.MaximumLength = v24;
    DestinationString.Length = 0;
    v30 = v24 & 1;
    v31 = 0;
    *(_WORD *)((char *)&v104[1] + 1) = v30;
    if ( (v24 & 1) == 0 && (_WORD)v24 != 0xFFFF )
    {
      v32 = *(unsigned __int16 *)v18;
      v33 = 0;
      v34 = (unsigned __int64)(unsigned __int16)v24 >> 1;
      if ( (v32 & 1) == 0 )
      {
        v35 = *(_WORD *)(v18 + 2);
        if ( (v35 & 1) == 0
          && (unsigned __int16)v32 <= v35
          && v35 != 0xFFFF
          && (*(_QWORD *)(v18 + 8) || !(_WORD)v32 && !v35) )
        {
          v36 = *(char **)(v18 + 8);
          v37 = v32 >> 1;
          if ( v34 )
          {
            v38 = (char *)DestinationString.Buffer - v36;
            v39 = v34 - v37;
            do
            {
              if ( !v37 )
                break;
              --v37;
              *(_WORD *)&v36[v38] = *(_WORD *)v36;
              ++v33;
              v36 += 2;
            }
            while ( v39 + v37 );
          }
        }
      }
      v30 = *(_WORD *)((char *)&v104[1] + 1);
      v31 = 2 * v33;
      DestinationString.Length = v31;
    }
    v40 = v107;
    if ( v11 < v107 )
    {
      do
      {
        if ( v25 >= 8 )
          v41 = (unsigned __int16 *)(*(_QWORD *)(v120 + 160) + 16 * (v25 - 8 + 6LL));
        else
          v41 = (unsigned __int16 *)(v120 + 16 * (v25 + 2LL));
        v42 = v31;
        v31 += 2;
        DestinationString.Length = v31;
        v28[v42 >> 1] = 92;
        if ( (v31 & 1) == 0 && !v30 && v31 <= (unsigned __int16)v24 && (_WORD)v24 != 0xFFFF )
        {
          v43 = *v41;
          v44 = (unsigned __int64)v31 >> 1;
          if ( (v43 & 1) == 0 )
          {
            v45 = v41[1];
            if ( (v45 & 1) == 0
              && (unsigned __int16)v43 <= v45
              && v45 != 0xFFFF
              && (*((_QWORD *)v41 + 1) || !(_WORD)v43 && !v45) )
            {
              v46 = (_WORD *)*((_QWORD *)v41 + 1);
              v47 = v43 >> 1;
              v48 = 0;
              v49 = ((unsigned __int64)(unsigned __int16)v24 >> 1) - v44;
              if ( v49 )
              {
                v50 = (char *)v28 + 2 * v44 - (_QWORD)v46;
                do
                {
                  if ( !v47 )
                    break;
                  --v47;
                  *(_WORD *)&v50[(_QWORD)v46] = *v46;
                  ++v48;
                  ++v46;
                  --v49;
                }
                while ( v49 );
              }
              v31 = 2 * (v48 + v44);
              DestinationString.Length = v31;
            }
          }
        }
        v30 = *(_WORD *)((char *)&v104[1] + 1);
        ++v25;
      }
      while ( v25 < v40 );
    }
    v51 = (UNICODE_STRING *)v124;
    v52 = *(void **)(v124 + 8);
    if ( v52 )
      ExFreePoolWithTag(v52, 0);
    *v51 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v53 = BugCheckParameter2[0];
    CmpUnlockKcb(BugCheckParameter2[0]);
    v54 = v125;
    HIBYTE(v104[1]) = 0;
    *v126 = v17;
    *v54 = v53;
    BugCheckParameter2[0] = 0LL;
    NameInListWithStatus = 0;
    goto LABEL_176;
  }
  NameInListWithStatus = -1073741670;
LABEL_193:
  if ( BugCheckParameter2[0] )
  {
    if ( HIBYTE(v104[1]) )
      CmpUnlockKcb(BugCheckParameter2[0]);
    CmpDereferenceKeyControlBlock(BugCheckParameter2[0]);
  }
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  v99 = v130[20];
  if ( v130[20] )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[8].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) < L->Depth
      || (++L->FreeMisses,
          L = CurrentPrcb->PPLookasideList[8].L,
          ++L->TotalFrees,
          LOWORD(L->ListHead.Alignment) < L->Depth) )
    {
      RtlpInterlockedPushEntrySList(&L->ListHead, v99);
    }
    else
    {
      ++L->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))L->FreeEx)(v99);
    }
  }
  return (unsigned int)NameInListWithStatus;
}
