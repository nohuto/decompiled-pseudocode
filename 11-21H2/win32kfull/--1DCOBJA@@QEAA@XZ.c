/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0123DD4
 * Callers:
 *     GreCancelDC @ 0x1C029E32C (GreCancelDC.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(__int64 **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this + 2);
}
