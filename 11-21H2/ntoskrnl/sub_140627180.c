/*
 * XREFs of sub_140627180 @ 0x140627180
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_140627180(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v18; // rdx
  _QWORD **v19; // rdi
  _QWORD *v20; // rbx
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h]
  __int128 v23; // [rsp+50h] [rbp-10h]
  __int64 retaddr; // [rsp+88h] [rbp+28h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v11 = sub_140604844(623);
  if ( !v11 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v10 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v11 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v14 = *((_DWORD *)v11 + 3);
  if ( (v14 & 0x18) == 0 )
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v15 = sub_140628C98(v10, v9, v12, v13);
    goto LABEL_12;
  }
  v15 = retaddr;
LABEL_12:
  *(_QWORD *)&v21 = v15;
LABEL_13:
  *((_QWORD *)&v21 + 1) = __PAIR64__(Length, FileInformationClass);
  *(_QWORD *)&v23 = FileHandle;
  *((_QWORD *)&v22 + 1) = IoStatusBlock;
  *(_QWORD *)&v22 = FileInformation;
  for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v21, v9);
  }
LABEL_18:
  result = ZwSetInformationFile(FileHandle, IoStatusBlock, FileInformation, Length, FileInformationClass);
  DWORD2(v23) = result;
  if ( v11 )
  {
    v19 = (_QWORD **)(v11 + 6);
    v20 = *v19;
    if ( *v19 != v19 )
    {
      do
      {
        if ( v20 != (_QWORD *)16 )
          sub_14042A5E0(&v21, v18);
        v20 = (_QWORD *)*v20;
      }
      while ( v20 != v19 );
      return DWORD2(v23);
    }
  }
  return result;
}
