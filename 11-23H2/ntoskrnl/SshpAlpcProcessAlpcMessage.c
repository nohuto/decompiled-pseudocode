/*
 * XREFs of SshpAlpcProcessAlpcMessage @ 0x14084C87C
 * Callers:
 *     SshpAlpcMessageCallback @ 0x14084C740 (SshpAlpcMessageCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14032D5B0 (SSHSupportReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14041BFD0 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x14041BFF0 (ZwAlpcCancelMessage.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SshpAlpcProcessMessage @ 0x14084CA08 (SshpAlpcProcessMessage.c)
 *     SshpAlpcSendMessage @ 0x14084CAE0 (SshpAlpcSendMessage.c)
 */

__int64 __fastcall SshpAlpcProcessAlpcMessage(PPORT_MESSAGE ConnectionRequest, PALPC_CONTEXT_ATTR MessageContext)
{
  __int64 Type; // r8
  unsigned int v3; // edi
  __int64 v6; // rdx
  __int64 v8; // rax
  HANDLE v9; // rbx
  int PortAttributes; // [rsp+20h] [rbp-79h]
  int v11; // [rsp+50h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-41h] BYREF
  _ALPC_PORT_ATTRIBUTES v13; // [rsp+90h] [rbp-9h] BYREF

  Type = (unsigned __int16)ConnectionRequest->u2.s2.Type;
  v3 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = (unsigned int)Type & 0xFFFF00FF;
  switch ( Type & 0xFFFF00FF )
  {
    case 1LL:
    case 2LL:
    case 3LL:
      if ( (_DWORD)v6 == 1 || (Type & 0x2000) != 0 )
        return (unsigned int)ZwAlpcCancelMessage(SshpAlpcContext, 0, MessageContext);
      else
        SshpAlpcProcessMessage(ConnectionRequest, v6, Type, MessageContext);
      break;
    case 5LL:
    case 6LL:
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C384E8, 0LL);
      v9 = PortHandle;
      PortHandle = 0LL;
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C384E8);
      ZwClose(v9);
      break;
    case 10LL:
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      memset(&v13, 0, sizeof(v13));
      v13.MaxMessageLength = 64LL;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C384E8, 0LL);
      if ( ZwAlpcAcceptConnectPort(
             &PortHandle,
             SshpAlpcContext,
             0,
             &ObjectAttributes,
             &v13,
             0LL,
             ConnectionRequest,
             0LL,
             PortHandle == 0LL) < 0 )
      {
        ZwAlpcAcceptConnectPort(
          &PortHandle,
          SshpAlpcContext,
          0,
          &ObjectAttributes,
          &v13,
          0LL,
          ConnectionRequest,
          0LL,
          0);
      }
      else
      {
        v11 = 0;
        v8 = 0LL;
        do
        {
          LOBYTE(PortAttributes) = 0;
          SshpAlpcSendMessage(192 * v8, 2 - (unsigned int)(dword_140C384F8[48 * v8] != 0), 4LL, &v11, PortAttributes);
          v8 = (unsigned int)(v11 + 1);
          v11 = v8;
        }
        while ( (unsigned int)v8 < 2 );
      }
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C384E8);
      break;
  }
  return v3;
}
