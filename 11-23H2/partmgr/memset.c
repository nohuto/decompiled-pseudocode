/*
 * XREFs of memset @ 0x1C000BA40
 * Callers:
 *     ?PmTakePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@E@Z @ 0x1C0004A44 (-PmTakePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@E@Z.c)
 *     PmGetPartitionAttributesMbr @ 0x1C0004CCC (PmGetPartitionAttributesMbr.c)
 *     ?DeleteMetadata@SC_DRIVE@@QEAAJXZ @ 0x1C0004FF0 (-DeleteMetadata@SC_DRIVE@@QEAAJXZ.c)
 *     ?ZeroMetadata@SC_DRIVE@@QEAAJXZ @ 0x1C0005388 (-ZeroMetadata@SC_DRIVE@@QEAAJXZ.c)
 *     ?AddEntries@SC_DISK_LAYOUT@@QEAAPEAV1@K@Z @ 0x1C0005AA8 (-AddEntries@SC_DISK_LAYOUT@@QEAAPEAV1@K@Z.c)
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1C0005DCC (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1C00067B0 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0006DF0 (-ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ??0SC_DRIVE@@QEAA@XZ @ 0x1C0006EF0 (--0SC_DRIVE@@QEAA@XZ.c)
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00098F4 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?PmGivePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C0009B70 (-PmGivePartition@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     McGenControlCallbackV2 @ 0x1C000B300 (McGenControlCallbackV2.c)
 *     ?PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C000C838 (-PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@.c)
 *     ?PmFindPartitionById@@YAPEAU_PARTITION_EXTENSION@@PEAU_DEVICE_EXTENSION@@PEAGK@Z @ 0x1C000F5EC (-PmFindPartitionById@@YAPEAU_PARTITION_EXTENSION@@PEAU_DEVICE_EXTENSION@@PEAGK@Z.c)
 *     PmNameFromGuid @ 0x1C000FAB4 (PmNameFromGuid.c)
 *     ?PmPartitionChanged@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C00100C0 (-PmPartitionChanged@@YAXPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1C0010F18 (-CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0010FCC (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ExtractFaultDomainIds@SC_DEVICE@@AEAAJXZ @ 0x1C00117F0 (-ExtractFaultDomainIds@SC_DEVICE@@AEAAJXZ.c)
 *     ?CreatePartitionTable@SC_RAW@@QEAAJXZ @ 0x1C00119A0 (-CreatePartitionTable@SC_RAW@@QEAAJXZ.c)
 *     PartitionIoctlGetPartitionInfoEx @ 0x1C001C788 (PartitionIoctlGetPartitionInfoEx.c)
 *     PmIoctlQueryProperty @ 0x1C001C8F4 (PmIoctlQueryProperty.c)
 *     PmPerfCounterQuery @ 0x1C001D5B0 (PmPerfCounterQuery.c)
 *     ?PmQueryWmiDataBlock@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KKKPEAKKPEAE@Z @ 0x1C001D710 (-PmQueryWmiDataBlock@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KKKPEAKKPEAE@Z.c)
 *     PmWmiCounterQuery @ 0x1C001D860 (PmWmiCounterQuery.c)
 *     PmIoctlPerformance @ 0x1C001DCC4 (PmIoctlPerformance.c)
 *     PartitionIoctlSetPartitionInfo @ 0x1C001E74C (PartitionIoctlSetPartitionInfo.c)
 *     ?PmIoctlDsmConversionQuery@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001E800 (-PmIoctlDsmConversionQuery@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     PmCreateSpacesMetadata @ 0x1C001EEA8 (PmCreateSpacesMetadata.c)
 *     ?PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C001F3AC (-PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     ?PmConstructDeviceLocationDefault@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C001FBE4 (-PmConstructDeviceLocationDefault@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 *     ?PmGetRegistryId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_GUID@@@Z @ 0x1C0021DEC (-PmGetRegistryId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_GUID@@@Z.c)
 *     PmGetDeviceParameter @ 0x1C0022274 (PmGetDeviceParameter.c)
 *     PmIoctlGetDriveGeometryEx @ 0x1C00225C4 (PmIoctlGetDriveGeometryEx.c)
 *     ?PmAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0022900 (-PmAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?PmInitializeSnapshotData@@YAXPEAU_DISK_SNAPSHOT_DATA@@K@Z @ 0x1C0022E30 (-PmInitializeSnapshotData@@YAXPEAU_DISK_SNAPSHOT_DATA@@K@Z.c)
 *     PmIoctlGetPartitionInfoEx @ 0x1C00235A8 (PmIoctlGetPartitionInfoEx.c)
 *     ?PmWritePartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_ATTRIBUTES_TABLE@@K@Z @ 0x1C0024E3C (-PmWritePartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_ATTRIBUTES_TABLE@@K@Z.c)
 *     PartitionIoctlManageBypassIo @ 0x1C0025198 (PartitionIoctlManageBypassIo.c)
 *     PartitionIoctlSetPartitionAttributes @ 0x1C00253E0 (PartitionIoctlSetPartitionAttributes.c)
 *     PmIoctlGetDriveLayout @ 0x1C00257CC (PmIoctlGetDriveLayout.c)
 *     PmIoctlResetSnapshotInfo @ 0x1C0025E08 (PmIoctlResetSnapshotInfo.c)
 *     PmGetDeviceParameterBinary @ 0x1C0026A1C (PmGetDeviceParameterBinary.c)
 *     memset$thunk$772440563353939046 @ 0x1C0029010 (memset$thunk$772440563353939046.c)
 *     DriverEntry @ 0x1C002A078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
