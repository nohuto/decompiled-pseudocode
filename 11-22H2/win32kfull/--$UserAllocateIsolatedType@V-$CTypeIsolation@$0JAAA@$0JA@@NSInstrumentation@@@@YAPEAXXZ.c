/*
 * XREFs of ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C001FFA0
 * Callers:
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C001FF28 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     InternalRegisterClassEx @ 0x1C00CB7A0 (InternalRegisterClassEx.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00A69D0 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>()
{
  if ( *gpUserTypeIsolation )
    return NSInstrumentation::CTypeIsolation<36864,144>::Allocate();
  else
    return 0LL;
}
