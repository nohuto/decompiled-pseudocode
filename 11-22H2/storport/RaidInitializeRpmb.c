/*
 * XREFs of RaidInitializeRpmb @ 0x1C003CEF4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidInitializeRpmb(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx
  unsigned int v4; // eax

  v2 = 0;
  v3 = **(_QWORD **)(a1 - 16);
  *(_DWORD *)(v3 + 5488) = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 12);
  if ( v4 >= 0x200
    && (*(_DWORD *)(v3 + 5492) = v4,
        *(_BYTE *)(v3 + 5496) = *(_BYTE *)(a2 + 16),
        *(_WORD *)(v3 + 5498) = *(_WORD *)(a2 + 18),
        *(_DWORD *)(a2 + 40) == 1) )
  {
    *(_DWORD *)(v3 + 5520) = 1;
    *(_OWORD *)(v3 + 5504) = *(_OWORD *)(a2 + 24);
  }
  else
  {
    v2 = -1056964602;
    *(_DWORD *)(v3 + 5488) = 0;
  }
  return v2;
}
