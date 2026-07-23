/*
 * XREFs of sub_14081AFCC @ 0x14081AFCC
 * Callers:
 *     sub_14081AE90 @ 0x14081AE90 (sub_14081AE90.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14036C0A0 @ 0x14036C0A0 (sub_14036C0A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14041C640 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x14041C660 (ZwAlpcCancelMessage.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14081B144 @ 0x14081B144 (sub_14081B144.c)
 *     sub_14081B360 @ 0x14081B360 (sub_14081B360.c)
 */

__int64 __fastcall sub_14081AFCC(PPORT_MESSAGE ConnectionRequest, PALPC_CONTEXT_ATTR MessageContext)
{
  unsigned int v2; // edi
  int Type; // ecx
  unsigned int v5; // eax
  __int64 v7; // rax
  HANDLE v8; // rbx
  int PortAttributes; // [rsp+20h] [rbp-79h]
  int v10; // [rsp+50h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-41h] BYREF
  _ALPC_PORT_ATTRIBUTES v12; // [rsp+90h] [rbp-9h] BYREF

  v2 = 0;
  Type = (unsigned __int16)ConnectionRequest->u2.s2.Type;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v5 = Type & 0xFFFF00FF;
  if ( (Type & 0xFFFF00FF) != 0 )
  {
    if ( v5 > 3 )
    {
      if ( v5 > 4 )
      {
        if ( v5 <= 6 )
        {
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
          v8 = qword_140C1C1F0;
          qword_140C1C1F0 = 0LL;
          sub_14036C0A0((ULONG_PTR)&stru_140C1C1E8);
          ZwClose(v8);
        }
        else if ( v5 == 10 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 512;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          memset(&v12, 0, sizeof(v12));
          v12.MaxMessageLength = 64LL;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
          if ( ZwAlpcAcceptConnectPort(
                 &qword_140C1C1F0,
                 qword_140C1C1E0,
                 0,
                 &ObjectAttributes,
                 &v12,
                 0LL,
                 ConnectionRequest,
                 0LL,
                 qword_140C1C1F0 == 0LL) < 0 )
          {
            ZwAlpcAcceptConnectPort(
              &qword_140C1C1F0,
              qword_140C1C1E0,
              0,
              &ObjectAttributes,
              &v12,
              0LL,
              ConnectionRequest,
              0LL,
              0);
          }
          else
          {
            v10 = 0;
            v7 = 0LL;
            do
            {
              LOBYTE(PortAttributes) = 0;
              sub_14081B360(192 * v7, 2 - (unsigned int)(dword_140C1C1F8[48 * v7] != 0), 4LL, &v10, PortAttributes);
              v7 = (unsigned int)(v10 + 1);
              v10 = v7;
            }
            while ( (unsigned int)v7 < 2 );
          }
          sub_14036C0A0((ULONG_PTR)&stru_140C1C1E8);
        }
      }
    }
    else if ( v5 == 1 || (Type & 0x2000) != 0 )
    {
      return (unsigned int)ZwAlpcCancelMessage(qword_140C1C1E0, 0, MessageContext);
    }
    else
    {
      sub_14081B144(ConnectionRequest, MessageContext);
    }
  }
  return v2;
}
