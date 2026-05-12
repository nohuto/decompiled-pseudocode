/*
 * XREFs of PortGetDriverParameters @ 0x1C0092C00
 * Callers:
 *     RaidInitializeAdapter @ 0x1C008D1D8 (RaidInitializeAdapter.c)
 * Callees:
 *     PortOpenDeviceKey @ 0x1C0092F54 (PortOpenDeviceKey.c)
 *     PortpReadDriverParameterEntry @ 0x1C00932FC (PortpReadDriverParameterEntry.c)
 */

int __fastcall PortGetDriverParameters(__int64 a1, unsigned int a2)
{
  void *v4; // rax
  void *v5; // rbx
  void *v6; // rax
  void *v7; // rbx

  v4 = (void *)PortOpenDeviceKey(a1, 0xFFFFFFFFLL);
  v5 = v4;
  if ( v4 )
  {
    PortpReadDriverParameterEntry(v4);
    ZwClose(v5);
  }
  v6 = (void *)PortOpenDeviceKey(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    PortpReadDriverParameterEntry(v6);
    LODWORD(v6) = ZwClose(v7);
  }
  return (int)v6;
}
