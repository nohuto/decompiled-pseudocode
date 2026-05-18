/*
 * XREFs of sub_1800548AC @ 0x1800548AC
 * Callers:
 *     sub_180054690 @ 0x180054690 (sub_180054690.c)
 *     sub_180054790 @ 0x180054790 (sub_180054790.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180029550 @ 0x180029550 (sub_180029550.c)
 *     sub_180029700 @ 0x180029700 (sub_180029700.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800548AC(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF

  sub_180011C50(*a2 + 72LL, &v7);
  v4 = *(_DWORD *)(*a2 + 88LL);
  sub_180029550(a1, &v7);
  v10 = v4;
  v5 = sub_180054270((__int64 *)(a1 + 128), (__int64)v9, &v10);
  sub_1800124F8((__int64 *)(*(_QWORD *)v5 + 40LL), a2);
  result = sub_180029700(a1, v4);
  if ( v8 )
    return sub_180010530(v8);
  return result;
}
