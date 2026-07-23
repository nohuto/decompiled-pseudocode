/*
 * XREFs of sub_1406214C0 @ 0x1406214C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_1406214C0(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
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
  _QWORD v26[10]; // [rsp+58h] [rbp-49h] BYREF
  __int64 retaddr; // [rsp+D0h] [rbp+2Fh]

  memset(v26, 0, sizeof(v26));
  v16 = sub_140604844(545);
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
  v26[4] = IoStatusBlock;
  HIDWORD(v26[3]) = CompletionFilter;
  LOBYTE(v26[3]) = WatchTree;
  v26[2] = Buffer;
  HIDWORD(v26[1]) = BufferSize;
  LOBYTE(v26[1]) = Asynchronous;
  v26[8] = KeyHandle;
  v26[7] = Event;
  v26[6] = ApcRoutine;
  v26[5] = ApcContext;
  for ( i = (__int64 *)v16[4]; i != v16 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v26, v14);
  }
LABEL_18:
  result = ZwNotifyChangeKey(
             KeyHandle,
             Event,
             ApcRoutine,
             ApcContext,
             IoStatusBlock,
             CompletionFilter,
             WatchTree,
             Buffer,
             BufferSize,
             Asynchronous);
  LODWORD(v26[9]) = result;
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
      return v26[9];
    }
  }
  return result;
}
