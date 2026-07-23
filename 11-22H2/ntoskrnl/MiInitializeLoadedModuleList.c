/*
 * XREFs of MiInitializeLoadedModuleList @ 0x140B5FD1C
 * Callers:
 *     MiInitializeDriverImages @ 0x140B497A0 (MiInitializeDriverImages.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     RtlpxLookupFunctionTable @ 0x1402A3B60 (RtlpxLookupFunctionTable.c)
 *     KasanDriverLoadImage @ 0x14035FA60 (KasanDriverLoadImage.c)
 *     RtlRemoveInvertedFunctionTable @ 0x140369610 (RtlRemoveInvertedFunctionTable.c)
 *     MiLinkHotPatchToBase @ 0x140642718 (MiLinkHotPatchToBase.c)
 *     MiFreeLoadedImportList @ 0x140696D20 (MiFreeLoadedImportList.c)
 *     MmAcquireLoadLock @ 0x140704660 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407049E0 (MmReleaseLoadLock.c)
 *     MiConstructLoaderEntry @ 0x140704A3C (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x1407059B4 (MiLockdownSections.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x140830F70 (MiCaptureBootDriverRetpolineInfo.c)
 *     NtSetDebugFilterState @ 0x1408310C0 (NtSetDebugFilterState.c)
 *     MiAddEntryToImportList @ 0x140A2B00C (MiAddEntryToImportList.c)
 *     MiBuildImportsForBootDrivers @ 0x140B5FFA4 (MiBuildImportsForBootDrivers.c)
 *     MiLocateKernelSections @ 0x140B60314 (MiLocateKernelSections.c)
 */

__int64 __fastcall MiInitializeLoadedModuleList(__int64 a1)
{
  bool v2; // r15
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  PVOID v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  struct _KTHREAD *Lock; // rsi
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  PVOID *i; // rbx
  __int64 v13; // rdx
  int v15; // ebx
  unsigned __int64 v16; // rcx
  PVOID v17; // rdi
  _QWORD *v18; // rax
  __int128 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF

  v21 = 0LL;
  qword_140C659C8 = (__int64)&qword_140C659C0;
  qword_140C659C0 = (__int64)&qword_140C659C0;
  v2 = (KiSpeculationFeatures & 0x20000000000LL) != 0 || (KiSpeculationFeatures & 0x40000000000LL) != 0;
  ExInitializeResourceLite(&PsLoadedModuleResource);
  ExpCovPushLock = 0LL;
  qword_140C2CCB8 = (__int64)&ExpCovUnloadedModuleList;
  ExpCovUnloadedModuleList = (__int64)&ExpCovUnloadedModuleList;
  *(&PsLoadedModuleList + 1) = &PsLoadedModuleList;
  PsLoadedModuleList = &PsLoadedModuleList;
  NtSetDebugFilterState(0x7Eu, 0, 1u);
  v3 = *(_QWORD *)(a1 + 16);
  MiLocateKernelSections(v3);
  while ( v3 != a1 + 16 )
  {
    if ( (int)MiConstructLoaderEntry(v3, (const void **)(v3 + 88), (const void **)(v3 + 72), 0, 1, &v21) < 0 )
      return 0LL;
    *(_QWORD *)(v3 + 144) = v21;
    v4 = v21;
    *(_DWORD *)(v21 + 196) |= 0x100u;
    v5 = v21;
    if ( qword_140C65A18 == v3 )
      qword_140C65A18 = v21;
    v6 = *(PVOID *)(v21 + 48);
    if ( v6 == PsNtosImageBase && (MiFlags & 0x40000) == 0 )
    {
      v15 = *(_DWORD *)(v21 + 64);
      v16 = *(_QWORD *)(v21 + 48);
      v20 = 0LL;
      v19 = 0LL;
      RtlpxLookupFunctionTable(v16, (__int64)&v19);
      qword_140E00040 = v20;
      xmmword_140E00030 = v19;
      LODWORD(qword_140E00040) = v15;
      RtlRemoveInvertedFunctionTable((__int64)v6);
      v5 = v21;
    }
    MiLockdownSections(v5);
    if ( v2 )
    {
      v7 = v21;
      if ( (*(_DWORD *)(v21 + 104) & 0x800000) != 0 )
        goto LABEL_13;
      v8 = MiCaptureBootDriverRetpolineInfo(*(PVOID *)(v21 + 48), *(unsigned int *)(v21 + 64), (_QWORD *)(v4 + 320));
      if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073741637 )
        return 0LL;
    }
    v7 = v21;
LABEL_13:
    if ( (int)KasanDriverLoadImage(v7, 1) < 0 )
      return 0LL;
    v3 = *(_QWORD *)v3;
  }
  Lock = MmAcquireLoadLock();
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL);
  v11 = (_QWORD *)*v10;
  if ( (_QWORD *)*v10 != v10 )
  {
    do
    {
      if ( (v11[5] & 3) == 1 )
      {
        *(_QWORD *)(*(_QWORD *)(v11[10] + 144LL) + 280LL) = *(_QWORD *)(v11[11] + 144LL);
        MiLinkHotPatchToBase(*(_QWORD *)(v11[10] + 144LL), *(_QWORD *)(v11[11] + 144LL), *((_DWORD *)v11 + 17));
      }
      v11 = (_QWORD *)*v11;
    }
    while ( v11 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 3784LL) );
  }
  MiBuildImportsForBootDrivers();
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( (*((_DWORD *)i + 49) & 0x20) == 0 )
    {
      v13 = (__int64)i[35];
      if ( v13 )
      {
        v17 = i[17];
        if ( v17 != (PVOID)1 )
        {
          v18 = MiAddEntryToImportList((__int64 *)i[17], v13);
          if ( !v18 )
            return 0LL;
          i[17] = v18;
          MiFreeLoadedImportList(v17);
        }
      }
    }
  }
  MmReleaseLoadLock((__int64)Lock);
  return 1LL;
}
