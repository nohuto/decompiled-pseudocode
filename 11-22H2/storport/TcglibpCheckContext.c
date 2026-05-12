/*
 * XREFs of TcglibpCheckContext @ 0x1C007AAC4
 * Callers:
 *     TcglibActivateLockingSpEx @ 0x1C0079150 (TcglibActivateLockingSpEx.c)
 *     TcglibAssignNamespaceLocking @ 0x1C00792A4 (TcglibAssignNamespaceLocking.c)
 *     TcglibConfigureLockingSpEx @ 0x1C0079504 (TcglibConfigureLockingSpEx.c)
 *     TcglibDeassignNamespaceLocking @ 0x1C00796A4 (TcglibDeassignNamespaceLocking.c)
 *     TcglibEraseBand @ 0x1C0079868 (TcglibEraseBand.c)
 *     TcglibGetBandMetadata @ 0x1C0079954 (TcglibGetBandMetadata.c)
 *     TcglibGetLockingObject @ 0x1C0079A50 (TcglibGetLockingObject.c)
 *     TcglibGetLockingObjects @ 0x1C0079AD0 (TcglibGetLockingObjects.c)
 *     TcglibGetMsid @ 0x1C0079BA0 (TcglibGetMsid.c)
 *     TcglibRevertLockingSpEx @ 0x1C0079D28 (TcglibRevertLockingSpEx.c)
 *     TcglibSetAdmin1Pin @ 0x1C0079E88 (TcglibSetAdmin1Pin.c)
 *     TcglibSetBand @ 0x1C0079FC0 (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x1C007A198 (TcglibSetBandLocationEx.c)
 *     TcglibSetBandMetadata @ 0x1C007A358 (TcglibSetBandMetadata.c)
 *     TcglibSetBandPin @ 0x1C007A4AC (TcglibSetBandPin.c)
 *     TcglibSetSidPin @ 0x1C007A5FC (TcglibSetSidPin.c)
 *     TcglibStartTransaction @ 0x1C007A908 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x1C007A998 (TcglibStopTransaction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TcglibpCheckContext(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = -1073741309;
  if ( a1 && a2 )
  {
    if ( *(_QWORD *)(a2 + 40)
      && *(_QWORD *)(a2 + 48)
      && *(_DWORD *)(a1 + 8)
      && a2 == *(_QWORD *)(a1 + 16)
      && (unsigned int)(*(_DWORD *)a2 - 1) <= 1 )
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
