/*
 * XREFs of ?ManageSharedMemory@CDevice@DirectComposition@@AEAAXXZ @ 0x1800F25D0
 * Callers:
 *     ?ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ @ 0x1800F66EC (-ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ.c)
 * Callees:
 *     ?IsAvailable@CCompositorSynchronizedObject@DirectComposition@@QEAA_NXZ @ 0x180085CEC (-IsAvailable@CCompositorSynchronizedObject@DirectComposition@@QEAA_NXZ.c)
 *     DirectComposition::DeleteExpiredFreeSharedSections @ 0x1800F1624 (DirectComposition--DeleteExpiredFreeSharedSections.c)
 *     ?Dispose@CSharedAllocationBase@DirectComposition@@QEAAX_K@Z @ 0x1800FB264 (-Dispose@CSharedAllocationBase@DirectComposition@@QEAAX_K@Z.c)
 */

void __fastcall DirectComposition::CDevice::ManageSharedMemory(DirectComposition::CDevice *this)
{
  ULONGLONG TickCount64; // rsi
  char *v3; // r14
  char *v4; // rbx
  _QWORD *v5; // rdi

  TickCount64 = GetTickCount64();
  DirectComposition::DeleteExpiredFreeSharedSections((_QWORD **)this + 63, TickCount64);
  DirectComposition::DeleteExpiredFreeSharedSections((_QWORD **)this + 67, TickCount64);
  DirectComposition::DeleteExpiredFreeSharedSections((_QWORD **)this + 71, TickCount64);
  v3 = (char *)this + 488;
  v4 = (char *)*((_QWORD *)this + 61);
  while ( v4 != v3 )
  {
    v5 = (_QWORD *)((unsigned __int64)(v4 - 32) & -(__int64)(v4 != 0LL));
    v4 = (char *)v5[4];
    if ( !DirectComposition::CCompositorSynchronizedObject::IsAvailable((DirectComposition::CCompositorSynchronizedObject *)(v5 + 2)) )
      break;
    DirectComposition::CSharedAllocationBase::Dispose((DirectComposition::CSharedAllocationBase *)v5, TickCount64);
  }
}
