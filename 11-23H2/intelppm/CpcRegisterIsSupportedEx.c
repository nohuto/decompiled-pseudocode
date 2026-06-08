/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x1C00033C0
 * Callers:
 *     ValidateAcpiCPC @ 0x1C002956C (ValidateAcpiCPC.c)
 *     InitAcpiCpc @ 0x1C002A90C (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002AB4C (InitCpcStatesInternal.c)
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
