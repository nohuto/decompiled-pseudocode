/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x1C00047F4
 * Callers:
 *     InitAcpiCpc @ 0x1C0023728 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C002D828 (ValidateAcpiCPC.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
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
