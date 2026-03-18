/*
 * XREFs of ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0131240
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C02998F4 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall HmgInsertObjectHelper::~HmgInsertObjectHelper(HmgInsertObjectHelper *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this);
}
