/*
 * XREFs of sub_14061D840 @ 0x14061D840
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSendWaitReceivePort @ 0x14041C8E0 (ZwAlpcSendWaitReceivePort.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_14061D840(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v21; // rdx
  _QWORD **v22; // rdi
  _QWORD *v23; // rbx
  _QWORD v24[10]; // [rsp+48h] [rbp-39h] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+3Fh]

  memset(v24, 0, sizeof(v24));
  v14 = sub_140604844(494);
  if ( !v14 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v14 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v17 = *((_DWORD *)v14 + 3);
  if ( (v17 & 0x18) == 0 )
  {
    if ( (v17 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v18 = sub_140628C98(v13, v12, v15, v16);
    goto LABEL_12;
  }
  v18 = retaddr;
LABEL_12:
  v24[0] = v18;
LABEL_13:
  v24[4] = ReceiveMessage;
  v24[3] = BufferLength;
  v24[2] = ReceiveMessageAttributes;
  v24[1] = Timeout;
  v24[8] = PortHandle;
  LODWORD(v24[7]) = Flags;
  v24[6] = SendMessageA;
  v24[5] = SendMessageAttributes;
  for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v24, v12);
  }
LABEL_18:
  result = ZwAlpcSendWaitReceivePort(
             PortHandle,
             Flags,
             SendMessageA,
             SendMessageAttributes,
             ReceiveMessage,
             BufferLength,
             ReceiveMessageAttributes,
             Timeout);
  LODWORD(v24[9]) = result;
  if ( v14 )
  {
    v22 = (_QWORD **)(v14 + 6);
    v23 = *v22;
    if ( *v22 != v22 )
    {
      do
      {
        if ( v23 != (_QWORD *)16 )
          sub_14042A5E0(v24, v21);
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != v22 );
      return v24[9];
    }
  }
  return result;
}
