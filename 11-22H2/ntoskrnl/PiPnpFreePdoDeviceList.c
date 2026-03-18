/*
 * XREFs of PiPnpFreePdoDeviceList @ 0x1407CD768
 * Callers:
 *     PnpGetSystemPdoList @ 0x1407CD4F0 (PnpGetSystemPdoList.c)
 *     PnpFreeSystemPdoList @ 0x1407CD750 (PnpFreeSystemPdoList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
