/*
 * XREFs of sub_1800E0070 @ 0x1800E0070
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800DFCD8 @ 0x1800DFCD8 (sub_1800DFCD8.c)
 *     sub_1800DFD04 @ 0x1800DFD04 (sub_1800DFD04.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0070(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v3)(__int64, _QWORD *); // rdi
  __int64 v5; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+28h] [rbp-50h]
  _QWORD v7[7]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+68h] [rbp-10h]

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL);
  sub_18001246C(&v5, a2);
  v8 = 0LL;
  if ( sub_1800DFD04() )
    v8 = sub_1800DFCD8(v7, &v5);
  if ( v6 )
    sub_180010530(v6);
  return v3(a1, v7);
}
