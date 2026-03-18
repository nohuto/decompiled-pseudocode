/*
 * XREFs of ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0156178
 * Callers:
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C0049DDC (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z @ 0x1C00D20C0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C004005C (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall DLODCOBJ::vUnlock(DLODCOBJ *this)
{
  if ( *(_QWORD *)this && *((_BYTE *)this + 48) )
  {
    *(_DWORD *)(*(_QWORD *)this + 40LL) &= ~2u;
    *((_BYTE *)this + 48) = 0;
  }
  XDCOBJ::vUnlockNoNullSet((DC **)this);
  *(_QWORD *)this = 0LL;
}
