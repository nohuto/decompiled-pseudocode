/*
 * XREFs of PiSwInit @ 0x140B3BD2C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x14031EC00 (RtlInitializeGenericTableAvl.c)
 *     IoCreateDriver @ 0x1408104D0 (IoCreateDriver.c)
 */

NTSTATUS PiSwInit()
{
  NTSTATUS result; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  DWORD1(v1) = 0;
  RtlInitializeGenericTableAvl(
    &PiSwDeviceInstanceTable,
    (PRTL_AVL_COMPARE_ROUTINE)PiSwDeviceCompareObjects,
    (PRTL_AVL_ALLOCATE_ROUTINE)PiSwAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)PiSwFreeGenericTableEntry,
    0LL);
  RtlInitializeGenericTableAvl(
    &PiSwBusRelationsTable,
    (PRTL_AVL_COMPARE_ROUTINE)PiSwBusRelationsCompareInstancePath,
    (PRTL_AVL_ALLOCATE_ROUTINE)PiSwAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)PiSwFreeGenericTableEntry,
    0LL);
  qword_140C5B258 = (__int64)&PiSwGlobalPdoAssociationList;
  PiSwGlobalPdoAssociationList = (__int64)&PiSwGlobalPdoAssociationList;
  result = ExInitializeResourceLite(&PiSwLockObj);
  if ( result >= 0 )
  {
    LODWORD(v1) = 3014700;
    *((_QWORD *)&v1 + 1) = L"\\Driver\\SoftwareDevice";
    return IoCreateDriver(&v1, (__int64 (__fastcall *)(void **, _QWORD))PiSwPdoDriverEntry);
  }
  return result;
}
