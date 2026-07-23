/*
 * XREFs of RtlInitializeExtendedContext @ 0x1800548E0
 * Callers:
 *     PsspInitializeContextOrExtendedContext @ 0x18012A2E4 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x180054DF0 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x180054F94 (RtlpValidateContextFlags.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  NTSTATUS result; // eax
  ULONG v6; // r11d
  ULONG64 v7; // r9
  char v8; // [rsp+48h] [rbp+20h] BYREF

  result = RtlpValidateContextFlags(ContextFlags, &v8);
  v7 = 0LL;
  if ( result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v7 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlInitializeExtendedContext2(Context, v6, ContextEx, v7);
  }
  return result;
}
