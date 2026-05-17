/*
 * XREFs of LdrpCodeAuthzCheckDllAllowed @ 0x180010DF8
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpCodeAuthzCheckDllAllowed(__int64 a1, __int64 a2)
{
  if ( LdrpAdvapi32DllHandle )
    return ((__int64 (__fastcall *)(__int64, __int64))(__ROR8__(
                                                         LdrpSaferIsDllAllowedRoutine,
                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
             a2,
             a1);
  else
    return 0LL;
}
