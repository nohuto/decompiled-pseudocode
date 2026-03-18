/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x1406803C0
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCopy @ 0x140208AD8 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateWorker @ 0x140208BE0 (RtlUnicodeStringValidateWorker.c)
 *     RtlUnicodeStringCat @ 0x140208C24 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpValidateComponents @ 0x140681130 (CmpValidateComponents.c)
 *     CmpGetComponentNameAtIndex @ 0x140681174 (CmpGetComponentNameAtIndex.c)
 *     CmpComputeComponentHashes @ 0x1406811B0 (CmpComputeComponentHashes.c)
 *     CmpConstructAndCacheName @ 0x1406815C0 (CmpConstructAndCacheName.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpCompareUnicodeString @ 0x140717780 (CmpCompareUnicodeString.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14071BC64 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntryByKcb @ 0x14071C050 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14071EE7C (CmpCleanUpKcbCachedSymlink.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpIsKeyStackDeleted @ 0x140720F74 (CmpIsKeyStackDeleted.c)
 *     CmpLockKcbStackShared @ 0x140721B68 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     CmpFindNameInListWithStatus @ 0x1407221B0 (CmpFindNameInListWithStatus.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetValueData @ 0x1407C46A0 (CmpGetValueData.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
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
  unsigned int v11; // edi
  unsigned int v12; // r12d
  int v13; // eax
  char v14; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  char v17; // al
  signed __int64 v18; // rcx
  __int16 i; // bx
  __int64 v20; // rcx
  unsigned int v21; // esi
  char v22; // r13
  unsigned int j; // ecx
  unsigned __int16 *v24; // rax
  ULONG_PTR v25; // rsi
  __int64 v26; // r15
  size_t v27; // rdx
  ULONG v28; // r8d
  wchar_t *v29; // r15
  int v30; // edi
  unsigned __int16 v31; // r10
  unsigned __int64 v32; // rcx
  __int16 v33; // r10
  unsigned __int64 v34; // r8
  unsigned __int16 v35; // ax
  char *v36; // rdx
  unsigned __int64 v37; // rcx
  signed __int64 v38; // r9
  unsigned __int64 v39; // r8
  char v40; // r14
  unsigned __int16 *v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r11
  unsigned __int16 v45; // ax
  _WORD *v46; // rcx
  unsigned __int64 v47; // r8
  __int16 v48; // r9
  unsigned __int64 v49; // rdx
  char *v50; // r10
  UNICODE_STRING *v51; // rbx
  void *v52; // rcx
  ULONG_PTR v53; // rbx
  ULONG_PTR *v54; // rax
  __int16 v55; // si
  unsigned int v56; // edi
  __int64 v57; // r14
  __int64 KcbAtLayerHeight; // rax
  __int64 v59; // r8
  __int64 v60; // rbx
  ULONG_PTR v61; // rcx
  int NameInListWithStatus; // eax
  __int64 v63; // rcx
  __int64 CellFlat; // rax
  unsigned int v65; // r14d
  __int64 v66; // rdx
  unsigned int v67; // edi
  __int64 v68; // rsi
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v70; // edx
  wchar_t *Buffer; // rbx
  bool v72; // zf
  wchar_t *v73; // r15
  unsigned __int16 Length; // di
  UNICODE_STRING v75; // xmm6
  __int16 v76; // r8
  wchar_t *v77; // rax
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 v79; // cx
  __int16 v80; // bx
  ULONG_PTR v81; // rsi
  int v82; // ebx
  __int64 v83; // r13
  __int64 v84; // rbx
  ULONG_PTR v85; // rcx
  int v86; // ebx
  __int64 v87; // rcx
  ULONG_PTR v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rsi
  const UNICODE_STRING *v92; // rax
  UNICODE_STRING *v93; // rbx
  void *v94; // rcx
  struct _SLIST_ENTRY *v95; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *L; // rcx
  char v99; // [rsp+40h] [rbp-C0h]
  _BYTE BugCheckParameter2[15]; // [rsp+41h] [rbp-BFh] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v102[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD BugCheckParameter3[3]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v104; // [rsp+70h] [rbp-90h]
  __int64 v105; // [rsp+78h] [rbp-88h] BYREF
  __int64 v106; // [rsp+80h] [rbp-80h] BYREF
  __int64 v107; // [rsp+88h] [rbp-78h]
  __int16 v108; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  __int64 v110; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING v112; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v113; // [rsp+C0h] [rbp-40h]
  __int64 v114; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v116; // [rsp+E0h] [rbp-20h]
  __int128 v117; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v118; // [rsp+F8h] [rbp-8h]
  ULONG_PTR *v119; // [rsp+100h] [rbp+0h]
  __int64 *v120; // [rsp+108h] [rbp+8h]
  __int64 v121; // [rsp+110h] [rbp+10h]
  __int128 v122; // [rsp+118h] [rbp+18h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+128h] [rbp+28h]
  PSLIST_ENTRY v124[22]; // [rsp+140h] [rbp+40h] BYREF

  v121 = a7;
  v118 = a8;
  v119 = a9;
  v11 = a3;
  v113 = a2;
  v114 = a1;
  v120 = a10;
  v12 = a4;
  v108 = a3;
  DestinationString = 0LL;
  v105 = 0LL;
  SourceString = 0LL;
  v106 = 0LL;
  v110 = 0LL;
  v102[0] = 0;
  v117 = 0LL;
  LOWORD(BugCheckParameter3[0]) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v99 = 1;
  BugCheckParameter2[0] = 0;
  *(_QWORD *)&BugCheckParameter2[7] = 0LL;
  HvpGetCellContextReinitialize(&v105);
  v107 = 0LL;
  *(_DWORD *)&BugCheckParameter2[3] = -1;
  *(_QWORD *)&BugCheckParameter3[1] = 0LL;
  HvpGetCellContextReinitialize(&v106);
  P = 0LL;
  *(_WORD *)&BugCheckParameter2[1] = 0;
  v104 = 0;
  HvpGetCellContextReinitialize(&v110);
  memset(v124, 0, 0xA8uLL);
  v122 = 0LL;
  WORD1(v122) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( a5 || (LOWORD(v13) = *(_WORD *)(a1 + 2), (_WORD)v13) )
  {
    v13 = *(__int16 *)(a1 + 2);
    v14 = 0;
    if ( v13 >= 2 )
    {
      _mm_lfence();
      v111 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * *(__int16 *)(a1 + 2) - 16);
LABEL_68:
      if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
      {
        CmpAttachToRegistryProcess(a6 + 168);
        *(_DWORD *)(a6 + 160) |= 1u;
      }
      v55 = *(_WORD *)(a1 + 2);
      v116 = 0LL;
      if ( v55 < 0 )
      {
LABEL_174:
        v25 = *(_QWORD *)&BugCheckParameter3[1];
        v26 = v107;
        goto LABEL_175;
      }
      v56 = *(_DWORD *)&BugCheckParameter2[3];
      v57 = v114;
      while ( 1 )
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v57, (unsigned __int16)v55);
        v60 = KcbAtLayerHeight;
        if ( !v59
          && (*(_DWORD *)(KcbAtLayerHeight + 40) != -1
           || (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 4112LL) & 0x2000) == 0) )
        {
          v116 = KcbAtLayerHeight;
        }
        if ( *(_WORD *)(KcbAtLayerHeight + 66) && *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
          goto LABEL_174;
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
        {
          if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(KcbAtLayerHeight + 288), a5, v59) )
          {
            v61 = *(_QWORD *)(v60 + 32);
            if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
              HvpGetCellFlat(v61, *(unsigned int *)(v60 + 40));
            else
              HvpGetCellPaged(v61);
            NameInListWithStatus = CmpFindNameInListWithStatus(
                                     *(_QWORD *)(v60 + 32),
                                     0LL,
                                     (__int64)&BugCheckParameter2[3]);
            v63 = *(_QWORD *)(v60 + 32);
            v30 = NameInListWithStatus;
            if ( (*(_BYTE *)(v63 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v63, &v105);
            else
              HvpReleaseCellPaged(v63, &v105);
            goto LABEL_89;
          }
          if ( *(_DWORD *)(v60 + 280) )
          {
            v30 = CmpFindNameInListWithStatus(*(_QWORD *)(v60 + 32), 0LL, (__int64)&BugCheckParameter2[3]);
LABEL_89:
            if ( v30 >= 0 )
            {
              v25 = *(_QWORD *)(v60 + 32);
              v56 = *(_DWORD *)&BugCheckParameter2[3];
              *(_QWORD *)&BugCheckParameter3[1] = v25;
              goto LABEL_96;
            }
            if ( v30 != -1073741772 )
              goto LABEL_67;
            v56 = *(_DWORD *)&BugCheckParameter2[3];
            goto LABEL_92;
          }
          v56 = -1;
          *(_DWORD *)&BugCheckParameter2[3] = -1;
        }
LABEL_92:
        if ( --v55 < 0 )
        {
          v25 = *(_QWORD *)&BugCheckParameter3[1];
LABEL_96:
          if ( v56 == -1 )
            goto LABEL_174;
          if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v25, v56);
          else
            CellFlat = HvpGetCellPaged(v25);
          v26 = CellFlat;
          if ( (*(_BYTE *)(CellFlat + 16) & 2) == 0 && *(_DWORD *)(CellFlat + 12) == 6 )
          {
            if ( !(unsigned __int8)CmpGetValueData(v25, (__int64)&P, (__int64)&BugCheckParameter2[1], (__int64)&v110) )
            {
              v30 = -1073741670;
              goto LABEL_176;
            }
            if ( v104 <= 0xFFFF && (v104 & 1) == 0 )
            {
              v65 = v108;
              v66 = (unsigned int)v108;
              SourceString.Buffer = (wchar_t *)P;
              SourceString.Length = v104;
              SourceString.MaximumLength = v104;
              v67 = (unsigned __int16)v104;
              if ( v108 < v12 )
              {
                v68 = v113;
                do
                {
                  ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v68, v66);
                  v66 = (unsigned int)(v70 + 1);
                  v67 += *ComponentNameAtIndex + 2;
                }
                while ( (unsigned int)v66 < v12 );
                v25 = *(_QWORD *)&BugCheckParameter3[1];
              }
              if ( v67 <= 0xFFFF )
              {
                DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v67, 0x36364D43u);
                Buffer = DestinationString.Buffer;
                if ( !DestinationString.Buffer )
                {
                  v30 = -1073741670;
                  goto LABEL_178;
                }
                DestinationString.Length = 0;
                DestinationString.MaximumLength = v67;
                RtlUnicodeStringCopy(&DestinationString, &SourceString);
                if ( BugCheckParameter2[1] )
                {
                  ExFreePoolWithTag(P, 0);
                }
                else if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
                {
                  HvpReleaseCellFlat(v25, &v110);
                }
                else
                {
                  HvpReleaseCellPaged(v25, &v110);
                }
                v72 = (*(_BYTE *)(v25 + 140) & 1) == 0;
                P = 0LL;
                if ( v72 )
                  HvpReleaseCellPaged(v25, &v106);
                else
                  HvpReleaseCellFlat(v25, &v106);
                v107 = 0LL;
                CmpUnlockKcbStack(v114);
                v73 = DestinationString.Buffer;
                Length = DestinationString.Length;
                v75 = DestinationString;
                v99 = 0;
                if ( !v14 )
                  goto LABEL_161;
                v112 = DestinationString;
                v76 = 0;
                *((_QWORD *)&v117 + 1) = DestinationString.Buffer;
                LOWORD(v117) = 0;
                WORD1(v117) = DestinationString.MaximumLength;
                if ( DestinationString.Length )
                {
                  v77 = v112.Buffer;
                  MaximumLength = v112.MaximumLength;
                  v79 = v112.Length;
                  while ( *v77 == 92 )
                  {
                    ++v77;
                    v79 -= 2;
                    MaximumLength -= 2;
                    v112.Buffer = v77;
                    v76 += 2;
                    v112.Length = v79;
                    v112.MaximumLength = MaximumLength;
                    LOWORD(v117) = v76;
                    if ( !v79 )
                      goto LABEL_134;
                  }
                  if ( v79 )
                  {
                    while ( *v77 != 92 )
                    {
                      ++v77;
                      v79 -= 2;
                      MaximumLength -= 2;
                      v112.Buffer = v77;
                      v76 += 2;
                      v112.Length = v79;
                      v112.MaximumLength = MaximumLength;
                      LOWORD(v117) = v76;
                      if ( !v79 )
                        goto LABEL_134;
                    }
                    do
                    {
                      if ( *v77 != 92 )
                        break;
                      ++v77;
                      MaximumLength -= 2;
                      v79 -= 2;
                    }
                    while ( v79 );
                    v112.Buffer = v77;
                    v112.Length = v79;
                    v112.MaximumLength = MaximumLength;
                  }
                }
LABEL_134:
                if ( (unsigned int)CmpCompareUnicodeString(&v117, &CmRegistryRootName, 2LL)
                  || (int)CmpComputeComponentHashes(&v112, v102, v124) < 0
                  || (v80 = v102[0], (int)CmpValidateComponents((unsigned int)v102[0], v124) < 0)
                  || (v81 = 0LL,
                      (int)CmpPerformCompleteKcbCacheLookup(
                             *((_QWORD *)CmpRegistryRootObject + 1),
                             0LL,
                             (__int64)&BugCheckParameter2[7],
                             (__int64)BugCheckParameter2,
                             (__int64)BugCheckParameter3) < 0) )
                {
LABEL_161:
                  v81 = *(_QWORD *)&BugCheckParameter2[7];
LABEL_162:
                  *(_QWORD *)&BugCheckParameter2[7] = v81;
                }
                else
                {
                  if ( LOWORD(BugCheckParameter3[0]) != v80 )
                  {
                    CmpDereferenceKeyControlBlock(*(ULONG_PTR *)&BugCheckParameter2[7]);
                    goto LABEL_162;
                  }
                  v81 = *(_QWORD *)&BugCheckParameter2[7];
                  if ( (int)CmpStartKcbStackForTopLayerKcb(&v122, *(_QWORD *)&BugCheckParameter2[7]) >= 0 )
                  {
                    CmpLockKcbStackShared(&v122);
                    v82 = CmpConstructAndCacheName(v81, 0LL);
                    CmpUnlockKcbStack(&v122);
                    if ( v82 >= 0 )
                    {
                      if ( BugCheckParameter2[0] )
                      {
                        CmpUnlockHashEntryByKcb(v81);
                        BugCheckParameter2[0] = 0;
                      }
                      v83 = v114;
                      CmpLockKcbStackTopExclusiveRestShared(v114);
                      v99 = 1;
                      if ( !(unsigned __int8)CmpIsKeyStackDeleted(v83, 0LL) )
                      {
                        v84 = v111;
                        v85 = *(_QWORD *)(v111 + 32);
                        if ( (*(_BYTE *)(v85 + 140) & 1) != 0 )
                          HvpGetCellFlat(v85, *(unsigned int *)(v111 + 40));
                        else
                          HvpGetCellPaged(v85);
                        v86 = CmpFindNameInListWithStatus(*(_QWORD *)(v84 + 32), 0LL, (__int64)&BugCheckParameter2[3]);
                        v87 = *(_QWORD *)(v111 + 32);
                        if ( (*(_BYTE *)(v87 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(v87, &v105);
                        else
                          HvpReleaseCellPaged(v87, &v105);
                        if ( v86 >= 0 )
                        {
                          v88 = *(_QWORD *)(v111 + 32);
                          *(_QWORD *)&BugCheckParameter3[1] = v88;
                          v89 = (*(_BYTE *)(v88 + 140) & 1) != 0
                              ? HvpGetCellFlat(v88, *(unsigned int *)&BugCheckParameter2[3])
                              : HvpGetCellPaged(v88);
                          v72 = *(_DWORD *)(v89 + 12) == 6;
                          v107 = v89;
                          if ( v72 )
                          {
                            if ( (unsigned __int8)CmpGetValueData(
                                                    *(ULONG_PTR *)&BugCheckParameter3[1],
                                                    (__int64)&P,
                                                    (__int64)&BugCheckParameter2[1],
                                                    (__int64)&v110) )
                            {
                              if ( v104 <= 0xFFFF && (v104 & 1) == 0 )
                              {
                                SourceString.Length = v104;
                                SourceString.MaximumLength = v104;
                                SourceString.Buffer = (wchar_t *)P;
                                if ( !(unsigned int)CmpCompareUnicodeString(&DestinationString, &SourceString, 0LL) )
                                {
                                  v90 = v111;
                                  CmpCleanUpKcbCachedSymlink(v111, v121);
                                  *(_QWORD *)(v90 + 104) = v81;
                                  CmpReferenceKeyControlBlockUnsafe(v81);
                                  *(_WORD *)(v90 + 8) |= 8u;
                                  CmpUnlockKcbStack(v83);
                                  v99 = 0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                if ( v65 < v12 )
                {
                  v91 = v113;
                  while ( 1 )
                  {
                    v92 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v91, v65);
                    DestinationString.Length = Length + 2;
                    v73[(unsigned __int64)Length >> 1] = 92;
                    RtlUnicodeStringCat(&DestinationString, v92);
                    if ( ++v65 >= v12 )
                      break;
                    v73 = DestinationString.Buffer;
                    Length = DestinationString.Length;
                  }
                  v75 = DestinationString;
                  v81 = *(_QWORD *)&BugCheckParameter2[7];
                }
                v93 = (UNICODE_STRING *)v118;
                v94 = *(void **)(v118 + 8);
                if ( v94 )
                {
                  ExFreePoolWithTag(v94, 0);
                  v30 = 0;
                  v93->Buffer = 0LL;
                }
                else
                {
                  v30 = 0;
                }
                if ( BugCheckParameter2[0] )
                  CmpUnlockHashEntryByKcb(v81);
                *(_QWORD *)&BugCheckParameter2[7] = 0LL;
                *v119 = v81;
                *v93 = v75;
                RtlInitUnicodeString(&DestinationString, 0LL);
                v25 = *(_QWORD *)&BugCheckParameter3[1];
                v26 = v107;
                *v120 = v116;
                goto LABEL_176;
              }
            }
          }
LABEL_175:
          v30 = -1073741772;
LABEL_176:
          Buffer = DestinationString.Buffer;
          if ( DestinationString.Buffer )
            ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_178:
          if ( P )
          {
            if ( BugCheckParameter2[1] )
            {
              ExFreePoolWithTag(P, 0);
            }
            else if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
            {
              HvpReleaseCellFlat(v25, &v110);
            }
            else
            {
              HvpReleaseCellPaged(v25, &v110);
            }
          }
          if ( v26 )
          {
            if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v25, &v106);
            else
              HvpReleaseCellPaged(v25, &v106);
          }
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          if ( v99 )
            CmpUnlockKcbStack(v114);
          v22 = BugCheckParameter2[2];
          goto LABEL_193;
        }
      }
    }
  }
  else
  {
    v14 = 1;
  }
  _mm_lfence();
  v15 = *(_QWORD *)(a1 + 8LL * (__int16)v13 + 8);
  v111 = v15;
  if ( !v14 || (*(_DWORD *)(v15 + 8) & 8) == 0 )
    goto LABEL_68;
  *(_QWORD *)&BugCheckParameter2[7] = *(_QWORD *)(v15 + 104);
  v16 = *(_QWORD *)(*(_QWORD *)&BugCheckParameter2[7] + 296LL);
  v17 = v16 & 1;
  if ( (v16 & 1) != 0 )
    v16 &= ~1uLL;
  if ( !v16 || v17 )
    goto LABEL_68;
  v18 = _InterlockedIncrement64(*(volatile signed __int64 **)&BugCheckParameter2[7]);
  if ( !v18 )
    KeBugCheckEx(0x51u, 0x24uLL, *(ULONG_PTR *)&BugCheckParameter2[7], 0LL, 0LL);
  if ( v18 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i < 2 )
      v20 = *(_QWORD *)(a1 + 8LL * i + 8);
    else
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    CmpUnlockKcb(v20);
  }
  v99 = 0;
  CmpLockKcbShared(*(_QWORD *)&BugCheckParameter2[7]);
  v21 = *(unsigned __int16 *)v16;
  v22 = 1;
  BugCheckParameter2[2] = 1;
  for ( j = v11; j < v12; ++j )
  {
    if ( j >= 8 )
      v24 = (unsigned __int16 *)(*(_QWORD *)(v113 + 160) + 16 * (j - 8 + 6LL));
    else
      v24 = (unsigned __int16 *)(v113 + 16 * (j + 2LL));
    v21 += *v24 + 2;
  }
  if ( v21 > 0xFFFF )
  {
    v25 = *(_QWORD *)&BugCheckParameter3[1];
    v26 = *(_QWORD *)&BugCheckParameter3[1];
    goto LABEL_175;
  }
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v21, 0x36364D43u);
  v29 = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    DestinationString.MaximumLength = v21;
    DestinationString.Length = 0;
    if ( RtlUnicodeStringValidateWorker(&DestinationString, v27, v28) >= 0 )
    {
      v32 = *(unsigned __int16 *)v16;
      v33 = 0;
      v34 = (unsigned __int64)(unsigned __int16)v21 >> 1;
      if ( (v32 & 1) == 0 )
      {
        v35 = *(_WORD *)(v16 + 2);
        if ( (v35 & 1) == 0 && (unsigned __int16)v32 <= v35 && v35 != 0xFFFF )
        {
          v36 = *(char **)(v16 + 8);
          if ( v36 || !(_WORD)v32 && !v35 )
          {
            v37 = v32 >> 1;
            if ( v34 )
            {
              v38 = (char *)v29 - v36;
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
              while ( v37 + v39 );
            }
          }
        }
      }
      v31 = 2 * v33;
      DestinationString.Length = v31;
    }
    if ( v11 < v12 )
    {
      v40 = DestinationString.MaximumLength;
      do
      {
        if ( v11 >= 8 )
          v41 = (unsigned __int16 *)(*(_QWORD *)(v113 + 160) + 16 * (v11 - 8 + 6LL));
        else
          v41 = (unsigned __int16 *)(v113 + 16 * (v11 + 2LL));
        v42 = v31;
        v31 += 2;
        DestinationString.Length = v31;
        v29[v42 >> 1] = 92;
        if ( (v31 & 1) == 0 && (v40 & 1) == 0 && v31 <= (unsigned __int16)v21 && (_WORD)v21 != 0xFFFF )
        {
          v43 = *v41;
          v44 = (unsigned __int64)v31 >> 1;
          if ( (v43 & 1) == 0 )
          {
            v45 = v41[1];
            if ( (v45 & 1) == 0 && (unsigned __int16)v43 <= v45 && v45 != 0xFFFF )
            {
              v46 = (_WORD *)*((_QWORD *)v41 + 1);
              if ( v46 || !(_WORD)v43 && !v45 )
              {
                v47 = v43 >> 1;
                v48 = 0;
                v49 = ((unsigned __int64)(unsigned __int16)v21 >> 1) - v44;
                if ( v49 )
                {
                  v50 = (char *)v29 + 2 * v44 - (_QWORD)v46;
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
        }
        ++v11;
      }
      while ( v11 < v12 );
    }
    v51 = (UNICODE_STRING *)v118;
    v52 = *(void **)(v118 + 8);
    if ( v52 )
      ExFreePoolWithTag(v52, 0);
    *v51 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v53 = *(_QWORD *)&BugCheckParameter2[7];
    CmpUnlockKcb(*(_QWORD *)&BugCheckParameter2[7]);
    v30 = 0;
    BugCheckParameter2[2] = 0;
    v54 = v119;
    *v120 = v111;
    *(_QWORD *)&BugCheckParameter2[7] = 0LL;
    *v54 = v53;
LABEL_67:
    v25 = *(_QWORD *)&BugCheckParameter3[1];
    v26 = *(_QWORD *)&BugCheckParameter3[1];
    goto LABEL_176;
  }
  v30 = -1073741670;
LABEL_193:
  if ( *(_QWORD *)&BugCheckParameter2[7] )
  {
    if ( v22 )
      CmpUnlockKcb(*(_QWORD *)&BugCheckParameter2[7]);
    CmpDereferenceKeyControlBlock(*(ULONG_PTR *)&BugCheckParameter2[7]);
  }
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  v95 = v124[20];
  if ( v124[20] )
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
      RtlpInterlockedPushEntrySList(&L->ListHead, v95);
    }
    else
    {
      ++L->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))L->FreeEx)(v95);
    }
  }
  return (unsigned int)v30;
}
