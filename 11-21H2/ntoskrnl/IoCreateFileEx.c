/*
 * XREFs of IoCreateFileEx @ 0x14066E670
 * Callers:
 *     sub_14060DBD0 @ 0x14060DBD0 (sub_14060DBD0.c)
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_1406C78D4 @ 0x1406C78D4 (sub_1406C78D4.c)
 *     IoCreateFileSpecifyDeviceObjectHint @ 0x1406E0C70 (IoCreateFileSpecifyDeviceObjectHint.c)
 * Callees:
 *     sub_14066E7C0 @ 0x14066E7C0 (sub_14066E7C0.c)
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
 */

NTSTATUS __stdcall IoCreateFileEx(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options,
        PIO_DRIVER_CREATE_CONTEXT DriverContext)
{
  int v15; // ebp
  int v16; // r14d
  int v17; // r10d
  int v19; // r12d
  struct _ECP_LIST *ExtraCreateParameter; // rcx
  ULONG v21; // edi
  NTSTATUS result; // eax
  int v23; // ecx
  size_t Size; // [rsp+50h] [rbp-48h]

  v15 = (int)IoStatusBlock;
  v16 = (int)ObjectAttributes;
  v17 = (Options >> 10) & 2;
  v19 = (int)FileHandle;
  if ( !DriverContext )
  {
LABEL_11:
    LODWORD(Size) = EaLength;
    return sub_1407ADB90(
             v19,
             DesiredAccess,
             v16,
             v15,
             (__int64)AllocationSize,
             FileAttributes,
             ShareAccess,
             Disposition,
             CreateOptions,
             EaBuffer,
             Size,
             CreateFileType,
             (__int64)InternalParameters,
             Options | 0x100,
             v17,
             DriverContext);
  }
  ExtraCreateParameter = DriverContext->ExtraCreateParameter;
  v21 = v17 | 1;
  if ( !DriverContext->DeviceObjectHint )
    v21 = (Options >> 10) & 2;
  if ( !ExtraCreateParameter || (result = sub_14066E7C0((ULONG_PTR)ExtraCreateParameter), result >= 0) )
  {
    v23 = v21 | 4;
    if ( !DriverContext->TxnParameters )
      v23 = v21;
    v17 = v23;
    if ( DriverContext->Size >= 0x28u && *(_QWORD *)&DriverContext[1].Size != 1LL )
      v17 = v23 | 0x40;
    goto LABEL_11;
  }
  return result;
}
