/*
 * XREFs of StorPortAllocateRegistryBuffer @ 0x1C00457C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     PortAllocateRegistryBuffer @ 0x1C0077B30 (PortAllocateRegistryBuffer.c)
 */

__int64 __fastcall StorPortAllocateRegistryBuffer(void *a1, _DWORD *a2)
{
  __int64 v4; // rbx
  _DWORD *Adapter; // rax
  _DWORD *v6; // rsi

  v4 = 0LL;
  if ( MmIsAddressValid(a1) && (Adapter = RaidpPortGetAdapter((__int64)a1)) != 0LL )
  {
    v6 = Adapter + 486;
    Adapter[498] = *a2;
    if ( (int)PortAllocateRegistryBuffer(Adapter + 486) < 0 )
    {
      *a2 = 0;
    }
    else
    {
      *a2 = v6[10];
      return *((_QWORD *)v6 + 4);
    }
    return v4;
  }
  else
  {
    *a2 = 0;
    return 0LL;
  }
}
