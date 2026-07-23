/*
 * XREFs of sub_14060DBD0 @ 0x14060DBD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     IoCreateFileEx @ 0x14066E670 (IoCreateFileEx.c)
 */

NTSTATUS __fastcall sub_14060DBD0(
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v28; // rdx
  _QWORD **v29; // rdi
  _QWORD *v30; // rbx
  _QWORD v31[14]; // [rsp+88h] [rbp-69h] BYREF
  __int64 retaddr; // [rsp+120h] [rbp+2Fh]

  memset(v31, 0, sizeof(v31));
  v21 = sub_140604844(148);
  if ( !v21 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v21 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v24 = *((_DWORD *)v21 + 3);
  if ( (v24 & 0x18) == 0 )
  {
    if ( (v24 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v25 = sub_140628C98(v20, v19, v22, v23);
    goto LABEL_12;
  }
  v25 = retaddr;
LABEL_12:
  v31[0] = v25;
LABEL_13:
  v31[8] = AllocationSize;
  v31[7] = __PAIR64__(FileAttributes, ShareAccess);
  v31[6] = __PAIR64__(Disposition, CreateOptions);
  v31[5] = EaBuffer;
  v31[4] = __PAIR64__(EaLength, CreateFileType);
  v31[3] = InternalParameters;
  LODWORD(v31[2]) = Options;
  v31[1] = DriverContext;
  v31[12] = FileHandle;
  LODWORD(v31[11]) = DesiredAccess;
  v31[10] = ObjectAttributes;
  v31[9] = IoStatusBlock;
  for ( i = (__int64 *)v21[4]; i != v21 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v31, v19);
  }
LABEL_18:
  result = IoCreateFileEx(
             FileHandle,
             DesiredAccess,
             ObjectAttributes,
             IoStatusBlock,
             AllocationSize,
             FileAttributes,
             ShareAccess,
             Disposition,
             CreateOptions,
             EaBuffer,
             EaLength,
             CreateFileType,
             InternalParameters,
             Options,
             DriverContext);
  LODWORD(v31[13]) = result;
  if ( v21 )
  {
    v29 = (_QWORD **)(v21 + 6);
    v30 = *v29;
    if ( *v29 != v29 )
    {
      do
      {
        if ( v30 != (_QWORD *)16 )
          sub_14042A5E0(v31, v28);
        v30 = (_QWORD *)*v30;
      }
      while ( v30 != v29 );
      return v31[13];
    }
  }
  return result;
}
