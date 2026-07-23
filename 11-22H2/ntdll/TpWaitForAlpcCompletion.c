/*
 * XREFs of TpWaitForAlpcCompletion @ 0x180051DB0
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x180050958 (TppAlpcpValidateAlpc.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 *     ZwAlpcQueryInformation @ 0x18009FF00 (ZwAlpcQueryInformation.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)TppAlpcpValidateAlpc((_PEB_LDR_DATA *)Alpc, 0LL, 0LL) )
  {
    PortInformation = *((_DWORD *)Alpc + 70);
    if ( PortInformation )
      ZwAlpcQueryInformation(*((HANDLE *)Alpc + 34), AlpcWaitForPortReferences, &PortInformation, 4u, 0LL);
    TppBarrierAdjust((char *)Alpc + 128, 0LL, 1LL);
  }
}
