/*
 * XREFs of DbgPrompt @ 0x1800EC440
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800F9FE0 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A4C00 (DebugPrompt.c)
 */

ULONG __cdecl DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
