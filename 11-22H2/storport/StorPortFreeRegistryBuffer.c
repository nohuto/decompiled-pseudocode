/*
 * XREFs of StorPortFreeRegistryBuffer @ 0x1C0045E20
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     PortFreeRegistryBuffer @ 0x1C0077D1C (PortFreeRegistryBuffer.c)
 */

char __fastcall StorPortFreeRegistryBuffer(void *a1)
{
  _DWORD *Adapter; // rax

  LOBYTE(Adapter) = MmIsAddressValid(a1);
  if ( (_BYTE)Adapter )
  {
    Adapter = RaidpPortGetAdapter((__int64)a1);
    if ( Adapter )
      LOBYTE(Adapter) = PortFreeRegistryBuffer(Adapter + 486);
  }
  return (char)Adapter;
}
