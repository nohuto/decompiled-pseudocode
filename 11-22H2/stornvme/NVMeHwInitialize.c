/*
 * XREFs of NVMeHwInitialize @ 0x1C0008470
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart2 @ 0x1C000DAA0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000DD8C (NVMeControllerInitPart3.c)
 */

char __fastcall NVMeHwInitialize(__int64 a1)
{
  char v1; // bl
  int v2; // edi

  v1 = 0;
  v2 = a1;
  if ( *(_BYTE *)(a1 + 20) )
  {
    if ( !(unsigned int)NVMeControllerInitPart2(a1) )
      return NVMeControllerInitPart3(v2);
  }
  else
  {
    StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize);
    return 0;
  }
  return v1;
}
