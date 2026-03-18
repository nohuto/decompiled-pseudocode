/*
 * XREFs of NtGdiEngCreateDeviceSurface @ 0x1C014DDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C014DE4C (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285520 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

HSURF __fastcall NtGdiEngCreateDeviceSurface(DHSURF dhsurf, SIZEL a2, int a3)
{
  struct _EPROCESS *CurrentProcess; // rax

  if ( gUMPDSecurityLevel == 2
    || gUMPDSecurityLevel
    && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(dhsurf, gUMPDSecurityLevel),
        (unsigned int)bIsProcessLocalSystem(CurrentProcess))
    || (unsigned int)ValidUmpdSizl(a2, 0) )
  {
    if ( (unsigned int)(a3 - 1) <= 7 )
      return EngCreateDeviceSurface(dhsurf, a2, a3 | 0x8000u);
  }
  else if ( gfUMPDDebug )
  {
    DbgPrint(
      "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateDeviceSurface:Invalid sizl.\n",
      3839);
  }
  return 0LL;
}
