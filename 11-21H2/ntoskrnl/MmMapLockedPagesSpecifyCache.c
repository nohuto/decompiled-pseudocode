/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x140308CD0
 * Callers:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     KeFlushIoBuffers @ 0x140232370 (KeFlushIoBuffers.c)
 *     sub_14024CCD0 @ 0x14024CCD0 (sub_14024CCD0.c)
 *     sub_140261A20 @ 0x140261A20 (sub_140261A20.c)
 *     sub_14028F324 @ 0x14028F324 (sub_14028F324.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_140338080 @ 0x140338080 (sub_140338080.c)
 *     sub_14037AC18 @ 0x14037AC18 (sub_14037AC18.c)
 *     sub_14037BD80 @ 0x14037BD80 (sub_14037BD80.c)
 *     sub_14037DA00 @ 0x14037DA00 (sub_14037DA00.c)
 *     sub_14037E338 @ 0x14037E338 (sub_14037E338.c)
 *     sub_1403818D0 @ 0x1403818D0 (sub_1403818D0.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_1403B2614 @ 0x1403B2614 (sub_1403B2614.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     sub_1403DCA14 @ 0x1403DCA14 (sub_1403DCA14.c)
 *     sub_140456CC6 @ 0x140456CC6 (sub_140456CC6.c)
 *     sub_140457A42 @ 0x140457A42 (sub_140457A42.c)
 *     sub_14045D5EA @ 0x14045D5EA (sub_14045D5EA.c)
 *     sub_14045D8D2 @ 0x14045D8D2 (sub_14045D8D2.c)
 *     sub_140503D4C @ 0x140503D4C (sub_140503D4C.c)
 *     sub_140511BD0 @ 0x140511BD0 (sub_140511BD0.c)
 *     sub_140513310 @ 0x140513310 (sub_140513310.c)
 *     sub_140514560 @ 0x140514560 (sub_140514560.c)
 *     sub_140514A70 @ 0x140514A70 (sub_140514A70.c)
 *     sub_1405158A0 @ 0x1405158A0 (sub_1405158A0.c)
 *     sub_1405160A0 @ 0x1405160A0 (sub_1405160A0.c)
 *     sub_1405164D0 @ 0x1405164D0 (sub_1405164D0.c)
 *     sub_14053A460 @ 0x14053A460 (sub_14053A460.c)
 *     sub_14057B748 @ 0x14057B748 (sub_14057B748.c)
 *     MmMapLockedPages @ 0x140585870 (MmMapLockedPages.c)
 *     sub_14059A568 @ 0x14059A568 (sub_14059A568.c)
 *     sub_14059FECC @ 0x14059FECC (sub_14059FECC.c)
 *     sub_1405A1128 @ 0x1405A1128 (sub_1405A1128.c)
 *     sub_1405A1D20 @ 0x1405A1D20 (sub_1405A1D20.c)
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 *     sub_1405A605C @ 0x1405A605C (sub_1405A605C.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1405E22E8 @ 0x1405E22E8 (sub_1405E22E8.c)
 *     sub_1405E2410 @ 0x1405E2410 (sub_1405E2410.c)
 *     sub_1405E281C @ 0x1405E281C (sub_1405E281C.c)
 *     sub_1405FD594 @ 0x1405FD594 (sub_1405FD594.c)
 *     sub_1405FF19C @ 0x1405FF19C (sub_1405FF19C.c)
 *     sub_1405FF390 @ 0x1405FF390 (sub_1405FF390.c)
 *     sub_140617430 @ 0x140617430 (sub_140617430.c)
 *     sub_1406333A8 @ 0x1406333A8 (sub_1406333A8.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     sub_1406ABC90 @ 0x1406ABC90 (sub_1406ABC90.c)
 *     sub_1406E0358 @ 0x1406E0358 (sub_1406E0358.c)
 *     sub_1407084B0 @ 0x1407084B0 (sub_1407084B0.c)
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 *     sub_1407F5914 @ 0x1407F5914 (sub_1407F5914.c)
 *     sub_140857D34 @ 0x140857D34 (sub_140857D34.c)
 *     sub_14090943C @ 0x14090943C (sub_14090943C.c)
 *     sub_140933A9C @ 0x140933A9C (sub_140933A9C.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     sub_14093B898 @ 0x14093B898 (sub_14093B898.c)
 *     sub_14093BBD8 @ 0x14093BBD8 (sub_14093BBD8.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140940CB0 (IoReserveKsrPersistentMemoryEx.c)
 *     sub_140941654 @ 0x140941654 (sub_140941654.c)
 *     sub_140971B68 @ 0x140971B68 (sub_140971B68.c)
 *     sub_140978430 @ 0x140978430 (sub_140978430.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 *     sub_140A06B80 @ 0x140A06B80 (sub_140A06B80.c)
 *     sub_140A07780 @ 0x140A07780 (sub_140A07780.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 *     sub_140A4FC08 @ 0x140A4FC08 (sub_140A4FC08.c)
 *     sub_140A872C8 @ 0x140A872C8 (sub_140A872C8.c)
 *     sub_140A88624 @ 0x140A88624 (sub_140A88624.c)
 *     sub_140A88D98 @ 0x140A88D98 (sub_140A88D98.c)
 *     sub_140AA00D0 @ 0x140AA00D0 (sub_140AA00D0.c)
 *     sub_140AA0838 @ 0x140AA0838 (sub_140AA0838.c)
 *     sub_140AAB320 @ 0x140AAB320 (sub_140AAB320.c)
 *     sub_140B31500 @ 0x140B31500 (sub_140B31500.c)
 * Callees:
 *     sub_1402155C8 @ 0x1402155C8 (sub_1402155C8.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     sub_140592398 @ 0x140592398 (sub_140592398.c)
 *     sub_1405B6C18 @ 0x1405B6C18 (sub_1405B6C18.c)
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 */

PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  signed int v6; // ebp
  __int64 ByteOffset; // rcx
  char *v10; // rcx
  unsigned __int64 v11; // rsi
  ULONG v12; // ecx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // rax
  _QWORD *v17; // r14
  unsigned int v18; // r12d
  void *v19; // rdi
  int v20; // eax
  CSHORT MdlFlags; // cx
  char v22; // si
  CSHORT v23; // cx
  unsigned int v24; // esi
  unsigned int v26; // eax
  int v27; // [rsp+68h] [rbp+10h] BYREF

  v6 = Priority;
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v27 = 0;
  v10 = (char *)MemoryDescriptorList->StartVa + ByteOffset;
  if ( AccessMode )
  {
    v19 = (void *)sub_140693498(
                    (_DWORD)MemoryDescriptorList,
                    (_DWORD)v10,
                    CacheType,
                    (_DWORD)RequestedAddress,
                    Priority);
    if ( !v19 )
      return 0LL;
    return v19;
  }
  v11 = (((unsigned __int16)v10 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
  if ( (Priority & 0x20) == 0 )
  {
    v12 = Priority & 0x3FFFFFFF;
    v13 = 512LL;
    if ( (Priority & 0x3FFFFFFF) != 0x10 )
      v13 = 2048LL;
    v14 = v12 == 16 ? 0x2000000LL : 0x4000000 / ((unsigned int)(v12 == 16) + 1);
    if ( ((qword_140C51930 << 9) - qword_140C534F0) << 12 < v14
      && (v13 >= qword_140C53510 || v11 >= qword_140C53510 - v13)
      && (*((_DWORD *)KeGetCurrentThread() + 345) & 2) == 0
      && (KeGetPcr()[36].Unused0[2] & 0x10001) == 0 )
    {
      ++dword_140C534E0;
      return 0LL;
    }
  }
  v15 = v11;
  if ( dword_140D069EC )
    v15 = v11 + 1;
  v16 = sub_1403095B0(&qword_140C534C0, v15);
  v17 = (_QWORD *)v16;
  if ( !v16 )
  {
    if ( _bittest16(&MemoryDescriptorList->MdlFlags, 0xDu) || !BugCheckOnFailure )
      return 0LL;
    goto LABEL_38;
  }
  v18 = ((v6 >> 31) & 0xFFFFFFFD) + 4;
  v19 = (void *)(MemoryDescriptorList->ByteOffset + (v16 << 25 >> 16));
  if ( (dword_140D06880 & 0x8000) == 0 && (v6 & 0x40000000) == 0 )
    v18 |= 2u;
  if ( CacheType )
  {
    if ( CacheType == MmWriteCombined )
      v18 |= 0x18u;
  }
  else
  {
    v18 |= 8u;
  }
  v20 = sub_140308F00(v16, v11, (int)MemoryDescriptorList + 48, v18, 0, (__int64)&v27);
  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( v20 >= 0 )
  {
    v22 = v27;
    v23 = MdlFlags | 1;
    MemoryDescriptorList->MappedSystemVa = v19;
    MemoryDescriptorList->MdlFlags = v23;
    v24 = v22 & 1;
    if ( v24 )
    {
      sub_1402155C8((unsigned __int64)v19);
      MemoryDescriptorList->MdlFlags |= 0x800u;
      v23 = MemoryDescriptorList->MdlFlags;
    }
    if ( (dword_140D051BC & 1) != 0 )
    {
      if ( dword_140D069EC )
        v24 |= 2u;
      v26 = sub_14033D7D0(v18);
      sub_1405B6C18(MemoryDescriptorList, 0LL, v24, v26);
      v23 = MemoryDescriptorList->MdlFlags;
    }
    if ( (v23 & 0x10) != 0 )
      MemoryDescriptorList->MdlFlags = v23 | 0x20;
    return v19;
  }
  if ( (MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
LABEL_38:
    sub_140592398((unsigned int)v11);
  sub_1402BB6D0((__int64)&qword_140C534C0, v17, v15);
  return 0LL;
}
