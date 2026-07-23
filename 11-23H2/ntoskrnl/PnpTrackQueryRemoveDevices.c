/*
 * XREFs of PnpTrackQueryRemoveDevices @ 0x140964C6C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408676B8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessCompletedEject @ 0x1409591F0 (PnpProcessCompletedEject.c)
 * Callees:
 *     PipSetDevNodeUserFlags @ 0x1407908AC (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1407935D0 (PipClearDevNodeUserFlags.c)
 *     IopEnumerateRelations @ 0x1408685D0 (IopEnumerateRelations.c)
 */

bool __fastcall PnpTrackQueryRemoveDevices(unsigned int **a1, char a2)
{
  bool result; // al
  __int64 v5; // rcx
  int v6; // [rsp+50h] [rbp+18h] BYREF
  int v7; // [rsp+54h] [rbp+1Ch]
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    result = IopEnumerateRelations(a1, &v6, &v8, 0LL, 0LL);
    if ( !result )
      break;
    if ( v8 )
      v5 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
    else
      v5 = 0LL;
    if ( a2 )
      PipSetDevNodeUserFlags(v5, 256);
    else
      PipClearDevNodeUserFlags(v5, 256);
  }
  return result;
}
