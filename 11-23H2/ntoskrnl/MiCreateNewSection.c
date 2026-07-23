/*
 * XREFs of MiCreateNewSection @ 0x1407466E0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140723550 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiSectionCreated @ 0x140287DC4 (MiSectionCreated.c)
 *     IoSetTopLevelIrp @ 0x1402A20C0 (IoSetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x1402E41BC (MiReleaseControlAreaWaiters.c)
 *     MiFinalizeImageHeaderPage @ 0x1403306C4 (MiFinalizeImageHeaderPage.c)
 *     MiMakeImageReadOnly @ 0x14035CF3C (MiMakeImageReadOnly.c)
 *     MiReleaseImageSection @ 0x14035D634 (MiReleaseImageSection.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     MiDeleteImageCreationMdls @ 0x1406A7448 (MiDeleteImageCreationMdls.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 *     MiValidateSectionSigningPolicy @ 0x1406AA5DC (MiValidateSectionSigningPolicy.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406AA89C (SeGetImageRequiredSigningLevel.c)
 *     MiParseComAndCetHeaders @ 0x1406AB9A4 (MiParseComAndCetHeaders.c)
 *     FsRtlReleaseFile @ 0x140723B10 (FsRtlReleaseFile.c)
 *     MiCreateDataFileMap @ 0x140745BD0 (MiCreateDataFileMap.c)
 *     MiEnablePartitionMappedWrites @ 0x140746D88 (MiEnablePartitionMappedWrites.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093D1E8 (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(__int64 a1, __int64 *a2)
{
  unsigned __int16 **v3; // rdi
  struct _FILE_OBJECT *v4; // r13
  int v5; // r15d
  LARGE_INTEGER v6; // rsi
  unsigned __int16 *v7; // rdi
  int v9; // r14d
  unsigned int v10; // eax
  int v11; // r12d
  NTSTATUS ImageFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v14; // r14
  signed __int64 v15; // rax
  __int64 v16; // r14
  int v17; // esi
  _QWORD *v18; // r15
  __int64 *v19; // r12
  unsigned int v20; // edx
  __int64 v21; // r8
  int v22; // ecx
  unsigned int v23; // r15d
  unsigned int v24; // ecx
  int Blink; // r12d
  int v26; // eax
  char v27; // r9
  char v28; // al
  int v29; // edx
  int v30; // r12d
  int DirectImageOriginalBase; // eax
  __int64 v32; // rax
  char v33; // cl
  char v34; // r15
  char v35; // cl
  PMDL v36; // rbx
  struct _MDL *v37; // r15
  ULONG i; // esi
  char v39; // [rsp+50h] [rbp-89h]
  char v40; // [rsp+51h] [rbp-88h]
  _WORD v41[7]; // [rsp+52h] [rbp-87h] BYREF
  __int64 v42; // [rsp+60h] [rbp-79h] BYREF
  __int64 *v43; // [rsp+68h] [rbp-71h]
  __int64 v44; // [rsp+70h] [rbp-69h]
  PMDL MemoryDescriptorList; // [rsp+78h] [rbp-61h] BYREF
  __int64 v46[14]; // [rsp+80h] [rbp-59h] BYREF

  v43 = a2;
  v42 = 0LL;
  v44 = 0LL;
  memset(v46, 0, sizeof(v46));
  v3 = *(unsigned __int16 ***)(a1 + 176);
  v4 = *(struct _FILE_OBJECT **)(a1 + 56);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(LARGE_INTEGER *)(a1 + 152);
  v39 = *(_BYTE *)(a1 + 24);
  v41[0] = 0;
  *(_QWORD *)&v41[1] = 0LL;
  v40 = 0;
  if ( v3 )
    v7 = *v3;
  else
    v7 = MiSystemPartition;
  if ( (*((_DWORD *)v7 + 1) & 0x80u) != 0 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v4);
      *(_DWORD *)a1 &= ~2u;
    }
    return 3221225659LL;
  }
  v9 = MiEnablePartitionMappedWrites(v7);
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 172);
    MemoryDescriptorList = 0LL;
    v11 = v5 & 0x1000000;
    if ( (v5 & 0x1000000) != 0 )
      ImageFileMap = MiCreateImageFileMap(
                       v4,
                       (unsigned __int64)v7,
                       v10,
                       *(_DWORD *)a1,
                       (PVOID **)&v42,
                       (__int64 *)&MemoryDescriptorList,
                       (__int64)v46,
                       (__int128 *)&v41[3]);
    else
      ImageFileMap = MiCreateDataFileMap(v4, v7, &v42, v6, *(_DWORD *)(a1 + 28), v5, v10, *(_DWORD *)a1);
    ImageRequiredSigningLevel = ImageFileMap;
    if ( ImageFileMap < 0 )
    {
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
        FsRtlReleaseFile(v4);
        *(_DWORD *)a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v14 = v42;
    *v43 = v42;
    if ( v6.QuadPart )
    {
      *(LARGE_INTEGER *)(a1 + 128) = v6;
    }
    else
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
      v14 = v42;
      *(_QWORD *)(a1 + 128) = v15;
    }
    v16 = *(_QWORD *)v14;
    if ( (*(_DWORD *)a1 & 0x1000000) != 0 )
      *(_BYTE *)(v16 + 62) |= 1u;
    if ( (*(_DWORD *)a1 & 0x2000) != 0
      && (v4->DeviceObject->Characteristics & 0x10) == 0
      && (!v11 || (v46[1] & 0xFFF) == 0) )
    {
      *(_DWORD *)(v16 + 56) |= 0x40000000u;
    }
    if ( (*(_DWORD *)a1 & 0x4000) != 0 )
      *(_DWORD *)(v16 + 56) |= 0x20000u;
    v17 = 2;
    v18 = (_QWORD *)MiSectionCreated((_DWORD *)a1, (__int64)v4, v16, (__int64)MemoryDescriptorList);
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v4);
      *(_DWORD *)a1 &= ~2u;
    }
    if ( !v11 )
      goto LABEL_117;
    v19 = *(__int64 **)(v42 + 56);
    v43 = v19;
    if ( !v46[11] && !*((_BYTE *)v19 + 50) )
      *(_BYTE *)(v42 + 15) |= 1u;
    if ( (*(_DWORD *)(v16 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x100000) != 0 )
      {
        dword_140C65810 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_120:
        MiDeleteImageCreationMdls(MemoryDescriptorList, 1);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified(v16, *(_DWORD *)(a1 + 168));
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C65810 = 6;
        goto LABEL_120;
      }
    }
    ImageRequiredSigningLevel = MiParseComAndCetHeaders((__int64 *)v16, (unsigned int *)v46, (_BYTE *)v41 + 1);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C65810 = 4;
      goto LABEL_120;
    }
    v20 = *(_DWORD *)a1;
    v21 = 4LL;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v22 = 4;
    }
    else if ( (v20 & 0x20) != 0 )
    {
      v22 = 1;
    }
    else if ( (v20 & 0x10) != 0 )
    {
      v22 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v22 = 0;
    }
    v23 = v22 | 0x10;
    if ( (v20 & 0x800) == 0 )
      v23 = v22;
    v24 = *(_DWORD *)a1;
    if ( (v20 & 0x8400) == 0 || (v20 & 0x10) != 0 )
    {
      v27 = v39;
    }
    else
    {
      LOBYTE(v21) = v39;
      Blink = (int)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(v4, v23, v21, 0, (char *)v41);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C65810 = 7;
        goto LABEL_120;
      }
      v24 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x800) == 0 )
      {
        if ( v39 )
        {
          v26 = *(_DWORD *)&v41[1];
          if ( (Blink & 0x800000) != 0 )
            v26 = 1;
          *(_DWORD *)&v41[1] = v26;
        }
        if ( (Blink & 0x1000000) != 0 )
        {
          v40 = 8;
        }
        else if ( (Blink & 0x2000000) != 0 )
        {
          v40 = 6;
        }
      }
      v27 = v41[0];
      v19 = v43;
      v39 = v41[0];
      *(_BYTE *)(a1 + 24) = v41[0];
    }
    if ( (v24 & 0x100000) != 0 )
    {
      v28 = v27;
      v23 |= 0x40000000u;
      if ( !v27 )
        v28 = 4;
      v27 = v28;
      v39 = v28;
    }
    v29 = v23 | 0x20000000;
    if ( (v24 & 0x800000) == 0 )
      v29 = v23;
    LODWORD(v43) = v29;
    if ( (MiFlags & 0x20000) != 0 )
    {
      v24 |= 0x8000u;
      *(_DWORD *)a1 = v24;
      if ( !v27 )
      {
        v27 = 1;
        v39 = 1;
      }
    }
    if ( (v24 & 0x8000) == 0 )
    {
      if ( (v24 & 0x400) == 0 )
        goto LABEL_83;
      if ( !v27 && *((char *)v19 + 46) >= 0 )
        goto LABEL_81;
    }
    *(_DWORD *)&v41[1] |= 2u;
    if ( (v24 & 0x400) != 0 )
    {
LABEL_81:
      if ( v40 )
        *(_DWORD *)&v41[1] |= 4u;
    }
LABEL_83:
    if ( (v24 & 0x40) == 0 )
      v17 = (v24 & 0x20) != 0;
    v30 = 0;
    if ( (*(_BYTE *)(v16 + 62) & 0xC) != 0 )
    {
      DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(v4);
      ImageRequiredSigningLevel = DirectImageOriginalBase;
      if ( DirectImageOriginalBase >= 0 )
      {
        v32 = v44;
        goto LABEL_92;
      }
      if ( DirectImageOriginalBase != -1073741637 && DirectImageOriginalBase != -1073741808 )
      {
        dword_140C65810 = 8;
        goto LABEL_120;
      }
    }
    v32 = -1LL;
    v44 = -1LL;
LABEL_92:
    v33 = v41[1];
    v34 = HIBYTE(v41[0]);
    if ( (v41[1] & 6) != 0 )
    {
      if ( v32 != -1 )
      {
        ImageRequiredSigningLevel = MiRelocateImage(v42, (__int64)v46, *(int *)&v41[3], v17, v32, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C65810 = 9;
          goto LABEL_120;
        }
        v30 = 1;
        if ( v34 )
          MiMakeImageReadOnly(v16);
        v33 = v41[1];
      }
      v35 = v33 | 8;
      if ( (*(_DWORD *)a1 & 0x10000000) == 0 )
        v35 = v41[1];
      ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                    0,
                                    (__int64)v4,
                                    v16,
                                    *(_DWORD *)(a1 + 168),
                                    *(_QWORD *)(a1 + 160),
                                    (int)v43,
                                    v35,
                                    v39,
                                    v40);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C65810 = 10;
        goto LABEL_120;
      }
      if ( v30 )
        goto LABEL_108;
      v32 = v44;
    }
    ImageRequiredSigningLevel = MiRelocateImage(v42, (__int64)v46, *(int *)&v41[3], v17, v32, 0);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C65810 = 11;
      goto LABEL_120;
    }
    if ( v34 )
      MiMakeImageReadOnly(v16);
LABEL_108:
    v36 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      do
      {
        if ( (v36->MdlFlags & 4) == 0 )
        {
          v37 = v36 + 1;
          for ( i = v36->ByteCount >> 12; i; --i )
          {
            if ( v37->Next != (struct _MDL *)-1LL )
              MiFinalizeImageHeaderPage(48 * (__int64)v37->Next - 0x220000000000LL);
            v37 = (struct _MDL *)((char *)v37 + 8);
          }
        }
        v36 = v36->Next;
      }
      while ( v36 );
      v36 = MemoryDescriptorList;
    }
    MiDeleteImageCreationMdls(v36, 0);
    v18 = (_QWORD *)MiReleaseImageSection((__int64)v4, v16);
LABEL_117:
    MiReleaseControlAreaWaiters(v18);
    return (unsigned int)ImageRequiredSigningLevel;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    FsRtlReleaseFile(v4);
    *(_DWORD *)a1 &= ~2u;
  }
  return (unsigned int)v9;
}
