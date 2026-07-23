/*
 * XREFs of RtlGetExtendedContextLength @ 0x180054950
 * Callers:
 *     PsspCaptureThreadInformation @ 0x180129CD0 (PsspCaptureThreadInformation.c)
 *     PsspInitializeContextOrExtendedContext @ 0x18012A2E4 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x180054D00 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x180054F94 (RtlpValidateContextFlags.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  NTSTATUS result; // eax
  ULONG v4; // r11d
  ULONG64 v5; // r8
  char v6; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpValidateContextFlags(ContextFlags, &v6);
  v5 = 0LL;
  if ( result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v5 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlGetExtendedContextLength2(v4, ContextLength, v5);
  }
  return result;
}
