/*
 * XREFs of ?ndisVerifierGetRoutineAddress@@YAPEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00AD250
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetRoutineAddress @ 0x1C00AD630 (NdisGetRoutineAddress.c)
 */

PVOID __fastcall ndisVerifierGetRoutineAddress(PNDIS_STRING NdisRoutineName)
{
  __int64 v2; // rbx

  v2 = 0LL;
  while ( !RtlEqualUnicodeString(NdisRoutineName, (PCUNICODE_STRING)&asc_1C00D02C0[12 * v2], 1u) )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 0x19 )
      return NdisGetRoutineAddress(NdisRoutineName);
  }
  return *(PVOID *)&asc_1C00D02C0[12 * v2 + 8];
}
