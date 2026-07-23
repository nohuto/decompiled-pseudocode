/*
 * XREFs of sub_14061E6A0 @ 0x14061E6A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_14061E6A0(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v24; // rdx
  _QWORD **v25; // rdi
  _QWORD *v26; // rbx
  _QWORD v27[12]; // [rsp+68h] [rbp-59h] BYREF
  __int64 retaddr; // [rsp+F0h] [rbp+2Fh]

  memset(v27, 0, 0x58uLL);
  v17 = sub_140604844(507);
  if ( !v17 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v17 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v20 = *((_DWORD *)v17 + 3);
  if ( (v20 & 0x18) == 0 )
  {
    if ( (v20 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v21 = sub_140628C98(v16, v15, v18, v19);
    goto LABEL_12;
  }
  v21 = retaddr;
LABEL_12:
  v27[0] = v21;
LABEL_13:
  v27[5] = AllocationSize;
  v27[4] = __PAIR64__(FileAttributes, ShareAccess);
  v27[3] = __PAIR64__(CreateDisposition, CreateOptions);
  v27[2] = EaBuffer;
  LODWORD(v27[1]) = EaLength;
  v27[9] = FileHandle;
  LODWORD(v27[8]) = DesiredAccess;
  v27[7] = ObjectAttributes;
  v27[6] = IoStatusBlock;
  for ( i = (__int64 *)v17[4]; i != v17 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v27, v15);
  }
LABEL_18:
  result = ZwCreateFile(
             FileHandle,
             DesiredAccess,
             ObjectAttributes,
             IoStatusBlock,
             AllocationSize,
             FileAttributes,
             ShareAccess,
             CreateDisposition,
             CreateOptions,
             EaBuffer,
             EaLength);
  LODWORD(v27[10]) = result;
  if ( v17 )
  {
    v25 = (_QWORD **)(v17 + 6);
    v26 = *v25;
    if ( *v25 != v25 )
    {
      do
      {
        if ( v26 != (_QWORD *)16 )
          sub_14042A5E0(v27, v24);
        v26 = (_QWORD *)*v26;
      }
      while ( v26 != v25 );
      return v27[10];
    }
  }
  return result;
}
