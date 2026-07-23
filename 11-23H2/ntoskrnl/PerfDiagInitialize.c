/*
 * XREFs of PerfDiagInitialize @ 0x140B6F6BC
 * Callers:
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwRegister @ 0x14078DA70 (EtwRegister.c)
 *     EtwUnregister @ 0x1407C10D0 (EtwUnregister.c)
 *     EtwWriteStartScenario @ 0x14085DE40 (EtwWriteStartScenario.c)
 */

int PerfDiagInitialize()
{
  int result; // eax
  ULONGLONG RegHandle; // [rsp+30h] [rbp-20h] BYREF
  GUID OutputBuffer; // [rsp+38h] [rbp-18h] BYREF

  RegHandle = 0LL;
  qword_140C326E0 = 0LL;
  dword_140C326E8 = 0;
  EtwRegister(
    &MS_Kernel_BootDiagnostics_SystemProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootSystemProxyCallback,
    0LL,
    &PerfDiagGlobals);
  EtwRegister(
    &MS_Kernel_BootDiagnostics_UserProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootUserProxyCallback,
    0LL,
    &qword_140C326C8);
  EtwRegister(
    &MS_Kernel_SecondaryLogonDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpSecondaryLogonProxyCallback,
    0LL,
    &qword_140C326D0);
  EtwRegister(
    &MS_Kernel_ShutdownDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpShutdownProxyCallback,
    0LL,
    &qword_140C326D8);
  result = EtwRegister(&MS_Kernel_BootDiagnostics_Provider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    OutputBuffer.Data1 = 1729382729;
    *(_DWORD *)&OutputBuffer.Data2 = 1213813042;
    *(_DWORD *)OutputBuffer.Data4 = 933705344;
    *(_DWORD *)&OutputBuffer.Data4[4] = -668649292;
    EtwWriteStartScenario((ULONG_PTR *)RegHandle, &KMBootEvt_SystemBoot_Start, &OutputBuffer, 0, 0LL);
    return EtwUnregister(RegHandle);
  }
  return result;
}
