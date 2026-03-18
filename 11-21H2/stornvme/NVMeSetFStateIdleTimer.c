/*
 * XREFs of NVMeSetFStateIdleTimer @ 0x1C0019EA0
 * Callers:
 *     NVMePowerSetFState @ 0x1C000A004 (NVMePowerSetFState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSetFStateIdleTimer(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax

  v1 = 0;
  if ( *(_DWORD *)(a1 + 1692) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 96);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 92);
    if ( v2 == -1 )
    {
      if ( *(_BYTE *)(a1 + 1690) )
      {
        if ( *(_BYTE *)(a1 + 1689) <= 2u )
          return v1;
        v2 = *(_DWORD *)(a1 + 1716);
      }
      else
      {
        v2 = *(_DWORD *)(a1 + 1708);
      }
    }
  }
  if ( v2 )
  {
    *(_DWORD *)(a1 + 1680) |= 0x20u;
    return (unsigned int)StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1720), NVMeFStateIdleTimerCallback);
  }
  return v1;
}
