/*
 * XREFs of MiInitializeMemoryEvents @ 0x14081C068
 * Callers:
 *     MmCreatePartition @ 0x1403AC88C (MmCreatePartition.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402978D0 (RtlGetDaclSecurityDescriptor.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1403989E8 (MiSignalNonPagedPoolWatchers.c)
 *     MiUpdateAvailableEvents @ 0x1403AE900 (MiUpdateAvailableEvents.c)
 *     MiCreateMemoryEvent @ 0x14081C194 (MiCreateMemoryEvent.c)
 *     MiCreatePartitionNamespace @ 0x14081C324 (MiCreatePartitionNamespace.c)
 *     MiCreateMemoryEventSD @ 0x14085F4E0 (MiCreateMemoryEventSD.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     MiInitializePagedPoolEvents @ 0x140B72FB0 (MiInitializePagedPoolEvents.c)
 */

_BOOL8 __fastcall MiInitializeMemoryEvents(unsigned __int16 *a1)
{
  int MemoryEventSD; // ebx
  __int64 v3; // rsi
  int v4; // r8d
  __int64 v5; // r10
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v8; // [rsp+60h] [rbp-10h]
  BOOLEAN DaclPresent; // [rsp+A8h] [rbp+38h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+B0h] [rbp+40h] BYREF
  PACL Dacl; // [rsp+B8h] [rbp+48h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v8 = 0LL;
  MemoryEventSD = MiCreateMemoryEventSD(SecurityDescriptor);
  if ( MemoryEventSD < 0 )
    goto LABEL_11;
  MemoryEventSD = MiCreatePartitionNamespace(a1);
  if ( MemoryEventSD < 0 )
    goto LABEL_11;
  v3 = 0LL;
  do
  {
    v4 = 0;
    if ( (unsigned int)v3 < 4 )
    {
      if ( a1 != MiSystemPartition )
        goto LABEL_7;
      LODWORD(v5) = 0;
    }
    else
    {
      v5 = *((_QWORD *)a1 + 32);
      LOBYTE(v4) = a1 == MiSystemPartition;
    }
    MemoryEventSD = MiCreateMemoryEvent(
                      (unsigned int)&MiMemoryEventNames[8 * v3],
                      v3,
                      v5,
                      (unsigned int)SecurityDescriptor,
                      v4,
                      (__int64)&a1[4 * (unsigned int)v3 + 136],
                      (__int64)&a1[4 * v3 + 180]);
    if ( MemoryEventSD < 0 )
      goto LABEL_11;
LABEL_7:
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < 0xB );
  if ( a1 == MiSystemPartition )
  {
    MiInitializePagedPoolEvents();
    MiSignalNonPagedPoolWatchers();
  }
  MiUpdateAvailableEvents(a1);
  MemoryEventSD = 0;
LABEL_11:
  Dacl = 0LL;
  DaclPresent = 0;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted) >= 0 && DaclPresent )
    ExFreePoolWithTag(Dacl, 0);
  return MemoryEventSD >= 0;
}
