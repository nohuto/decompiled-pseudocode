/*
 * XREFs of sub_140623DA0 @ 0x140623DA0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryDirectoryFileEx @ 0x14041E080 (ZwQueryDirectoryFileEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_140623DA0(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG QueryFlags,
        PUNICODE_STRING FileName)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v23; // rdx
  _QWORD **v24; // rdi
  _QWORD *v25; // rbx
  _QWORD v26[12]; // [rsp+58h] [rbp-59h] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+2Fh]

  memset(v26, 0, 0x58uLL);
  v16 = sub_140604844(579);
  if ( !v16 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v16 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v19 = *((_DWORD *)v16 + 3);
  if ( (v19 & 0x18) == 0 )
  {
    if ( (v19 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v20 = sub_140628C98(v15, v14, v17, v18);
    goto LABEL_12;
  }
  v20 = retaddr;
LABEL_12:
  v26[0] = v20;
LABEL_13:
  v26[5] = IoStatusBlock;
  v26[4] = FileInformation;
  LODWORD(v26[3]) = Length;
  v26[2] = __PAIR64__(FileInformationClass, QueryFlags);
  v26[1] = FileName;
  v26[9] = FileHandle;
  v26[8] = Event;
  v26[7] = ApcRoutine;
  v26[6] = ApcContext;
  for ( i = (__int64 *)v16[4]; i != v16 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v26, v14);
  }
LABEL_18:
  result = ZwQueryDirectoryFileEx(
             FileHandle,
             Event,
             ApcRoutine,
             ApcContext,
             IoStatusBlock,
             FileInformation,
             Length,
             FileInformationClass,
             QueryFlags,
             FileName);
  LODWORD(v26[10]) = result;
  if ( v16 )
  {
    v24 = (_QWORD **)(v16 + 6);
    v25 = *v24;
    if ( *v24 != v24 )
    {
      do
      {
        if ( v25 != (_QWORD *)16 )
          sub_14042A5E0(v26, v23);
        v25 = (_QWORD *)*v25;
      }
      while ( v25 != v24 );
      return v26[10];
    }
  }
  return result;
}
