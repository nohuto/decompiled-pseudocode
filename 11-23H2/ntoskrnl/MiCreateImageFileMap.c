/*
 * XREFs of MiCreateImageFileMap @ 0x1406A8928
 * Callers:
 *     MiCreateNewSection @ 0x1407466E0 (MiCreateNewSection.c)
 * Callees:
 *     MiInitializeImageHeaderPage @ 0x14020DCA0 (MiInitializeImageHeaderPage.c)
 *     MiLegacyImageArchitecture @ 0x14020EC68 (MiLegacyImageArchitecture.c)
 *     IoIsDeviceEjectable @ 0x14020EC90 (IoIsDeviceEjectable.c)
 *     MiCopyHeaderIfResident @ 0x14020ECB0 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x14020EE80 (MiFlushDataSection.c)
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF30 (MiUpdateSystemProtoPtesTree.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     CcZeroEndOfLastPage @ 0x1402A2578 (CcZeroEndOfLastPage.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     PsIsCurrentThreadPrefetching @ 0x140347930 (PsIsCurrentThreadPrefetching.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     MiEnableImageDirectMap @ 0x14063D1A0 (MiEnableImageDirectMap.c)
 *     MiDeleteImageCreationMdls @ 0x1406A7448 (MiDeleteImageCreationMdls.c)
 *     MiReadImageHeaders @ 0x1406A79B8 (MiReadImageHeaders.c)
 *     MiCreateMdl @ 0x1406A8F3C (MiCreateMdl.c)
 *     MiVerifyImageHeader @ 0x1406A9074 (MiVerifyImageHeader.c)
 *     MiBuildImageControlArea @ 0x1406A9D30 (MiBuildImageControlArea.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     MiLogCreateImageFileMapFailure @ 0x140A2F7D4 (MiLogCreateImageFileMapFailure.c)
 *     MiAllocateEntireImageFileExtents @ 0x140A331D4 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteFileExtentList @ 0x140A340C0 (MiDeleteFileExtentList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MiCreateImageFileMap(
        PFILE_OBJECT FileObject,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        PVOID **a5,
        __int64 *a6,
        __int64 a7,
        __int128 *a8)
{
  unsigned int *v9; // r12
  NTSTATUS result; // eax
  unsigned __int64 v14; // rdi
  __int64 *v15; // r15
  __int64 Mdl; // rax
  __int64 v17; // r13
  int ImageHeaders; // r14d
  struct _FILE_OBJECT *v19; // r14
  ULONG LowPart; // edx
  unsigned __int64 v21; // r9
  unsigned int *v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdi
  unsigned __int64 v27; // r9
  __int64 v28; // r11
  unsigned int v29; // r9d
  __int128 v30; // xmm0
  int v31; // edx
  unsigned __int64 v32; // r14
  __int64 v33; // r8
  unsigned __int64 v34; // rcx
  unsigned int v35; // r10d
  __int64 v36; // r10
  PFILE_OBJECT v37; // rdi
  int v38; // eax
  __int64 v39; // r8
  char v40; // r14
  unsigned int v41; // eax
  __int16 v42; // si
  __int64 v43; // rdx
  char v44; // r9
  unsigned __int64 v45; // rax
  int v46; // edx
  __int64 v47; // rdx
  unsigned __int8 v48; // al
  __int64 v49; // rsi
  PVOID *v50; // rbx
  LARGE_INTEGER v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // edi
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  bool v61; // zf
  __int128 *v62; // rax
  unsigned __int64 v63; // rdi
  __int64 *v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  int v67; // eax
  __int64 DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  __int64 v70; // rcx
  char v71; // [rsp+40h] [rbp-C0h]
  PVOID *P; // [rsp+50h] [rbp-B0h]
  unsigned int v74; // [rsp+58h] [rbp-A8h]
  unsigned int v75; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER FileSize; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v78; // [rsp+78h] [rbp-88h] BYREF
  int v79; // [rsp+80h] [rbp-80h] BYREF
  signed __int64 v80; // [rsp+88h] [rbp-78h]
  PVOID v81[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v82; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-58h]
  __int128 v84; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-40h]
  __int128 v86; // [rsp+C8h] [rbp-38h] BYREF
  int v87; // [rsp+D8h] [rbp-28h]
  unsigned int *v88; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR v89; // [rsp+E8h] [rbp-18h]
  __int128 v90; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v91; // [rsp+100h] [rbp+0h]
  PVOID **v92; // [rsp+108h] [rbp+8h]
  __int64 *v93; // [rsp+110h] [rbp+10h]
  __int128 *v94; // [rsp+118h] [rbp+18h] BYREF
  int v95; // [rsp+120h] [rbp+20h]
  int v96; // [rsp+124h] [rbp+24h]

  v92 = a5;
  v9 = 0LL;
  v93 = a6;
  v94 = a8;
  v87 = 0;
  v86 = 0LL;
  v79 = 0;
  v84 = 0LL;
  FileSize.QuadPart = 0LL;
  v90 = 0LL;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result >= 0 )
  {
    if ( FileSize.HighPart )
    {
      dword_140C65810 = 34;
      return -1073741792;
    }
    v85 = 0LL;
    v14 = 1LL;
    v80 = 0LL;
    v81[0] = 0LL;
    P = 0LL;
    v78 = 0LL;
    v15 = 0LL;
    Mdl = MiCreateMdl(a2, a3, 4096LL, 1LL);
    v17 = Mdl;
    if ( !Mdl )
    {
      dword_140C65810 = 35;
      return -1073741670;
    }
    *(_QWORD *)(Mdl + 16) = 0LL;
    v89 = *(_QWORD *)(Mdl + 48);
    CcZeroEndOfLastPage(FileObject);
    ImageHeaders = MiFlushDataSection((__int64)FileObject, &v79);
    if ( ImageHeaders == -1073741740 )
    {
      dword_140C65810 = 36;
LABEL_86:
      v50 = 0LL;
LABEL_154:
      v49 = a2;
      goto LABEL_155;
    }
    v71 = 0;
    if ( v79 )
      a4 |= 0x200000u;
    if ( (a4 & 0x200080) != 0 )
    {
      v71 = 1;
      if ( PsIsCurrentThreadPrefetching() )
      {
        dword_140C65810 = 37;
        ImageHeaders = -1073740749;
        goto LABEL_86;
      }
    }
    if ( (a4 & 0x10000) != 0 )
    {
      v51 = FileSize;
      if ( (a4 & 0x80000) != 0 )
        v51.QuadPart = 4096LL;
      v52 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MiAllocateEntireImageFileExtents)(
              FileObject,
              (LARGE_INTEGER)v51.QuadPart,
              0LL,
              &v78);
      v9 = v78;
      ImageHeaders = v52;
      if ( v52 < 0 )
      {
        dword_140C65810 = 38;
        goto LABEL_94;
      }
      v19 = FileObject;
      goto LABEL_14;
    }
    v19 = FileObject;
    if ( (unsigned int)MiCopyHeaderIfResident((__int64)FileObject, v89) )
    {
      v21 = 4096LL;
      *((_QWORD *)&v84 + 1) = 4096LL;
      goto LABEL_17;
    }
    if ( !v71 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        LowPart = FileSize.LowPart;
      }
      else
      {
        if ( (a4 & 0x400) == 0 )
          goto LABEL_14;
        LowPart = FileSize.LowPart;
        if ( FileSize.LowPart > 0x20000 )
          goto LABEL_14;
      }
      if ( !FileObject->SectionObjectPointer->DataSectionObject )
      {
        v14 = ((unsigned __int64)LowPart + 4095) >> 12;
        if ( v14 > 1 )
        {
          v85 = MiCreateMdl(a2, a3, v14 << 12, 0LL);
          if ( v85 )
          {
            MiDeleteImageCreationMdls((PMDL)v17, 1);
            v17 = v85;
            *(_QWORD *)(v85 + 16) = 0LL;
          }
          else
          {
            v14 = 1LL;
          }
        }
      }
    }
LABEL_14:
    v21 = *((_QWORD *)&v84 + 1);
    if ( !*((_QWORD *)&v84 + 1) )
    {
      ImageHeaders = MiReadImageHeaders(v19, (ULONG_PTR)v9, v17, (__int64)&v84);
      if ( ImageHeaders < 0 )
      {
        dword_140C65810 = 40;
        goto LABEL_94;
      }
      v21 = *((_QWORD *)&v84 + 1);
      if ( *((_QWORD *)&v84 + 1) != v14 << 12 && *((_QWORD *)&v84 + 1) < 0x40uLL )
      {
        ImageHeaders = -1073741521;
        dword_140C65810 = 41;
LABEL_94:
        v50 = 0LL;
        goto LABEL_154;
      }
    }
LABEL_17:
    if ( (*(_BYTE *)(v17 + 10) & 4) != 0 )
      v22 = *(unsigned int **)(v17 + 32);
    else
      v22 = *(unsigned int **)(v17 + 24);
    v82 = v22;
    if ( *(_WORD *)v22 != 23117 )
    {
      ImageHeaders = -1073741521;
      goto LABEL_94;
    }
    v23 = v22[15];
    v74 = v23;
    if ( (int)v23 + 264 < (unsigned int)v23 )
    {
      ImageHeaders = -1073741520;
      dword_140C65810 = 42;
      goto LABEL_94;
    }
    v24 = v23 + 264;
    v25 = (unsigned int)v23;
    if ( (unsigned __int64)(v23 + 264) > FileSize.QuadPart )
    {
      ImageHeaders = -1073741520;
      dword_140C65810 = 43;
      goto LABEL_94;
    }
    if ( v24 > v14 << 12 )
    {
      v53 = 0x2000LL;
      v54 = (FileSize.QuadPart - ((unsigned int)v23 & 0xFFFFF000) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v91 = (FileSize.QuadPart - (v25 & 0xFFFFFFFFFFFFF000uLL) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v54 < 0x2000 )
        v53 = v54;
      v83 = v53;
      v55 = (__int64 *)MiCreateMdl(a2, a3, v53, 1LL);
      v56 = (__int64)v55;
      if ( !v55 )
      {
        ImageHeaders = -1073741670;
        dword_140C65810 = 44;
        goto LABEL_94;
      }
      *v55 = v17;
      v57 = v25 & 0xFFFFF000;
      v17 = (__int64)v55;
      v55[2] = ((unsigned int)v25 & 0xFFFFF000) / 4096LL;
      if ( (a4 & 0x80000) != 0 )
      {
        v88 = 0LL;
        ImageHeaders = MiAllocateEntireImageFileExtents(FileObject, v91, v9, &v88);
        if ( ImageHeaders < 0 )
        {
          dword_140C65810 = 128;
          goto LABEL_94;
        }
        v9 = v88;
        v56 = v17;
        v78 = v88;
      }
      ImageHeaders = MiReadImageHeaders(FileObject, (ULONG_PTR)v9, v56, (__int64)&v84);
      if ( ImageHeaders < 0 )
      {
        dword_140C65810 = 45;
        goto LABEL_94;
      }
      v58 = v74 & 0xFFF;
      if ( *((_QWORD *)&v84 + 1) != (unsigned int)v83 && *((_QWORD *)&v84 + 1) < (unsigned __int64)(v58 + 264) )
      {
        ImageHeaders = -1073741520;
        dword_140C65810 = 46;
        goto LABEL_94;
      }
      v27 = *((_QWORD *)&v84 + 1) - v58;
      v83 = v58 + *(_QWORD *)(v17 + 24);
      v59 = v57 + *((_QWORD *)&v84 + 1);
      v26 = v83;
      *((_QWORD *)&v84 + 1) = v59;
      v22 = v82;
    }
    else
    {
      if ( v24 > v21 )
      {
        ImageHeaders = -1073741520;
        dword_140C65810 = 47;
        goto LABEL_94;
      }
      v26 = (__int64)v22 + (unsigned int)v23;
      v27 = v21 - (unsigned int)v23;
    }
    ImageHeaders = MiVerifyImageHeader(a7, v26, v22, v27);
    if ( ImageHeaders )
    {
      v50 = 0LL;
      v80 = 0LL;
      if ( ImageHeaders < 0 )
        goto LABEL_154;
LABEL_56:
      if ( v9 )
        MiDeleteFileExtentList(v9);
      return ImageHeaders;
    }
    v28 = a7;
    *(_DWORD *)v94 = v74;
    v29 = *(_DWORD *)(a7 + 16);
    if ( !((v29 >> 12) + ((v29 & 0xFFF) != 0)) )
    {
      ImageHeaders = -1073741701;
      dword_140C65810 = 49;
      goto LABEL_94;
    }
    v30 = *(_OWORD *)(v26 + 4);
    v87 = *(_DWORD *)(v26 + 20);
    v31 = (unsigned __int16)v87 + 24;
    v86 = v30;
    if ( v74 + v31 + 40 * WORD1(v30) <= v74 )
    {
      ImageHeaders = -1073741701;
      dword_140C65810 = 50;
      goto LABEL_94;
    }
    v32 = v31 + v74;
    v33 = 40LL * WORD1(v30);
    v34 = v33 + v32;
    v83 = v32;
    v35 = 40 * WORD1(v30) + v31 + v74;
    if ( *(unsigned int *)(a7 + 24) >= v33 + v32 )
      v35 = *(_DWORD *)(a7 + 24);
    v75 = v35;
    if ( v35 > v29 )
    {
      ImageHeaders = -1073741701;
      dword_140C65810 = 48;
      goto LABEL_94;
    }
    if ( v34 > *((_QWORD *)&v84 + 1) )
    {
      v60 = ((_WORD)v26 + (_WORD)v31) & 0xFFF;
      v61 = v33 + v60 == 0;
      v62 = (__int128 *)(v33 + v60);
      v94 = v62;
      if ( v61 || (v63 = ((unsigned __int64)v62 + 4095) & 0xFFFFFFFFFFFFF000uLL, (unsigned __int64)v62 > v63) )
      {
        ImageHeaders = -1073741701;
        dword_140C65810 = 51;
        goto LABEL_94;
      }
      v64 = (__int64 *)MiCreateMdl(a2, a3, ((unsigned __int64)v62 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1LL);
      v65 = (__int64)v64;
      if ( !v64 )
      {
        ImageHeaders = -1073741670;
        dword_140C65810 = 52;
        goto LABEL_94;
      }
      *v64 = v17;
      v17 = (__int64)v64;
      v64[2] = v32 >> 12;
      if ( (a4 & 0x80000) != 0 )
      {
        v82 = 0LL;
        v66 = v63;
        v37 = FileObject;
        ImageHeaders = MiAllocateEntireImageFileExtents(FileObject, v66, v9, &v82);
        if ( ImageHeaders < 0 )
        {
          dword_140C65810 = 129;
          goto LABEL_94;
        }
        v9 = v82;
        v65 = v17;
        v78 = v82;
      }
      else
      {
        v37 = FileObject;
      }
      ImageHeaders = MiReadImageHeaders(v37, (ULONG_PTR)v9, v65, (__int64)&v84);
      if ( ImageHeaders < 0 )
      {
        dword_140C65810 = 53;
        goto LABEL_94;
      }
      if ( *((_QWORD *)&v84 + 1) < (unsigned __int64)v94 )
      {
        ImageHeaders = -1073741701;
        dword_140C65810 = 54;
        goto LABEL_94;
      }
      v28 = a7;
      v36 = *(_QWORD *)(v17 + 24) + (v83 & 0xFFF);
    }
    else
    {
      LODWORD(v36) = v26 + v31;
      v37 = FileObject;
    }
    if ( *(_DWORD *)(v28 + 12) < 0x1000u )
    {
      if ( (a4 & 0x100000) != 0 )
      {
        ImageHeaders = -1073741701;
        MiLogCreateImageFileMapFailure(v34, v37, *(unsigned int *)(v28 + 64), DWORD1(v86));
        if ( qword_140C37A18 )
          qword_140C37A18(v37, *(unsigned int *)(a7 + 64), DWORD1(v86));
        dword_140C65810 = 55;
        goto LABEL_94;
      }
      if ( !MiLegacyImageArchitecture(v86) )
      {
        ImageHeaders = -1073741701;
        dword_140C65810 = 56;
        goto LABEL_94;
      }
      a4 |= 0x400000u;
    }
    v38 = MiBuildImageControlArea(a3, v36, v28, (unsigned int)&v86, a4, (__int64)&FileSize, (__int64)v81);
    v15 = (__int64 *)v81[0];
    ImageHeaders = v38;
    if ( v38 >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v81[0] + 56LL) + 64LL) = v75;
      *((_WORD *)v15 + 30) ^= (*(_WORD *)a2 ^ *((_WORD *)v15 + 30)) & 0x3FF;
      if ( (a4 & 0x200) != 0 )
        *(_BYTE *)(*(_QWORD *)(*v15 + 56) + 51LL) |= 0x10u;
      v39 = *v15;
      v40 = 0;
      P = (PVOID *)*v15;
      if ( !v85 && !*(_QWORD *)v17 && (a4 & 0x410000) == 0 )
      {
        v41 = *(_DWORD *)(a7 + 24);
        if ( v41 < 0x1000 )
        {
          if ( (v41 & 0x1FF) != 0 )
            ++*(_QWORD *)(v39 + 16);
          v40 = 1;
        }
      }
      v42 = HIWORD(v87);
      if ( !v71
        && (IoIsDeviceEjectable((__int64)v37->DeviceObject)
         || (v42 & 0x400) != 0 && ((unsigned __int8)*(_DWORD *)(v43 + 52) & (unsigned __int8)v44) != 0
         || (v42 & 0x800) != 0 && (*(_DWORD *)(v43 + 52) & 0x10) != 0) )
      {
        v71 = v44;
      }
      v45 = *(_QWORD *)(v39 + 16);
      v80 = v45;
      if ( v45 )
      {
        v49 = a2;
        if ( !(unsigned int)MiChargeCommit(a2, v45, 0LL) )
        {
          v50 = P;
          v80 = 0LL;
          ImageHeaders = -1073741523;
          dword_140C65810 = 57;
LABEL_155:
          MiDeleteImageCreationMdls((PMDL)v17, 1);
          v70 = v80;
          if ( v80 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 17848), -v80);
            MiReturnCommit(v49, v70);
            v15 = (__int64 *)v81[0];
            v9 = v78;
          }
          if ( v15 )
          {
            MiUpdateSystemProtoPtesTree(v15[12], 0);
            ExFreePoolWithTag(v50[8], 0);
            ExFreePoolWithTag(v50, 0);
            ExFreePoolWithTag(v15, 0);
          }
          goto LABEL_56;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 17848), v80);
        v15 = (__int64 *)v81[0];
        v42 = HIWORD(v87);
        v9 = v78;
      }
      v46 = *((_DWORD *)v15 + 14);
      if ( (a4 & 0x400000) == 0 && (v46 & 0x20000) != 0 && (*(_DWORD *)(a7 + 20) & 0x1000000) == 0 )
        *((_DWORD *)v15 + 14) = v46 | 0x8000000;
      if ( v85 )
        MiInitializeImageProtos((__int64)v15, v85);
      if ( v40 )
        MiInitializeImageHeaderPage(v89, *(unsigned int *)(a7 + 24));
      v47 = a7;
      if ( *(_WORD *)(a7 + 48) == 267 )
        *((_BYTE *)P + 14) |= 0x40u;
      v48 = v71;
      if ( v71 )
      {
        v67 = *((_DWORD *)v15 + 14) | 0x800;
        *((_DWORD *)v15 + 14) = v67;
        if ( (a4 & 0x200080) != 0 )
          *((_DWORD *)v15 + 14) = v67 | 0x40000;
        if ( (PerfGlobalGroupMask & 4) != 0 )
        {
          DeviceObject = (__int64)v37->DeviceObject;
          *(_QWORD *)&v90 = v37->FsContext;
          WORD6(v90) = v42;
          DWORD2(v90) = *(_DWORD *)(DeviceObject + 52);
          IsDeviceEjectable = IoIsDeviceEjectable(DeviceObject);
          v96 = 0;
          v95 = 16;
          HIWORD(v90) = (a4 >> 21) & 1 | (2 * ((2 * ((a4 >> 7) & 1)) | IsDeviceEjectable));
          v94 = &v90;
          EtwTraceKernelEvent((int)&v94, 1, 4u, 617, 4200450);
          v47 = a7;
        }
        v48 = v71;
      }
      if ( (a4 & 0x10000) == 0 )
        goto LABEL_55;
      ImageHeaders = MiEnableImageDirectMap(
                       (__int64)v37,
                       v15,
                       v47,
                       (unsigned __int64)v9,
                       (a4 >> 18) & 1,
                       (a4 >> 19) & 1,
                       v48);
      if ( ImageHeaders >= 0 )
      {
        v9 = 0LL;
        if ( (*((_BYTE *)v15 + 62) & 0xC) == 4 )
        {
          MiDeleteImageCreationMdls((PMDL)v17, 1);
          v17 = 0LL;
        }
LABEL_55:
        ImageHeaders = 0;
        *v92 = P;
        *v93 = v17;
        goto LABEL_56;
      }
      dword_140C65810 = 58;
    }
    v50 = P;
    goto LABEL_154;
  }
  dword_140C65810 = 33;
  if ( result == -1073741638 )
    return -1073741792;
  return result;
}
