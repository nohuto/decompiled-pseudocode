/*
 * XREFs of sub_140429830 @ 0x140429830
 * Callers:
 *     DbgPrompt @ 0x1405E4170 (DbgPrompt.c)
 * Callees:
 *     <none>
 */

__int64 sub_140429830()
{
  __int64 result; // rax

  result = 2LL;
  __asm { int     2Dh; Windows NT - eax = 2: debug prompt }
  __debugbreak();
  return result;
}
