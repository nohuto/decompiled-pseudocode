/*
 * XREFs of IopLoadUnloadDriver @ 0x1406DE800
 * Callers:
 *     IopLoadDriverImage @ 0x140255A78 (IopLoadDriverImage.c)
 *     IopCompleteUnloadOrDelete @ 0x1402D5CA8 (IopCompleteUnloadOrDelete.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     VfIsVerifierEnabled @ 0x1402DA4B0 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfDriverProcessUnload @ 0x1405FEB18 (VfDriverProcessUnload.c)
 *     DifIsPluginRunningWithoutReboot @ 0x140604874 (DifIsPluginRunningWithoutReboot.c)
 *     IopCallDriverReinitializationRoutines @ 0x1406DE8A0 (IopCallDriverReinitializationRoutines.c)
 *     IopOpenRegistryKey @ 0x1406DE960 (IopOpenRegistryKey.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v2; // rcx
  int Driver; // ebx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  Handle = 0LL;
  if ( v2 )
  {
    (*(void (**)(void))(v2 + 104))();
    if ( (unsigned int)VfIsVerifierEnabled() || DifIsPluginRunningWithoutReboot() )
      VfDriverProcessUnload(*(_QWORD *)(a1 + 56));
    Driver = 0;
  }
  else
  {
    Driver = IopOpenRegistryKey(&Handle, 0LL, *(_QWORD *)(a1 + 64), 131097LL, 0);
    if ( Driver >= 0 )
    {
      Driver = IopLoadDriver(Handle);
      if ( Driver == -1073740955 )
      {
        Driver = 0;
      }
      else if ( Driver == -1073740914 )
      {
        Driver = -1073741772;
      }
      IopCallDriverReinitializationRoutines(0LL);
    }
  }
  *(_DWORD *)(a1 + 72) = Driver;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
