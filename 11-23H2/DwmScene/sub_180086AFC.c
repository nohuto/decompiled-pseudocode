/*
 * XREFs of sub_180086AFC @ 0x180086AFC
 * Callers:
 *     sub_180043F98 @ 0x180043F98 (sub_180043F98.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_1800397A0 @ 0x1800397A0 (sub_1800397A0.c)
 *     sub_180039874 @ 0x180039874 (sub_180039874.c)
 *     sub_1800399BC @ 0x1800399BC (sub_1800399BC.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_18005FFE4 @ 0x18005FFE4 (sub_18005FFE4.c)
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 */

__int64 *__fastcall sub_180086AFC(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 *result; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]

  sub_180011C50(*a2 + 72, &v10);
  sub_180086BE0(a1, &v10);
  sub_18005FFE4(*(_QWORD *)(a1 + 16), (__int64)a2, a4);
  sub_1800397A0(*a2);
  sub_1800399BC(*a2, a1 + 176);
  v7 = *a2;
  v8 = sub_18004347C(a1, &v10);
  result = sub_180039874(v7, v8);
  if ( v11 )
    return (__int64 *)sub_180010530(v11);
  return result;
}
