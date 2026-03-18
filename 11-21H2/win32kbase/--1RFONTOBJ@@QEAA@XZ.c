/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C0087050
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0086F68 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0169AB0 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x81) != 0 && qword_1C029B530 && (int)qword_1C029B530() >= 0 )
    {
      if ( qword_1C029B538 )
        qword_1C029B538(this);
    }
    RFONTOBJ::vReleaseCache(this);
  }
}
