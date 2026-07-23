/*
 * XREFs of DbgPrompt @ 0x1800EB110
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x1800E0678 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800F8BD0 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A2B40 (DebugPrompt.c)
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
