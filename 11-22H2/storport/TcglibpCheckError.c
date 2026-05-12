/*
 * XREFs of TcglibpCheckError @ 0x1C007AB10
 * Callers:
 *     TcglibActivateLockingSpEx @ 0x1C0079150 (TcglibActivateLockingSpEx.c)
 *     TcglibAssignNamespaceLocking @ 0x1C00792A4 (TcglibAssignNamespaceLocking.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
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
 *     TcglibpOpenSessionWithRetry @ 0x1C007F0A0 (TcglibpOpenSessionWithRetry.c)
 * Callees:
 *     TcglibStackReset @ 0x1C007A710 (TcglibStackReset.c)
 */

__int64 __fastcall TcglibpCheckError(__int64 a1, volatile __int32 *a2, int a3)
{
  if ( a3 == -1073741643 || a3 == -1073741618 || a3 == -1073741436 || a3 == -1073741435 || a3 == -1073741434 )
  {
    a3 = TcglibStackReset(a1, (__int64)a2);
    if ( a3 >= 0 )
    {
      a3 = -1073741309;
      _InterlockedExchange(a2, 4);
    }
  }
  else if ( a3 == -1073741309 )
  {
    _InterlockedExchange(a2, 4);
  }
  return (unsigned int)a3;
}
