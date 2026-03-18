/*
 * XREFs of MmLoadSystemImageEx @ 0x14075FC44
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x1403B670C (IopLoadCrashdumpDriver.c)
 *     MmLoadSystemImage @ 0x14075FC00 (MmLoadSystemImage.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     IopLoadCrashdmpImage @ 0x14081CF60 (IopLoadCrashdmpImage.c)
 *     MiLoadImportDll @ 0x14082ECCC (MiLoadImportDll.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMapAndApplyPatchInSession @ 0x140975FF0 (MiMapAndApplyPatchInSession.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     MiSetImageProtection @ 0x14027E128 (MiSetImageProtection.c)
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiReferenceActiveSubsection @ 0x140286DE0 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x140287380 (MiControlAreaRequiresCharge.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140287450 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MiIsRetpolineEnabled @ 0x14029C6C4 (MiIsRetpolineEnabled.c)
 *     IoIsDeviceEjectable @ 0x14029E72C (IoIsDeviceEjectable.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     MiUpdateDriverLoadInProgress @ 0x1402D8E2C (MiUpdateDriverLoadInProgress.c)
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14058C0E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiValidateStrongCodeDriverImage @ 0x140590908 (MiValidateStrongCodeDriverImage.c)
 *     MiMapRetpolineStubs @ 0x1405A1F60 (MiMapRetpolineStubs.c)
 *     MiCompactServiceTable @ 0x1406CCD8C (MiCompactServiceTable.c)
 *     MiUseLargeDriverPage @ 0x1406E7320 (MiUseLargeDriverPage.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     MiProcessLoadConfigForDriver @ 0x14075C2E0 (MiProcessLoadConfigForDriver.c)
 *     KseDriverLoadImage @ 0x14075CCC8 (KseDriverLoadImage.c)
 *     MiConstructLoaderEntry @ 0x14075F4A4 (MiConstructLoaderEntry.c)
 *     MiObtainSectionForDriver @ 0x1407603D4 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x140760554 (MiGenerateSystemImageNames.c)
 *     MiHandleDriverNonPagedSections @ 0x1407608BC (MiHandleDriverNonPagedSections.c)
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 *     MiFinalizeDriverCfgState @ 0x14076146C (MiFinalizeDriverCfgState.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407614BC (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiLogRetpolineImageLoadEvents @ 0x1407615BC (MiLogRetpolineImageLoadEvents.c)
 *     MiResolveImageImports @ 0x140761604 (MiResolveImageImports.c)
 *     MiMapSystemImage @ 0x140761714 (MiMapSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140761A2C (MiGetSystemAddressForImage.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x140761E94 (MiApplyRequiredSessionDriverHotPatches.c)
 *     MiBackSingleImageWithPagefile @ 0x14080F7F4 (MiBackSingleImageWithPagefile.c)
 *     MiLogFailedDriverLoad @ 0x14096C4AC (MiLogFailedDriverLoad.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14096C6C4 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140970C20 (MiMarkKernelImageRetpolineBits.c)
 *     MiCreatePatchTableProtos @ 0x140972D10 (MiCreatePatchTableProtos.c)
 *     MiFindHotPatchRecord @ 0x1409730F0 (MiFindHotPatchRecord.c)
 *     MiFreePatchTableProtos @ 0x140973418 (MiFreePatchTableProtos.c)
 *     MiLoadHotPatch @ 0x140974020 (MiLoadHotPatch.c)
 *     MiCreateSessionDriverProtos @ 0x140981070 (MiCreateSessionDriverProtos.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfDriverLoadImage @ 0x140A7C1B8 (VfDriverLoadImage.c)
 */

__int64 __fastcall MmLoadSystemImageEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned __int64 *a7)
{
  unsigned int v7; // r14d
  char v9; // bl
  __int64 v10; // rdx
  __int64 v11; // r10
  signed int Image; // edi
  unsigned int v13; // r15d
  struct _KTHREAD *Lock; // r12
  int v15; // eax
  char *v16; // rsi
  void *v17; // rcx
  __int64 *v18; // r12
  __int64 *v19; // r13
  unsigned __int64 v20; // r8
  int v21; // ecx
  int inserted; // eax
  int v23; // r11d
  int v24; // eax
  PVOID v25; // r8
  int v26; // edi
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r15
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  int v34; // r12d
  __int64 *v35; // r15
  __int64 *v36; // r13
  __int64 v37; // rdx
  unsigned __int64 *v38; // rcx
  int v39; // r14d
  bool v41; // sf
  struct _LIST_ENTRY *v42; // rax
  struct _LIST_ENTRY *v43; // rax
  void *PatchTableProtos; // rax
  int v45; // eax
  unsigned __int64 v46; // rdi
  _QWORD *v47; // rdi
  __int64 v48; // rcx
  int v49; // r9d
  int HotPatchRecord; // eax
  int v51; // r14d
  unsigned __int64 v52; // rax
  char v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+34h] [rbp-CCh]
  __int64 v55; // [rsp+38h] [rbp-C8h]
  int v56; // [rsp+40h] [rbp-C0h]
  unsigned __int64 SystemAddressForImage; // [rsp+48h] [rbp-B8h]
  int v58; // [rsp+50h] [rbp-B0h] BYREF
  int v59; // [rsp+54h] [rbp-ACh] BYREF
  PVOID v60; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v62; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h]
  int v64; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-80h] BYREF
  char *v66; // [rsp+90h] [rbp-70h] BYREF
  struct _LIST_ENTRY *v67; // [rsp+98h] [rbp-68h]
  PVOID v68[2]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v70[14]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = a5;
  v66 = 0LL;
  v60 = 0LL;
  v67 = 0LL;
  v56 = 1;
  v9 = 0;
  v58 = 1;
  *(_OWORD *)v68 = 0LL;
  String1 = 0LL;
  *a7 = 0LL;
  v70[0] = 0LL;
  if ( *((_BYTE *)PsGetCurrentServerSiloGlobals() + 1368) )
  {
    v42 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
    v43 = PsAttachSiloToCurrentThread(v42);
    v11 = a1;
    v9 = 4;
    v10 = a2;
    v67 = v43;
  }
  v59 = v7 & 1;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_5;
LABEL_98:
    Image = -1073741582;
    goto LABEL_76;
  }
  if ( (v7 & 2) != 0 || (v7 & 0x80000004) == 4 )
    goto LABEL_98;
  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 && (v7 & 0x40000000) == 0 )
  {
    Image = -1073741801;
    goto LABEL_76;
  }
  v56 = v58;
LABEL_5:
  Image = MiGenerateSystemImageNames(v11, v10, a3, &String1, v70, v68);
  if ( Image < 0 )
    goto LABEL_76;
  v54 = 1;
  LOBYTE(a5) = 1;
  v13 = 0;
  v53 = 0;
  P = 0LL;
  Lock = MmAcquireLoadLock();
  v55 = (__int64)Lock;
  v15 = MiObtainSectionForDriver((PCUNICODE_STRING)v68, &P);
  v16 = (char *)P;
  Image = v15;
  if ( v15 < 0 )
  {
    v39 = 1;
    v23 = 1;
    goto LABEL_70;
  }
  v17 = (void *)*((_QWORD *)P + 14);
  Object = v17;
  if ( v17 )
  {
    v18 = (__int64 *)MiSectionControlArea((__int64)v17);
    v62 = v18;
    v13 = *(_DWORD *)(*v18 + 8);
  }
  else
  {
    v18 = 0LL;
    v62 = 0LL;
  }
  if ( !Image )
  {
    v9 |= 2 * (v7 & 1) + 1;
    *((_DWORD *)v16 + 16) = v13 << 12;
    SystemAddressForImage = MiGetSystemAddressForImage(v17, v7, &v58);
    if ( !SystemAddressForImage )
    {
      ObDereferenceObjectDeferDelete(Object);
      ExFreePoolWithTag(v16, 0);
      v39 = 1;
      v16 = 0LL;
      v23 = 1;
      Image = -1073741670;
      goto LABEL_122;
    }
    MiCheckPurgeAndUpMapCount((__int64)v18);
    v19 = (__int64 *)(v16 + 48);
    *((_QWORD *)v16 + 6) = SystemAddressForImage;
    MiUpdateDriverLoadInProgress((__int64)v16, 0);
    v9 |= 8u;
    v56 = v58;
    LOBYTE(v23) = 1;
LABEL_21:
    if ( (v9 & 3) != 1 )
    {
LABEL_24:
      if ( (v9 & 2) != 0 && dword_140C4F478 )
      {
        if ( ((unsigned __int8)v9 & (unsigned __int8)v23) != 0 )
        {
          if ( !(unsigned int)MiCreateSessionDriverProtos(v18, *v19, 0LL)
            || (PatchTableProtos = (void *)MiCreatePatchTableProtos(), (v60 = PatchTableProtos) == 0LL) )
          {
            Image = -1073741670;
            goto LABEL_121;
          }
          v25 = PatchTableProtos;
        }
        else
        {
          v25 = (PVOID)*((_QWORD *)v16 + 36);
          v60 = v25;
        }
      }
      else
      {
        v25 = v60;
      }
      Image = MiMapSystemImage(Object, SystemAddressForImage, v25, v7);
      if ( Image < 0 )
      {
LABEL_121:
        v39 = v54;
        v23 = 1;
        goto LABEL_122;
      }
      if ( v59 )
      {
        v26 = v56;
      }
      else
      {
        _InterlockedExchangeAdd(&dword_140C53550, v13);
        v26 = v58;
        v16 = (char *)P;
        v56 = v58;
      }
      v27 = 0LL;
      v53 = 1;
      if ( (v7 & 0x40000021) != 0 )
        goto LABEL_32;
      if ( SystemAddressForImage != *(_QWORD *)(*v62 + 32) )
      {
        v28 = SystemAddressForImage;
        goto LABEL_33;
      }
      if ( (unsigned int)MiUseLargeDriverPage(&String1)
        && (v28 = MiMapSystemImageWithLargePage(Object, v13, SystemAddressForImage), (v27 = v28) != 0) )
      {
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 3, -v13);
        v26 = v58;
        v16 = (char *)P;
        v56 = v58;
        SystemAddressForImage = v28;
        *v19 = v28;
      }
      else
      {
LABEL_32:
        v28 = SystemAddressForImage;
      }
LABEL_33:
      LOBYTE(a5) = 0;
      if ( (v9 & 1) != 0 )
      {
        v29 = RtlImageNtHeader(v28);
        if ( !v29 )
        {
          Image = -1073741279;
          goto LABEL_129;
        }
        if ( *(_WORD *)(v29 + 4) != 0x8664 || *(_WORD *)(v29 + 24) != 523 )
        {
          Image = -1073741520;
          goto LABEL_129;
        }
        if ( (MiFlags & 0x8000) != 0 && (v7 & 0x40000000) == 0 )
        {
          Image = MiValidateStrongCodeDriverImage(v29, v7);
          if ( Image < 0 )
          {
            memset(&v70[1], 0, 0xA0uLL);
            DWORD2(v70[8]) = *(_DWORD *)(v29 + 88);
            v45 = *(_DWORD *)(v29 + 8);
            *(UNICODE_STRING *)((char *)&v70[6] + 8) = String1;
            HIDWORD(v70[10]) = v45;
            MiLogStrongCodeDriverLoadFailure("SectionWXable");
            goto LABEL_129;
          }
          v26 = v56;
        }
        Image = MiConstructLoaderEntry(
                  (__int64)v16,
                  (const void **)&String1,
                  (const void **)v68,
                  v7,
                  v26,
                  (__int64 *)&v66);
        if ( Image < 0 )
        {
LABEL_129:
          v39 = v54;
          v23 = 1;
          goto LABEL_122;
        }
        MiUpdateDriverLoadInProgress((__int64)v16, 1);
        v9 &= ~8u;
        ExFreePoolWithTag(v16, 0);
        v16 = v66;
        v26 = v56;
        if ( v60 )
        {
          *((_QWORD *)v66 + 36) = v60;
          v60 = 0LL;
        }
      }
      v53 = 5;
      if ( v54 == 2 )
        *((_DWORD *)v16 + 49) |= 0x80u;
      if ( !v27 && !v59 )
      {
        if ( !v26 )
          goto LABEL_100;
        v30 = (__int64)v62;
        v31 = MiReferenceControlAreaFile((__int64)v62);
        if ( IoIsDeviceEjectable(*(_QWORD *)(v31 + 8)) || (*(_DWORD *)(v32 + 52) & 0x11) != 0 )
          v26 = 0;
        MiDereferenceControlAreaFile(v30, v33);
        if ( !v26 )
LABEL_100:
          MiBackSingleImageWithPagefile(v16);
      }
      v34 = v7 & 0x40000000;
      if ( (v7 & 0x10000000) == 0 )
      {
        Image = MiResolveImageImports(
                  (_DWORD)v16,
                  a2,
                  (unsigned int)v70,
                  (unsigned int)&String1,
                  (v7 & 0x40000000) != 0,
                  (__int64)&a5);
        if ( Image < 0 )
          goto LABEL_129;
        v53 = 21;
      }
      v35 = v62;
      v36 = v62 + 16;
      if ( v34 || (Image = MiProcessLoadConfigForDriver((__int64)v16), Image >= 0) )
      {
        if ( !MiIsRetpolineEnabled() )
          goto LABEL_56;
        v46 = *((_QWORD *)v16 + 6);
        if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v46) )
          MiMapRetpolineStubs(v46, (unsigned __int64)*((unsigned int *)v16 + 16) >> 12);
        Image = MiMarkKernelImageRetpolineBits(v16, 1LL);
        if ( Image >= 0 )
        {
LABEL_56:
          MiLogRetpolineImageLoadEvents(v16);
          if ( (*(_BYTE *)(*(_QWORD *)(*v35 + 56) + 46LL) & 0x40) == 0 )
          {
            v47 = (_QWORD *)(SystemAddressForImage + *(unsigned int *)(*(_QWORD *)(v35[12] + 32) + 60LL));
            MiSetImageProtection((__int64)v16, (unsigned __int64)v47, 8, 4LL);
            v48 = *(_QWORD *)(v35[12] + 32);
            if ( v48 )
              v48 = *(_QWORD *)(v48 + 40);
            *v47 = SystemAddressForImage - v48;
            if ( v36[2] )
              MiSetImageProtection((__int64)v16, (unsigned __int64)v47, 8, 256LL);
          }
          if ( v34
            || (VfDriverLoadImage(v16, v37, 0LL), v53 |= 2u, Image = KseDriverLoadImage((__int64)v16), Image >= 0)
            && (Image = MiApplyImportOptimizationToRuntimeDriver(v16, v35, v7), Image >= 0) )
          {
            if ( (v9 & 2) == 0 || (v7 & 4) == 0 || (Image = MiCompactServiceTable((__int64)v16), Image >= 0) )
            {
              Image = MiHandleDriverNonPagedSections(v16, v7, 1LL);
              if ( Image >= 0 )
              {
                if ( (v9 & 2) != 0 )
                  *((_BYTE *)MiSessionLookupImage(SystemAddressForImage) + 64) = 1;
                if ( v34 )
                {
                  LOBYTE(v13) = v53;
                  goto LABEL_69;
                }
                Image = MiFinalizeDriverCfgState(v16, v7, v36);
                if ( Image >= 0 )
                {
                  if ( (v9 & 1) != 0 )
                  {
                    DestinationString = 0LL;
                    if ( (dword_140C533E4 & 1) == 0 )
                    {
LABEL_68:
                      MiDriverLoadSucceeded(
                        (_DWORD)v16,
                        (_DWORD)Object,
                        a1,
                        (unsigned int)v68,
                        (__int64)&String1,
                        v9 & 1);
                      LOBYTE(v13) = v53 | 8;
LABEL_69:
                      Lock = (struct _KTHREAD *)v55;
                      MmReleaseLoadLock(v55);
                      Image = 0;
                      v38 = a7;
                      v23 = 1;
                      v39 = v54;
                      *a6 = v16;
                      *v38 = SystemAddressForImage;
LABEL_70:
                      if ( (v9 & 8) != 0 )
                      {
                        MiUpdateDriverLoadInProgress((__int64)v16, v23);
                        v9 &= ~8u;
                      }
                      if ( Image < 0 )
                      {
                        if ( v16 )
                        {
                          if ( v39 == 2 && (v13 & 4) == 0 )
                          {
                            v52 = MiSectionControlArea(*((_QWORD *)v16 + 14));
                            MiReturnCrossPartitionControlAreaCharges(v52);
                          }
                          MiUnloadSystemImage((__int64)v16, v13);
                        }
                        MmReleaseLoadLock((__int64)Lock);
                        if ( !(_BYTE)a5 )
                          MiLogFailedDriverLoad(a1, 0LL, 0LL, (unsigned int)Image);
                      }
                      goto LABEL_73;
                    }
                    RtlInitUnicodeString(&DestinationString, 0LL);
                    v49 = *((_DWORD *)v16 + 39);
                    v64 = *((_DWORD *)v16 + 30);
                    v59 = v49;
                    HotPatchRecord = MiFindHotPatchRecord((int)&qword_140C533B0, 0, v64, v49, &DestinationString);
                    v51 = HotPatchRecord;
                    if ( HotPatchRecord >= 0 )
                    {
                      v51 = MiLoadHotPatch(&DestinationString, 0LL, &v64, &v59);
                      RtlFreeUnicodeString(&DestinationString);
                    }
                    else if ( HotPatchRecord == -1073741275 )
                    {
                      v51 = 0;
                    }
                    Image = v51;
                    v41 = v51 < 0;
                  }
                  else
                  {
                    if ( (v9 & 2) == 0 )
                      goto LABEL_68;
                    Image = MiApplyRequiredSessionDriverHotPatches(v16);
                    v41 = Image < 0;
                  }
                  if ( v41 )
                    goto LABEL_129;
                  goto LABEL_68;
                }
                goto LABEL_129;
              }
            }
          }
        }
      }
      goto LABEL_121;
    }
    v24 = MiControlAreaRequiresCharge((__int64)v18);
    v54 = v24;
    if ( v24 )
    {
      if ( v24 == 2 )
      {
        Image = MiReferenceActiveSubsection(v18 + 16, 136, 0x11u);
        v23 = 1;
        if ( Image < 0 )
        {
          v39 = 1;
          goto LABEL_122;
        }
      }
      goto LABEL_24;
    }
    Image = -1073740277;
    v39 = 0;
LABEL_122:
    Lock = (struct _KTHREAD *)v55;
    LOBYTE(v13) = v53;
    goto LABEL_70;
  }
  v19 = (__int64 *)(v16 + 48);
  v20 = *((_QWORD *)v16 + 6);
  v21 = v7 & 0x40000000;
  SystemAddressForImage = v20;
  if ( (*((_DWORD *)v16 + 49) & 0x20) != 0 )
  {
    if ( !v21 )
    {
      MmReleaseLoadLock(v55);
      Image = -1073740608;
      goto LABEL_73;
    }
  }
  else if ( !v21 )
  {
    goto LABEL_12;
  }
  if ( (v7 & 0x20000000) == 0 )
    goto LABEL_16;
LABEL_12:
  if ( !v59 )
  {
    if ( Image != 272 )
    {
LABEL_90:
      LOBYTE(v23) = 1;
      ++*((_WORD *)v16 + 54);
      goto LABEL_21;
    }
LABEL_16:
    *a6 = v16;
    *a7 = v20;
    if ( (*((_DWORD *)v16 + 26) & 0x4000000) != 0 )
      Image = -1073741411;
    else
      Image = (v7 & 0x40000001) != 1 ? 0xC000010E : 0;
    goto LABEL_18;
  }
  inserted = MiSessionInsertImage(v20, v18, v20);
  Image = inserted;
  if ( inserted >= 0 )
  {
    if ( inserted == 272 )
    {
      v20 = SystemAddressForImage;
      goto LABEL_16;
    }
    v9 |= 2u;
    goto LABEL_90;
  }
LABEL_18:
  MmReleaseLoadLock(v55);
LABEL_73:
  if ( a2 )
    ExFreePoolWithTag(v68[1], 0);
  if ( (v9 & 1) != 0 && v60 )
    MiFreePatchTableProtos(v60);
LABEL_76:
  if ( (v9 & 4) != 0 )
    PsDetachSiloFromCurrentThread(v67);
  return (unsigned int)Image;
}
