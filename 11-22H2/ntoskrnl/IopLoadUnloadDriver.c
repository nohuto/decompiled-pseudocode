/*
 * XREFs of IopLoadUnloadDriver @ 0x1407CF3E0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x14035A970 (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     VfIsVerifierEnabled @ 0x140293860 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     VfDriverProcessUnload @ 0x1405CEEB0 (VfDriverProcessUnload.c)
 *     DifIsPluginRunningWithoutReboot @ 0x1405D4F04 (DifIsPluginRunningWithoutReboot.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     IopOpenRegistryKey @ 0x1407CF480 (IopOpenRegistryKey.c)
 *     IopCallDriverReinitializationRoutines @ 0x1407CF4D8 (IopCallDriverReinitializationRoutines.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v2 = *(_QWORD *)(a1 + 56);
  KeyHandle = 0LL;
  if ( v2 )
  {
    (*(void (**)(void))(v2 + 104))();
    if ( (unsigned int)VfIsVerifierEnabled() || DifIsPluginRunningWithoutReboot() )
      VfDriverProcessUnload(*(_QWORD *)(a1 + 56));
    v3 = 0;
  }
  else
  {
    v3 = IopOpenRegistryKey(&KeyHandle, 0LL, *(_QWORD *)(a1 + 64), 131097LL, 0);
    if ( v3 >= 0 )
    {
      v3 = IopLoadDriver(KeyHandle, 1, 0, &v5);
      if ( v3 == -1073740955 )
      {
        v3 = v5;
      }
      else if ( v3 == -1073740914 )
      {
        v3 = -1073741772;
      }
      IopCallDriverReinitializationRoutines(0LL);
    }
  }
  *(_DWORD *)(a1 + 72) = v3;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
