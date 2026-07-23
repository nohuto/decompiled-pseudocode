/*
 * XREFs of sub_1407EFC00 @ 0x1407EFC00
 * Callers:
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     sub_1407EFAD0 @ 0x1407EFAD0 (sub_1407EFAD0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14041C640 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x14041C660 (ZwAlpcCancelMessage.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407EFD2C @ 0x1407EFD2C (sub_1407EFD2C.c)
 *     sub_1407F02CC @ 0x1407F02CC (sub_1407F02CC.c)
 */

__int64 __fastcall sub_1407EFC00(PPORT_MESSAGE ConnectionRequest, PALPC_CONTEXT_ATTR MessageContext)
{
  __int64 Type; // rcx
  unsigned int v4; // eax
  NTSTATUS v5; // ebx
  HANDLE v7; // rbx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-49h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+80h] [rbp-19h] BYREF

  Type = (unsigned __int16)ConnectionRequest->u2.s2.Type;
  *(&ObjectAttributes.Length + 1) = 0;
  v4 = Type & 0xFFFF00FF;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( (Type & 0xFFFF00FF) == 1 )
    goto LABEL_15;
  if ( v4 <= 1 )
    return 0;
  if ( v4 > 3 )
  {
    if ( v4 > 4 )
    {
      if ( v4 <= 6 )
      {
        LOBYTE(Type) = 1;
        byte_140C1F600 = 0;
        sub_1407F02CC(Type);
        v7 = PortHandle;
        PortHandle = 0LL;
        ExReleasePushLockEx((ULONG_PTR)&qword_140C1F5F0, 0LL);
        KeLeaveCriticalRegion();
        ZwClose(v7);
        return (unsigned int)-1073740032;
      }
      if ( v4 == 10 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        memset(&PortAttributes, 0, sizeof(PortAttributes));
        PortAttributes.MaxMessageLength = 4096LL;
        v5 = ZwAlpcAcceptConnectPort(
               &PortHandle,
               ConnectionPortHandle,
               0,
               &ObjectAttributes,
               &PortAttributes,
               0LL,
               ConnectionRequest,
               0LL,
               byte_140C1F600 == 0);
        if ( v5 < 0 )
        {
          ZwAlpcAcceptConnectPort(
            &PortHandle,
            ConnectionPortHandle,
            0,
            &ObjectAttributes,
            &PortAttributes,
            0LL,
            ConnectionRequest,
            0LL,
            0);
          return (unsigned int)v5;
        }
        byte_140C1F600 = 1;
      }
    }
    return 0;
  }
  if ( (Type & 0x2000) != 0 )
  {
LABEL_15:
    ZwAlpcCancelMessage(ConnectionPortHandle, 0, MessageContext);
    return 0;
  }
  v5 = sub_1407EFD2C(&ConnectionRequest[1], MessageContext);
  if ( v5 >= 0 )
    return 0;
  return (unsigned int)v5;
}
