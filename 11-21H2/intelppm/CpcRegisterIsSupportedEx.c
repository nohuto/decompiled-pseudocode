/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x1C0002474
 * Callers:
 *     ValidateAcpiCPC @ 0x1C0026978 (ValidateAcpiCPC.c)
 *     InitAcpiCpc @ 0x1C0026EAC (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall CpcRegisterIsSupportedEx(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)a1 || *(_QWORD *)(a1 + 4) )
    return 1;
  return result;
}
