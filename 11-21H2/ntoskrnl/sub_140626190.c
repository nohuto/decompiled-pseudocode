/*
 * XREFs of sub_140626190 @ 0x140626190
 * Callers:
 *     <none>
 * Callees:
 *     ZwRemoveIoCompletionEx @ 0x14041E6A0 (ZwRemoveIoCompletionEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_140626190(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v19; // rdx
  _QWORD **v20; // rdi
  _QWORD *v21; // rbx
  _QWORD v22[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+28h]

  memset(v22, 0, sizeof(v22));
  v12 = sub_140604844(608);
  if ( !v12 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v11 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v12 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v15 = *((_DWORD *)v12 + 3);
  if ( (v15 & 0x18) == 0 )
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v16 = sub_140628C98(v11, v10, v13, v14);
    goto LABEL_12;
  }
  v16 = retaddr;
LABEL_12:
  v22[0] = v16;
LABEL_13:
  v22[2] = Timeout;
  LOBYTE(v22[1]) = Alertable;
  v22[6] = IoCompletionHandle;
  v22[5] = IoCompletionInformation;
  LODWORD(v22[4]) = Count;
  v22[3] = NumEntriesRemoved;
  for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v22, v10);
  }
LABEL_18:
  result = ZwRemoveIoCompletionEx(
             IoCompletionHandle,
             IoCompletionInformation,
             Count,
             NumEntriesRemoved,
             Timeout,
             Alertable);
  LODWORD(v22[7]) = result;
  if ( v12 )
  {
    v20 = (_QWORD **)(v12 + 6);
    v21 = *v20;
    if ( *v20 != v20 )
    {
      do
      {
        if ( v21 != (_QWORD *)16 )
          sub_14042A5E0(v22, v19);
        v21 = (_QWORD *)*v21;
      }
      while ( v21 != v20 );
      return v22[7];
    }
  }
  return result;
}
