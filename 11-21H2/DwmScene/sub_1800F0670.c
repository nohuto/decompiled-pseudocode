/*
 * XREFs of sub_1800F0670 @ 0x1800F0670
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800DEA0C @ 0x1800DEA0C (sub_1800DEA0C.c)
 *     sub_1800E77D8 @ 0x1800E77D8 (sub_1800E77D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F0670(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+10h]

  v12 = a2;
  v4 = sub_1800DEA0C(v10, a2);
  v5 = *v4;
  v6 = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  v9[0] = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v5;
  v9[1] = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v6;
  sub_180010910((__int64)v9);
  sub_180010910((__int64)v10);
  sub_1800E77D8(*(_QWORD *)(a1 + 104), &v11);
  v7 = v11;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return sub_180010910((__int64)a2);
}
