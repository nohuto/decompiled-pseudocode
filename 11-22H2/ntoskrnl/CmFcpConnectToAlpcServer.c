/*
 * XREFs of CmFcpConnectToAlpcServer @ 0x140680B8C
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _filwbuf_s @ 0x140410D54 (_filwbuf_s.c)
 *     ZwAlpcConnectPortEx @ 0x14041B5E0 (ZwAlpcConnectPortEx.c)
 */

__int64 __fastcall CmFcpConnectToAlpcServer(HANDLE *a1, char a2)
{
  unsigned int v4; // edi
  NTSTATUS v5; // eax
  int v6; // ebx
  HANDLE PortHandle; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BufferLength; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE ConnectionMessage[48]; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ClientPortObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ConnectionPortObjectAttributes; // [rsp+F0h] [rbp-10h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+120h] [rbp+20h] BYREF

  *(_QWORD *)&ConnectionPortObjectAttributes.Length = 48LL;
  *(_QWORD *)&ConnectionPortObjectAttributes.Attributes = 512LL;
  *(_QWORD *)&ClientPortObjectAttributes.Length = 48LL;
  *(_QWORD *)&ClientPortObjectAttributes.Attributes = 512LL;
  *(_WORD *)(&PortAttributes.SecurityQos.EffectiveOnly + 1) = 0;
  PortAttributes.Reserved = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\RPC Control\\FconAlpcPort");
  PortHandle = 0LL;
  Timeout.QuadPart = -50000000LL;
  memset(ConnectionMessage, 0, sizeof(ConnectionMessage));
  ConnectionPortObjectAttributes.ObjectName = &DestinationString;
  v4 = 0;
  Interval.QuadPart = -10000000LL;
  ConnectionPortObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ConnectionPortObjectAttributes.SecurityDescriptor = 0LL;
  ClientPortObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ClientPortObjectAttributes.SecurityDescriptor = 0LL;
  ClientPortObjectAttributes.ObjectName = 0LL;
  PortAttributes.Flags = 1179648;
  PortAttributes.MaxMessageLength = filwbuf_s();
  PortAttributes.MaxPoolUsage = 0xFFFFFFFFLL;
  PortAttributes.MaxSectionSize = 0xFFFFFFFFLL;
  PortAttributes.MaxTotalSectionSize = 0xFFFFFFFFLL;
  PortAttributes.MaxViewSize = 0xFFFFFFFFLL;
  *(_WORD *)&ConnectionMessage[4] |= 0x8000u;
  PortAttributes.DupObjectTypes = 0;
  PortAttributes.MemoryBandwidth = 0LL;
  *(_QWORD *)&PortAttributes.SecurityQos.Length = 12LL;
  *(_WORD *)&PortAttributes.SecurityQos.ContextTrackingMode = 1;
  *(_DWORD *)ConnectionMessage = 3145736;
  *(_DWORD *)&ConnectionMessage[40] = 1;
  BufferLength = 48LL;
  do
  {
    v5 = ZwAlpcConnectPortEx(
           &PortHandle,
           &ConnectionPortObjectAttributes,
           &ClientPortObjectAttributes,
           &PortAttributes,
           0x20000u,
           0LL,
           (PPORT_MESSAGE)ConnectionMessage,
           &BufferLength,
           0LL,
           0LL,
           &Timeout);
    v6 = v5;
    if ( !a2 || v5 != -1073741772 && v5 != -1073740031 )
      break;
    ++v4;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  while ( v4 < 0xA );
  if ( v6 >= 0 )
    *a1 = PortHandle;
  return (unsigned int)v6;
}
