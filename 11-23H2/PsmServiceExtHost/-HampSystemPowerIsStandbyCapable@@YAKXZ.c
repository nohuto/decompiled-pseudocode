/*
 * XREFs of ?HampSystemPowerIsStandbyCapable@@YAKXZ @ 0x18005135C
 * Callers:
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180044AB8 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 HampSystemPowerIsStandbyCapable(void)
{
  NTSTATUS v0; // eax
  unsigned int v1; // ecx
  _BYTE OutputBuffer[80]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(OutputBuffer, 0, 0x4CuLL);
  v0 = NtPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu);
  v1 = 0;
  if ( v0 >= 0 )
    return OutputBuffer[20];
  return v1;
}
