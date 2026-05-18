/*
 * XREFs of sub_180097C50 @ 0x180097C50
 * Callers:
 *     sub_180072FD0 @ 0x180072FD0 (sub_180072FD0.c)
 *     sub_18009C1D0 @ 0x18009C1D0 (sub_18009C1D0.c)
 *     sub_18009C480 @ 0x18009C480 (sub_18009C480.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800394F4 @ 0x1800394F4 (sub_1800394F4.c)
 *     sub_18005BA84 @ 0x18005BA84 (sub_18005BA84.c)
 *     sub_18005D26C @ 0x18005D26C (sub_18005D26C.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180097C50(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 *v8; // rax
  char result; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_18005BA84(a1, &v12, a2);
  sub_1800394F4(v12, (__int64)a3, a4, a5);
  v8 = sub_18001246C(v14, a3);
  result = sub_18005D26C(a1, v8);
  if ( v13 )
    result = sub_180010530(v13);
  v10 = a3[1];
  if ( v10 )
    result = sub_180010530(v10);
  v11 = *(_QWORD *)(a4 + 8);
  if ( v11 )
    return sub_180010530(v11);
  return result;
}
