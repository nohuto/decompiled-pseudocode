/*
 * XREFs of sub_14096FE9C @ 0x14096FE9C
 * Callers:
 *     sub_14026E564 @ 0x14026E564 (sub_14026E564.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 *     sub_14059E660 @ 0x14059E660 (sub_14059E660.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 */

__int64 __fastcall sub_14096FE9C(__int64 a1, int a2)
{
  bool v2; // zf
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  v2 = a2 == 0;
  v3 = (unsigned __int64)*(unsigned int *)(a1 + 44) >> 9;
  if ( v2 )
  {
    sub_140216E18((__int64)&StartContext, v3);
    return 1LL;
  }
  result = sub_1402821F4(&StartContext, v3, 1024LL);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
