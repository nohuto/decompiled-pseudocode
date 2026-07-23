/*
 * XREFs of sub_140863FD4 @ 0x140863FD4
 * Callers:
 *     sub_140AFF910 @ 0x140AFF910 (sub_140AFF910.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 */

__int64 sub_140863FD4()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  qword_140C0E988 = 0LL;
  stru_140C0E980.Next = 0LL;
  result = ExSubscribeWnfStateChange((int)&v1, (int)&stru_1400134F8, 1, 0, (__int64)sub_140646C90, 0LL);
  if ( (int)result >= 0 )
  {
    result = v1;
    qword_140C0E998 = v1;
  }
  return result;
}
