/*
 * XREFs of sub_140625FF0 @ 0x140625FF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwReadFile @ 0x14041B820 (ZwReadFile.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_140625FF0(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v22; // rdx
  _QWORD **v23; // rdi
  _QWORD *v24; // rbx
  _QWORD v25[12]; // [rsp+58h] [rbp-51h] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+37h]

  memset(v25, 0, 0x58uLL);
  v15 = sub_140604844(604);
  if ( !v15 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v15 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v18 = *((_DWORD *)v15 + 3);
  if ( (v18 & 0x18) == 0 )
  {
    if ( (v18 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v19 = sub_140628C98(v14, v13, v16, v17);
    goto LABEL_12;
  }
  v19 = retaddr;
LABEL_12:
  v25[0] = v19;
LABEL_13:
  v25[5] = IoStatusBlock;
  v25[4] = Buffer;
  LODWORD(v25[3]) = Length;
  v25[2] = ByteOffset;
  v25[1] = Key;
  v25[9] = FileHandle;
  v25[8] = Event;
  v25[7] = ApcRoutine;
  v25[6] = ApcContext;
  for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v25, v13);
  }
LABEL_18:
  result = ZwReadFile(FileHandle, Event, ApcRoutine, ApcContext, IoStatusBlock, Buffer, Length, ByteOffset, Key);
  LODWORD(v25[10]) = result;
  if ( v15 )
  {
    v23 = (_QWORD **)(v15 + 6);
    v24 = *v23;
    if ( *v23 != v23 )
    {
      do
      {
        if ( v24 != (_QWORD *)16 )
          sub_14042A5E0(v25, v22);
        v24 = (_QWORD *)*v24;
      }
      while ( v24 != v23 );
      return v25[10];
    }
  }
  return result;
}
