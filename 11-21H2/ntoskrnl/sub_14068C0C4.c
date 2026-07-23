/*
 * XREFs of sub_14068C0C4 @ 0x14068C0C4
 * Callers:
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_1406C9FA0 @ 0x1406C9FA0 (sub_1406C9FA0.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_140919A88 @ 0x140919A88 (sub_140919A88.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_14068C0C4(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 result; // rax
  __int16 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  sub_140AB4534(&v6);
  v2 = sub_140AB44C0(BugCheckParameter2, 0LL);
  if ( !v2 )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x13D7uLL);
  v4 = sub_140AB451C(v3, v2, &v6);
  if ( *(_QWORD *)(v4 + 20) == *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL) )
    return 0LL;
  result = sub_14071F430(BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(v4 + 20) = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL);
    return 0LL;
  }
  return result;
}
