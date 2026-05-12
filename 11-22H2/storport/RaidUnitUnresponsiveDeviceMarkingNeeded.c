/*
 * XREFs of RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C00631CC
 * Callers:
 *     RaidUnitRequestTimeout @ 0x1C00620B8 (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitUnresponsiveDeviceMarkingNeeded(__int64 a1)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 3280) )
  {
    if ( (*(_BYTE *)(a1 + 450) & 2) == 0 )
    {
      v2 = *(_DWORD *)(a1 + 3292);
      if ( v2 )
      {
        if ( v2 == -1 )
        {
          return *(_QWORD *)(a1 + 1336) != 0LL;
        }
        else if ( *(_QWORD *)(a1 + 1336) )
        {
          return KeQueryUnbiasedInterruptTime() < *(_QWORD *)(a1 + 1336)
                                                + (unsigned __int64)(unsigned int)(10000 * *(_DWORD *)(a1 + 3292));
        }
      }
    }
  }
  return v1;
}
