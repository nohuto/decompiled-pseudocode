/*
 * XREFs of sub_18007AF8C @ 0x18007AF8C
 * Callers:
 *     sub_180027068 @ 0x180027068 (sub_180027068.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18007AD28 @ 0x18007AD28 (sub_18007AD28.c)
 *     sub_18007AF24 @ 0x18007AF24 (sub_18007AF24.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18007AF8C(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = (__int64 *)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = sub_180011088(0x400uLL);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = v2 + 1024;
  v11 = (__int64 *)a1;
  *(_QWORD *)(a1 + 8) = sub_18007AF24(*(_QWORD *)a1);
  Mtx_init_in_situ((_Mtx_t)(a1 + 24), 2);
  Mtx_init_in_situ((_Mtx_t)(a1 + 104), 2);
  v11 = (__int64 *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  v11 = (__int64 *)sub_180011088(0x30uLL);
  sub_18001DE8C(v11, (__int64 *)&v11);
  sub_18001DE8C((__int64 *)(v3 + 8), (__int64 *)&v11);
  sub_18001DE8C((__int64 *)(v4 + 16), (__int64 *)&v11);
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 184) = v5;
  v11 = (__int64 *)(a1 + 200);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v10 = (__int64 *)sub_180011088(0x30uLL);
  sub_18001DE8C(v10, (__int64 *)&v10);
  sub_18001DE8C((__int64 *)(v6 + 8), (__int64 *)&v10);
  sub_18001DE8C((__int64 *)(v7 + 16), (__int64 *)&v10);
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 200) = v8;
  *(_DWORD *)(a1 + 216) = 0;
  sub_18007AD28(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
  return a1;
}
