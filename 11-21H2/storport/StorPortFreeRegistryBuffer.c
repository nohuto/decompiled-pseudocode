/*
 * XREFs of StorPortFreeRegistryBuffer @ 0x1C00431E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     PortFreeRegistryBuffer @ 0x1C00684E0 (PortFreeRegistryBuffer.c)
 */

char __fastcall StorPortFreeRegistryBuffer(void *a1)
{
  _DWORD *Adapter; // rax

  LOBYTE(Adapter) = MmIsAddressValid(a1);
  if ( (_BYTE)Adapter )
  {
    Adapter = RaidpPortGetAdapter((__int64)a1);
    if ( Adapter )
      LOBYTE(Adapter) = PortFreeRegistryBuffer(Adapter + 470);
  }
  return (char)Adapter;
}
