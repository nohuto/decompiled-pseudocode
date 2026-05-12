/*
 * XREFs of PortReadStorageBusType @ 0x1C00AFA28
 * Callers:
 *     RaidInitializeAdapter @ 0x1C00A7724 (RaidInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     PortpOpenParametersKey @ 0x1C00AFAA4 (PortpOpenParametersKey.c)
 *     PortpReadBusType @ 0x1C00AFB84 (PortpReadBusType.c)
 */

char PortReadStorageBusType()
{
  void *v0; // rax
  void *v1; // rdi
  char BusType; // bl
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  v0 = (void *)PortpOpenParametersKey();
  v1 = v0;
  if ( v0 )
  {
    BusType = PortpReadBusType(v0, KeyValueInformation);
    ZwClose(v1);
    LOBYTE(v0) = BusType;
  }
  return (char)v0;
}
