/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x1407CD4A8
 * Callers:
 *     PnpGetSystemPdoList @ 0x1407CD230 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x1407CD490 (PnpFreeSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpFreePdoDeviceList(PVOID *P)
{
  unsigned int i; // ebx

  if ( P )
  {
    for ( i = 0; i < *(_DWORD *)P; ++i )
      ObfDereferenceObject(P[i + 1]);
    ExFreePoolWithTag(P, 0);
  }
}
