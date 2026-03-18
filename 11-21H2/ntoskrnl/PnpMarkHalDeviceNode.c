/*
 * XREFs of PnpMarkHalDeviceNode @ 0x140B2D6B4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 */

__int64 PnpMarkHalDeviceNode()
{
  __int64 result; // rax
  __int64 i; // rcx

  result = (__int64)IopRootDeviceNode;
  for ( i = *((_QWORD *)IopRootDeviceNode + 1); i; i = *(_QWORD *)i )
  {
    result = (unsigned int)(*(_DWORD *)(i + 300) - 777);
    if ( (unsigned int)result <= 1 && (*(_DWORD *)(i + 396) & 0x1000) == 0 )
    {
      IopInitHalDeviceNode = i;
      return PipSetDevNodeFlags(i, 4);
    }
  }
  return result;
}
