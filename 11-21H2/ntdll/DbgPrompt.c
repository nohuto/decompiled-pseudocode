/*
 * XREFs of DbgPrompt @ 0x1800EBC60
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800F8990 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A7D00 (DebugPrompt.c)
 */

__int64 __fastcall DbgPrompt(__int64 a1)
{
  __int64 v1; // rax

  v1 = -1LL;
  do
    ++v1;
  while ( *(_BYTE *)(a1 + v1) );
  return DebugPrompt();
}
