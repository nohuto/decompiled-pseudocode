/*
 * XREFs of DbgPrompt @ 0x1800EB110
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x1800E0678 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800F8BD0 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A2B40 (DebugPrompt.c)
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
