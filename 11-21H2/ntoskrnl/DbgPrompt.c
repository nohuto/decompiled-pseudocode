/*
 * XREFs of DbgPrompt @ 0x1405E4170
 * Callers:
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_1409B1558 @ 0x1409B1558 (sub_1409B1558.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 * Callees:
 *     sub_140429830 @ 0x140429830 (sub_140429830.c)
 */

ULONG __stdcall DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return sub_140429830();
}
