/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x1C0004BA4
 * Callers:
 *     InitAcpiCpc @ 0x1C0024398 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C002E600 (ValidateAcpiCPC.c)
 *     InitCpcStatesInternal @ 0x1C0031044 (InitCpcStatesInternal.c)
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
