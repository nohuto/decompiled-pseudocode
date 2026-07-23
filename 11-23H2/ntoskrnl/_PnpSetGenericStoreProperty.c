/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x1407973B8
 * Callers:
 *     _PnpSetObjectPropertyWorker @ 0x140796EEC (_PnpSetObjectPropertyWorker.c)
 *     PiDqIrpPropertySet @ 0x1408000A4 (PiDqIrpPropertySet.c)
 * Callees:
 *     _PnpSetPropertyWorker @ 0x140797E34 (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x14086F87C (_PnpDeletePropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3);
  else
    return PnpDeletePropertyWorker(a1);
}
