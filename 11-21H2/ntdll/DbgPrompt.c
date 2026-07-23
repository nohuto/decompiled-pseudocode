/*
 * XREFs of DbgPrompt @ 0x1800EBC60
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800F8990 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A7D00 (DebugPrompt.c)
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
