/*
 * XREFs of sub_180055CE8 @ 0x180055CE8
 * Callers:
 *     sub_180055AE8 @ 0x180055AE8 (sub_180055AE8.c)
 *     sub_1800563E8 @ 0x1800563E8 (sub_1800563E8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180015630 @ 0x180015630 (sub_180015630.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180055CE8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+48h] [rbp+10h]

  v12 = a2;
  v4 = *a2;
  v11 = *(_DWORD *)(*a2 + 88);
  v5 = sub_180054270((__int64 *)(a1 + 112), (__int64)&v9, &v11);
  sub_180011020((_QWORD *)(*(_QWORD *)v5 + 40LL), a2);
  v6 = (__int64 *)sub_180011D4C(a1 + 96, &v9);
  result = (__int64)sub_180015630((_QWORD *)(v4 + 96), v6);
  if ( v10 )
    result = sub_180010530(v10);
  v8 = a2[1];
  if ( v8 )
    return sub_180010530(v8);
  return result;
}
