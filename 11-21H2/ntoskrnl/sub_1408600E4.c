/*
 * XREFs of sub_1408600E4 @ 0x1408600E4
 * Callers:
 *     sub_140999FE0 @ 0x140999FE0 (sub_140999FE0.c)
 *     sub_140B2CD08 @ 0x140B2CD08 (sub_140B2CD08.c)
 * Callees:
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14041C640 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041C8E0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 */

NTSTATUS sub_1408600E4()
{
  NTSTATUS result; // eax
  const GUID *v1; // rcx
  __int64 v2; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR BufferLength; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES v4; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD Src[20]; // [rsp+98h] [rbp-70h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+E8h] [rbp-20h] BYREF
  _PORT_MESSAGE ConnectionRequest; // [rsp+138h] [rbp+30h] BYREF
  int v8; // [rsp+160h] [rbp+58h]
  int v9; // [rsp+164h] [rbp+5Ch]

  memset(&v4, 0, 44);
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  while ( 1 )
  {
    BufferLength = 48LL;
    result = ZwAlpcSendWaitReceivePort(qword_140C1F5D8, 0, 0LL, 0LL, &ConnectionRequest, &BufferLength, 0LL, 0LL);
    if ( result )
      return result;
    if ( LOBYTE(ConnectionRequest.u2.ZeroInit) == 3 )
    {
      LODWORD(v2) = v9;
      if ( v8 )
      {
        if ( v8 == 2 )
        {
          memset(Src, 0, 0x48uLL);
          Src[0] = 11;
          Src[2] = v9;
          sub_14036AF00(Src, 0x48uLL, 0);
        }
        else if ( v8 == 3 )
        {
          v1 = (const GUID *)qword_14003A640;
          goto LABEL_18;
        }
      }
      else
      {
        v1 = &stru_1400130E0;
LABEL_18:
        sub_1407525EC(v1, 4u, &v2);
      }
    }
    else if ( LOBYTE(ConnectionRequest.u2.ZeroInit) > 4u )
    {
      if ( LOBYTE(ConnectionRequest.u2.ZeroInit) <= 6u )
      {
        ZwClose(qword_140C1F5E0);
        qword_140C1F5E0 = 0LL;
      }
      else if ( LOBYTE(ConnectionRequest.u2.ZeroInit) == 10 )
      {
        if ( qword_140C1F5E0 )
        {
          ZwClose(qword_140C1F5E0);
          qword_140C1F5E0 = 0LL;
        }
        memset(&PortAttributes, 0, sizeof(PortAttributes));
        PortAttributes.Flags = 0x100000;
        PortAttributes.MaxMessageLength = 256LL;
        v4.Length = 48;
        *(_OWORD *)&v4.RootDirectory = 0uLL;
        v4.Attributes = 512;
        *(_OWORD *)&v4.SecurityDescriptor = 0LL;
        if ( ZwAlpcAcceptConnectPort(
               &qword_140C1F5E0,
               qword_140C1F5D8,
               0,
               &v4,
               &PortAttributes,
               0LL,
               &ConnectionRequest,
               0LL,
               1u) < 0 )
          ZwAlpcAcceptConnectPort(
            &qword_140C1F5E0,
            qword_140C1F5D8,
            0,
            &v4,
            &PortAttributes,
            0LL,
            &ConnectionRequest,
            0LL,
            0);
      }
    }
  }
}
