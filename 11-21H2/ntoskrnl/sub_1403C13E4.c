/*
 * XREFs of sub_1403C13E4 @ 0x1403C13E4
 * Callers:
 *     sub_140A693D8 @ 0x140A693D8 (sub_140A693D8.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     sub_1402F3684 @ 0x1402F3684 (sub_1402F3684.c)
 *     sub_1403C1454 @ 0x1403C1454 (sub_1403C1454.c)
 */

__int64 __fastcall sub_1403C13E4(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0LL;
  result = sub_1403C1454((unsigned int)&v7, 0, (unsigned int)sub_1403C6DC0, a4);
  if ( (int)result >= 0 )
  {
    v6 = v7;
    result = sub_1402F3684(v7);
    if ( (int)result >= 0 )
      *(_QWORD *)(a1 + 13112) = v6;
  }
  return result;
}
