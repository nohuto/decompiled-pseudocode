/*
 * XREFs of ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x180285B88
 * Callers:
 *     ??1?$unique_ptr@VCMmcssTask@@U?$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ @ 0x180285B2C (--1-$unique_ptr@VCMmcssTask@@U-$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ.c)
 *     ??1CKst@@QEAA@XZ @ 0x180285B4C (--1CKst@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801B5738 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

CMmcssTask *__fastcall CMmcssTask::`scalar deleting destructor'(CMmcssTask *this)
{
  CMmcssTask::UnloadRuntime(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  operator delete(this);
  return this;
}
