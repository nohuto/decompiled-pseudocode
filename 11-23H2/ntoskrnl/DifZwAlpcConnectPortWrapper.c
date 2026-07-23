/*
 * XREFs of DifZwAlpcConnectPortWrapper @ 0x1405ED430
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcConnectPort @ 0x14041C010 (ZwAlpcConnectPort.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DifGetAPIThunkContextById @ 0x1404668BE (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F8E34 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwAlpcConnectPortWrapper(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        ULONG Flags,
        PSID RequiredServerSid,
        PPORT_MESSAGE ConnectionMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
        PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v24; // rdi
  _QWORD *v25; // rbx
  _QWORD v26[14]; // [rsp+68h] [rbp-69h] BYREF
  __int64 retaddr; // [rsp+100h] [rbp+2Fh]

  memset(v26, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(497);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v20 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v20 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v26[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v20 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v16, v15, v18, v19);
      goto LABEL_9;
    }
  }
  v26[0] = 0LL;
LABEL_10:
  LODWORD(v26[7]) = Flags;
  v26[6] = RequiredServerSid;
  v26[5] = ConnectionMessage;
  v26[4] = BufferLength;
  v26[3] = OutMessageAttributes;
  v26[2] = InMessageAttributes;
  v26[1] = Timeout;
  v26[11] = PortHandle;
  v26[10] = PortName;
  v26[9] = ObjectAttributes;
  v26[8] = PortAttributes;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v26);
  }
LABEL_17:
  result = ZwAlpcConnectPort(
             PortHandle,
             PortName,
             ObjectAttributes,
             PortAttributes,
             Flags,
             RequiredServerSid,
             ConnectionMessage,
             BufferLength,
             OutMessageAttributes,
             InMessageAttributes,
             Timeout);
  LODWORD(v26[12]) = result;
  if ( APIThunkContextById )
  {
    v24 = (_QWORD **)(APIThunkContextById + 6);
    v25 = *v24;
    if ( *v24 != v24 )
    {
      do
      {
        if ( v25 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v25 - 1))(v26);
        v25 = (_QWORD *)*v25;
      }
      while ( v25 != v24 );
      return v26[12];
    }
  }
  return result;
}
