/*
 * XREFs of RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C00563FC
 * Callers:
 *     RaidUnitRequestTimeout @ 0x1C005532C (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitUnresponsiveDeviceMarkingNeeded(__int64 a1)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 3232) )
  {
    if ( (*(_BYTE *)(a1 + 450) & 2) == 0 )
    {
      v2 = *(_DWORD *)(a1 + 3244);
      if ( v2 )
      {
        if ( v2 == -1 )
        {
          return *(_QWORD *)(a1 + 1280) != 0LL;
        }
        else if ( *(_QWORD *)(a1 + 1280) )
        {
          return KeQueryUnbiasedInterruptTime() < *(_QWORD *)(a1 + 1280)
                                                + (unsigned __int64)(unsigned int)(10000 * *(_DWORD *)(a1 + 3244));
        }
      }
    }
  }
  return v1;
}
