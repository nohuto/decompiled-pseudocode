/*
 * XREFs of sub_14060DFF0 @ 0x14060DFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     IoCreateFile @ 0x1406CAD00 (IoCreateFile.c)
 */

NTSTATUS __fastcall sub_14060DFF0(
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
        ULONG Options)
{
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v27; // rdx
  _QWORD **v28; // rdi
  _QWORD *v29; // rbx
  _QWORD v30[14]; // [rsp+78h] [rbp-69h] BYREF
  __int64 retaddr; // [rsp+110h] [rbp+2Fh]

  memset(v30, 0, 0x68uLL);
  v20 = sub_140604844(147);
  if ( !v20 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v20 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v23 = *((_DWORD *)v20 + 3);
  if ( (v23 & 0x18) == 0 )
  {
    if ( (v23 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v24 = sub_140628C98(v19, v18, v21, v22);
    goto LABEL_12;
  }
  v24 = retaddr;
LABEL_12:
  v30[0] = v24;
LABEL_13:
  v30[7] = AllocationSize;
  v30[6] = __PAIR64__(FileAttributes, ShareAccess);
  v30[5] = __PAIR64__(Disposition, CreateOptions);
  v30[4] = EaBuffer;
  v30[3] = __PAIR64__(EaLength, CreateFileType);
  v30[2] = InternalParameters;
  LODWORD(v30[1]) = Options;
  v30[11] = FileHandle;
  LODWORD(v30[10]) = DesiredAccess;
  v30[9] = ObjectAttributes;
  v30[8] = IoStatusBlock;
  for ( i = (__int64 *)v20[4]; i != v20 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v30, v18);
  }
LABEL_18:
  result = IoCreateFile(
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
             Options);
  LODWORD(v30[12]) = result;
  if ( v20 )
  {
    v28 = (_QWORD **)(v20 + 6);
    v29 = *v28;
    if ( *v28 != v28 )
    {
      do
      {
        if ( v29 != (_QWORD *)16 )
          sub_14042A5E0(v30, v27);
        v29 = (_QWORD *)*v29;
      }
      while ( v29 != v28 );
      return v30[12];
    }
  }
  return result;
}
