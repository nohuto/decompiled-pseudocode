/*
 * XREFs of ?UpdateObservationState@?$CBaseInputObserverServer@$0M@@@AEAAXXZ @ 0x18012E8F4
 * Callers:
 *     ?RegisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x18012E730 (-RegisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@.c)
 *     ?UnregisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x18012E870 (-UnregisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInputObserverServer<12>::UpdateObservationState(__int64 a1)
{
  __int64 v1; // r8

  v1 = 1LL;
  if ( *(_QWORD *)(a1 + 176) )
  {
    v1 = 2LL;
    if ( *(_DWORD *)(a1 + 224) )
      v1 = 4LL;
  }
  return NtMITSetInputObservationState(1LL, 4LL, v1);
}
