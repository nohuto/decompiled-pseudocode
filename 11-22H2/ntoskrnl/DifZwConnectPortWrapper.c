/*
 * XREFs of DifZwConnectPortWrapper @ 0x1405EE110
 * Callers:
 *     <none>
 * Callees:
 *     ZwConnectPort @ 0x14041BAE0 (ZwConnectPort.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     DifGetAPIThunkContextById @ 0x140465E5E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F8954 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwConnectPortWrapper(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v21; // rdi
  _QWORD *v22; // rbx
  _QWORD v23[10]; // [rsp+48h] [rbp-39h] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+3Fh]

  memset(v23, 0, sizeof(v23));
  APIThunkContextById = DifGetAPIThunkContextById(513);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v17 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v17 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v23[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v17 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v13, v12, v15, v16);
      goto LABEL_9;
    }
  }
  v23[0] = 0LL;
LABEL_10:
  v23[4] = ServerView;
  v23[3] = MaxMessageLength;
  v23[2] = ConnectionInformation;
  v23[1] = ConnectionInformationLength;
  v23[8] = PortHandle;
  v23[7] = PortName;
  v23[6] = SecurityQos;
  v23[5] = ClientView;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v23);
  }
LABEL_17:
  result = ZwConnectPort(
             PortHandle,
             PortName,
             SecurityQos,
             ClientView,
             ServerView,
             MaxMessageLength,
             ConnectionInformation,
             ConnectionInformationLength);
  LODWORD(v23[9]) = result;
  if ( APIThunkContextById )
  {
    v21 = (_QWORD **)(APIThunkContextById + 6);
    v22 = *v21;
    if ( *v21 != v21 )
    {
      do
      {
        if ( v22 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v22 - 1))(v23);
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v21 );
      return v23[9];
    }
  }
  return result;
}
