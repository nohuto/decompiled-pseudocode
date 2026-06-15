/*
 * XREFs of ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x18003ACD8
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18003A160 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?Reevaluate@CPowerReference@@QEAAXPEAVCVADServer@@@Z @ 0x18011A610 (-Reevaluate@CPowerReference@@QEAAXPEAVCVADServer@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVADServer::QueryState(CVADServer *this, int *a2, int *a3, int *a4)
{
  int v4; // eax

  if ( a2 )
    *a2 = *((unsigned __int8 *)this + 164);
  if ( a3 )
  {
    if ( *((_DWORD *)this + 58) || (v4 = 1, (*((_BYTE *)this + 236) & 1) == 0) )
      v4 = 0;
    *a3 = v4;
  }
  if ( a4 )
    *a4 = *((_DWORD *)this + 61);
  return 0LL;
}
