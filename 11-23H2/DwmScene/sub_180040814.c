/*
 * XREFs of sub_180040814 @ 0x180040814
 * Callers:
 *     sub_180033324 @ 0x180033324 (sub_180033324.c)
 * Callees:
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     sub_18003EF54 @ 0x18003EF54 (sub_18003EF54.c)
 *     sub_18003FBE0 @ 0x18003FBE0 (sub_18003FBE0.c)
 *     sub_180041440 @ 0x180041440 (sub_180041440.c)
 */

// Hidden C++ exception states: #wind=3
__int64 **__fastcall sub_180040814(__int64 **a1, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0LL;
  v5 = sub_18001C190();
  if ( v5 )
    v4 = (__int64 *)sub_18003FBE0(v5, a2);
  sub_18003EF54(a1, v4);
  sub_18002A070((__int64)(*a1 + 2), (__int64)v7);
  sub_180041440(*a1);
  sub_180010F54((__int64)v7);
  return a1;
}
