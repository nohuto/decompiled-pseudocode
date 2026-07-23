/*
 * XREFs of sub_14052FFE0 @ 0x14052FFE0
 * Callers:
 *     sub_1405300A8 @ 0x1405300A8 (sub_1405300A8.c)
 *     sub_140A64748 @ 0x140A64748 (sub_140A64748.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14052E2BC @ 0x14052E2BC (sub_14052E2BC.c)
 *     sub_14052E304 @ 0x14052E304 (sub_14052E304.c)
 *     sub_14052F800 @ 0x14052F800 (sub_14052F800.c)
 */

LONGLONG __fastcall sub_14052FFE0(__int64 a1, __int64 a2, __int64 a3, int a4, __int16 a5, __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  LONGLONG result; // rax
  int v13; // [rsp+20h] [rbp-78h]
  LONGLONG v14[2]; // [rsp+30h] [rbp-68h] BYREF
  signed __int64 v15[8]; // [rsp+40h] [rbp-58h] BYREF

  v14[0] = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( a4 != 1 )
    sub_14052E304(a1, a4, a5, a6, v13, v15);
  sub_14052F800(v9, a2, v10, v15);
  sub_14052E2BC(v11, a2, 0, (__int64)v14, v14);
  result = v14[0];
  **(_QWORD **)(a2 + 48) = v14[0];
  return result;
}
