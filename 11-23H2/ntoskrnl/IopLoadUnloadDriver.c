/*
 * XREFs of IopLoadUnloadDriver @ 0x1407CEE50
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x14035AF70 (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     VfIsVerifierEnabled @ 0x140293980 (VfIsVerifierEnabled.c)
 *     Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage @ 0x14040FD88 (Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     VfDriverProcessUnload @ 0x1405CEE20 (VfDriverProcessUnload.c)
 *     DifIsPluginRunningWithoutReboot @ 0x1405D4E74 (DifIsPluginRunningWithoutReboot.c)
 *     IopLoadDriver @ 0x1407945D8 (IopLoadDriver.c)
 *     IopOpenRegistryKey @ 0x1407CEF1C (IopOpenRegistryKey.c)
 *     IopCallDriverReinitializationRoutines @ 0x1407CEF74 (IopCallDriverReinitializationRoutines.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  Handle = 0LL;
  Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage();
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    (*(void (**)(void))(v2 + 104))();
    if ( (unsigned int)VfIsVerifierEnabled() || DifIsPluginRunningWithoutReboot() )
      VfDriverProcessUnload(*(_QWORD *)(a1 + 56));
    v3 = 0;
  }
  else
  {
    v3 = IopOpenRegistryKey(&Handle, 0LL, *(_QWORD *)(a1 + 64), 131097LL, 0);
    if ( v3 >= 0 )
    {
      v3 = IopLoadDriver(Handle, 1, 0, &v5);
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
