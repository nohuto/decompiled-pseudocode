/*
 * XREFs of sub_180088F6C @ 0x180088F6C
 * Callers:
 *     sub_180088970 @ 0x180088970 (sub_180088970.c)
 *     sub_180088AB8 @ 0x180088AB8 (sub_180088AB8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029700 @ 0x180029700 (sub_180029700.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180039A60 @ 0x180039A60 (sub_180039A60.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180088F6C(__int64 a1, __int64 a2)
{
  _QWORD **v4; // r14
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  unsigned int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF

  sub_18002A0C4(a2 + 24, (__int64)v13);
  v4 = *(_QWORD ***)sub_180026580(a2);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 12);
  else
    v6 = 0;
  v7 = *(_QWORD *)(a1 + 136);
  v8 = sub_18004347C(a1 + 96, &v11);
  sub_180039A60(v4, (__int64)v8, v7, v6);
  if ( v12 )
    sub_180010530(v12);
  v9 = sub_180026650(a2);
  sub_180029700(a1, v9);
  return sub_180010F54((__int64)v13);
}
