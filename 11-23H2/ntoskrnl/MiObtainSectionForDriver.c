/*
 * XREFs of MiObtainSectionForDriver @ 0x1407049C8
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8D0 (ObDereferenceObjectDeferDelete.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiFindDataTableEntryBySection @ 0x1406962B4 (MiFindDataTableEntryBySection.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 *     MiCreateSectionForDriver @ 0x1407D4418 (MiCreateSectionForDriver.c)
 *     MiAllocateTempLoaderEntry @ 0x1407E5BBC (MiAllocateTempLoaderEntry.c)
 */

__int64 __fastcall MiObtainSectionForDriver(
        PCUNICODE_STRING String1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *Object)
{
  __int64 *v5; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 *v9; // rdi
  PVOID *v12; // rbx
  int v13; // ebx
  __int64 v14; // rdx
  __int16 v15; // r8
  __int64 TempLoaderEntry; // rax
  int SystemRegionType; // eax
  PVOID *DataTableEntryBySection; // rax

  v5 = Object;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v9 = 0LL;
  *v5 = 0LL;
  while ( 1 )
  {
    v12 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList != &PsLoadedModuleList )
    {
      while ( !RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v12 + 9), 1u) )
      {
        v12 = (PVOID *)*v12;
        if ( v12 == &PsLoadedModuleList )
          goto LABEL_5;
      }
LABEL_16:
      if ( v9 )
        ObDereferenceObjectDeferDelete(v9);
      SystemRegionType = MiGetSystemRegionType((unsigned __int64)v12[6]);
      if ( (a4 & 1) != 0 )
      {
        if ( SystemRegionType == 1 )
        {
LABEL_20:
          *v5 = (__int64)v12;
          return 272LL;
        }
      }
      else if ( SystemRegionType != 1 )
      {
        goto LABEL_20;
      }
      return 3221225496LL;
    }
LABEL_5:
    if ( v9 )
    {
      TempLoaderEntry = MiAllocateTempLoaderEntry(v9);
      if ( TempLoaderEntry )
      {
        *v5 = TempLoaderEntry;
        return 0LL;
      }
      v13 = -1073741670;
      goto LABEL_30;
    }
    if ( !a3 )
      MmReleaseLoadLock(CurrentThread);
    v13 = MiCreateSectionForDriver(a2, a3, a4, &Object);
    if ( !a3 )
      MmAcquireLoadLock();
    if ( v13 < 0 )
      return (unsigned int)v13;
    v9 = Object;
    v14 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)Object) + 56LL);
    if ( *(__int16 *)(v14 + 46) < v15 && *(_DWORD *)(v14 + 32) == 1 && (a4 & 1) == 0 )
      break;
    if ( (a4 & 0x40000000) != 0 )
    {
      DataTableEntryBySection = MiFindDataTableEntryBySection();
      v12 = DataTableEntryBySection;
      if ( DataTableEntryBySection )
        goto LABEL_16;
    }
  }
  v13 = -1073741800;
LABEL_30:
  ObDereferenceObjectDeferDelete(v9);
  return (unsigned int)v13;
}
