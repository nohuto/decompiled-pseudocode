/*
 * XREFs of sub_180035320 @ 0x180035320
 * Callers:
 *     sub_180067030 @ 0x180067030 (sub_180067030.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800333A4 @ 0x1800333A4 (sub_1800333A4.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180034AB0 @ 0x180034AB0 (sub_180034AB0.c)
 *     sub_18004F9D0 @ 0x18004F9D0 (sub_18004F9D0.c)
 *     sub_18007494C @ 0x18007494C (sub_18007494C.c)
 */

__int64 *__fastcall sub_180035320(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 *result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v4 = sub_180034094(a1, 1);
  sub_18007494C(v4, 1LL);
  *(_DWORD *)(a1 + 696) = *(_DWORD *)(a2 + 56);
  v5 = sub_18004F9D0();
  sub_180034AB0((_QWORD *)a1, v5);
  result = sub_1800333A4(a1, &v7);
  if ( v8 )
    return (__int64 *)sub_180010530(v8);
  return result;
}
