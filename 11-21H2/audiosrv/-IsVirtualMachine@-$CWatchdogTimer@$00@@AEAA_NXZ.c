/*
 * XREFs of ?IsVirtualMachine@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C89BC
 * Callers:
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C86D4 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 */

bool CWatchdogTimer<1>::IsVirtualMachine()
{
  DWORD pcbData[4]; // [rsp+40h] [rbp-238h] BYREF
  _BYTE pvData[528]; // [rsp+50h] [rbp-228h] BYREF

  memset_0(pvData, 0, 0x208uLL);
  pcbData[0] = 520;
  return RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Virtual Machine\\Guest\\Parameters",
           L"PhysicalHostName",
           2u,
           0LL,
           pvData,
           pcbData) == 0;
}
