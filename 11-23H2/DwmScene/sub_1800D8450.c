/*
 * XREFs of sub_1800D8450 @ 0x1800D8450
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_1800CB6E8 @ 0x1800CB6E8 (sub_1800CB6E8.c)
 *     sub_1800D85E8 @ 0x1800D85E8 (sub_1800D85E8.c)
 */

__int64 __fastcall sub_1800D8450(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // r11d
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  sub_180011C50(a1 + 72, &v8);
  v6 = (__int64 *)sub_1800D85E8((unsigned int)&v10, v4, v8, v5, a2, 2);
  sub_1800CB6E8((__int64 *)(a1 + 104), v6);
  sub_18000E72C(&v10);
  if ( v9 )
    sub_180010530(v9);
  return sub_1800297B0(a1, *(unsigned int *)(*(_QWORD *)(a1 + 96) + 12LL), 6);
}
