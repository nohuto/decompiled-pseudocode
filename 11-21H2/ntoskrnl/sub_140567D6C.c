/*
 * XREFs of sub_140567D6C @ 0x140567D6C
 * Callers:
 *     sub_1405672C0 @ 0x1405672C0 (sub_1405672C0.c)
 *     sub_140567390 @ 0x140567390 (sub_140567390.c)
 *     sub_140567874 @ 0x140567874 (sub_140567874.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403C2310 (HeadlessDispatch.c)
 */

__int64 __fastcall sub_140567D6C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a2 )
      return HeadlessDispatch(23LL, a1, a2, 0LL, 0LL);
  }
  return result;
}
