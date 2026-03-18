/*
 * XREFs of ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0265684
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009313C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x1C02D6070 (-CleanupPvtData@@YAXPEAVPFF@@@Z.c)
 * Callees:
 *     <none>
 */

SEMOBJ *__fastcall SEMOBJ::SEMOBJ(SEMOBJ *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  GreAcquireSemaphore(a2);
  return this;
}
