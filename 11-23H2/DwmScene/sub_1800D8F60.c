/*
 * XREFs of sub_1800D8F60 @ 0x1800D8F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18002CA44 @ 0x18002CA44 (sub_18002CA44.c)
 *     sub_18002CB90 @ 0x18002CB90 (sub_18002CB90.c)
 *     sub_1800D8AEC @ 0x1800D8AEC (sub_1800D8AEC.c)
 */

__int64 *__fastcall sub_1800D8F60(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  *(_DWORD *)(a1 + 568) = a2;
  v4 = a3;
  v5 = sub_1800D8AEC((__int64 *)(a1 + 552), (__int64)&v11, &v12);
  v4 *= 48LL;
  v6 = *(_QWORD *)v5;
  v7 = sub_18001246C(v10, (_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 40LL) + v4 + 64));
  sub_18002CB90(a1, v7);
  v8 = sub_18001246C(v10, (_QWORD *)(*(_QWORD *)(v6 + 40) + v4 + 80));
  return sub_18002CA44(a1, v8);
}
