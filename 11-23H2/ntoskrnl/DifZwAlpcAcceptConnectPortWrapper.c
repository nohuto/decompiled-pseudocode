/*
 * XREFs of DifZwAlpcAcceptConnectPortWrapper @ 0x1405ED290
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcAcceptConnectPort @ 0x14041BFD0 (ZwAlpcAcceptConnectPort.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DifGetAPIThunkContextById @ 0x1404668BE (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F8E34 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwAlpcAcceptConnectPortWrapper(
        PHANDLE PortHandle,
        HANDLE ConnectionPortHandle,
        ULONG Flags,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        PALPC_MESSAGE_ATTRIBUTES ConnectionMessageAttributes,
        BOOLEAN AcceptConnection)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v22; // rdi
  _QWORD *v23; // rbx
  _QWORD v24[12]; // [rsp+58h] [rbp-51h] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+37h]

  memset(v24, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(496);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v18 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v18 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v24[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v18 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v14, v13, v16, v17);
      goto LABEL_9;
    }
  }
  v24[0] = 0LL;
LABEL_10:
  v24[5] = PortAttributes;
  v24[4] = PortContext;
  v24[3] = ConnectionRequest;
  v24[2] = ConnectionMessageAttributes;
  LOBYTE(v24[1]) = AcceptConnection;
  v24[9] = PortHandle;
  v24[8] = ConnectionPortHandle;
  LODWORD(v24[7]) = Flags;
  v24[6] = ObjectAttributes;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v24);
  }
LABEL_17:
  result = ZwAlpcAcceptConnectPort(
             PortHandle,
             ConnectionPortHandle,
             Flags,
             ObjectAttributes,
             PortAttributes,
             PortContext,
             ConnectionRequest,
             ConnectionMessageAttributes,
             AcceptConnection);
  LODWORD(v24[10]) = result;
  if ( APIThunkContextById )
  {
    v22 = (_QWORD **)(APIThunkContextById + 6);
    v23 = *v22;
    if ( *v22 != v22 )
    {
      do
      {
        if ( v23 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v23 - 1))(v24);
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != v22 );
      return v24[10];
    }
  }
  return result;
}
