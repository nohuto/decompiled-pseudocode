/*
 * XREFs of sub_1C00389F4 @ 0x1C00389F4
 * Callers:
 *     sub_1C0037120 @ 0x1C0037120 (sub_1C0037120.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 */

__int64 __fastcall sub_1C00389F4(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-18h] BYREF

  if ( !*(_QWORD *)(a1 + 5544) || !(unsigned int)sub_1C0007798(a1, 18) )
    return 3221225659LL;
  if ( *a3 != 1 || a3[1] != 40 )
    return 3221225485LL;
  result = sub_1C001A364(a1 + 336);
  if ( (_DWORD)result )
  {
    v6 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)BugCheckParameter2 = 0LL;
    sub_1C0010EE0(v6, (__int64)BugCheckParameter2);
    KeBugCheckEx(0xF0u, 4uLL, BugCheckParameter2[1], 1uLL, 0LL);
  }
  return result;
}
