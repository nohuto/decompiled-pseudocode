/*
 * XREFs of RIMLockShared @ 0x1C0096B30
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00D1A34 (-Allocate@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00D1E9C (-Free@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?IsAllocationBusy@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA_NPEAX@Z @ 0x1C00D3344 (-IsAllocationBusy@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA_NPEAX@Z.c)
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01F8AC4 (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMLockShared(__int64 a1)
{
  KeEnterCriticalRegion();
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
