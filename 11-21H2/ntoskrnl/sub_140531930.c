/*
 * XREFs of sub_140531930 @ 0x140531930
 * Callers:
 *     <none>
 * Callees:
 *     sub_140532A28 @ 0x140532A28 (sub_140532A28.c)
 */

__int64 __fastcall sub_140531930(__int64 a1, unsigned __int16 a2, unsigned __int8 a3)
{
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  result = *(_QWORD *)(*(_QWORD *)a1 + 8224LL);
  if ( (result & 0x10) != 0 )
  {
    v5[1] = 0x7FFFFFFFFFFFF001LL;
    v5[0] = a2 | ((a3 | 0x4000000000LL) << 24);
    sub_140532A28(a1, v5, 0LL);
    v6[1] = 0LL;
    v6[0] = 0x1000000000000000LL;
    return sub_140532A28(a1, v6, 0LL);
  }
  return result;
}
