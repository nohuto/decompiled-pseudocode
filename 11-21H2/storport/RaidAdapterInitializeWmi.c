/*
 * XREFs of RaidAdapterInitializeWmi @ 0x1C00352C0
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidDeleteDeferredQueue @ 0x1C003D05C (RaidDeleteDeferredQueue.c)
 *     RaidInitializeDeferredQueue @ 0x1C003D0A0 (RaidInitializeDeferredQueue.c)
 */

__int64 __fastcall RaidAdapterInitializeWmi(__int64 a1)
{
  char v1; // al
  NTSTATUS v2; // edi
  __int64 v4; // r8

  v1 = *(_BYTE *)(a1 + 104);
  v2 = 0;
  if ( (v1 & 2) == 0 )
  {
    if ( *(_BYTE *)(a1 + 491) )
    {
      v2 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), (v1 & 4 | 2u) >> 1);
      if ( v2 < 0
        || (*(_BYTE *)(a1 + 104) |= 4u,
            v2 = RaidInitializeDeferredQueue(a1 + 1264, *(_QWORD *)(a1 + 8), v4, 176LL, RaidAdapterWmiDeferredRoutine),
            v2 < 0) )
      {
        if ( (*(_BYTE *)(a1 + 104) & 4) != 0 )
        {
          IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
          *(_BYTE *)(a1 + 104) &= ~4u;
        }
        RaidDeleteDeferredQueue(a1 + 1264);
      }
    }
  }
  *(_BYTE *)(a1 + 104) |= 2u;
  return (unsigned int)v2;
}
