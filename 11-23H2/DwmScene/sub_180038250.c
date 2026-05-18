/*
 * XREFs of sub_180038250 @ 0x180038250
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180038250(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD *v3; // rax
  __int64 (__fastcall *v4)(__int64, _QWORD *); // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp+8h]

  v10 = sub_18001246C(&v8, a2);
  v3 = sub_18001246C(v9, (_QWORD *)(v2 + 8));
  result = v4(v5, v3);
  v7 = v10[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
