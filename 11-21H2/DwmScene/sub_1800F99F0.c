/*
 * XREFs of sub_1800F99F0 @ 0x1800F99F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_1800F69A0 @ 0x1800F69A0 (sub_1800F69A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F99F0(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 *v8; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  __int64 v12[5]; // [rsp+28h] [rbp-60h] BYREF

  v12[4] = a3;
  v8 = sub_1800129F4(v12, a3);
  v9 = sub_1800F69A0(a1, a2, (char **)v8, a4);
  v10 = *(_QWORD *)(a3 + 24);
  if ( v10 >= 8 )
    sub_180010884(*(char **)a3, 2 * v10 + 2);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 7LL;
  *(_WORD *)a3 = 0;
  return v9;
}
