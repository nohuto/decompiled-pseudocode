/*
 * XREFs of sub_1800F0870 @ 0x1800F0870
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800DEA0C @ 0x1800DEA0C (sub_1800DEA0C.c)
 *     sub_1800E77D8 @ 0x1800E77D8 (sub_1800E77D8.c)
 *     sub_1800F054C @ 0x1800F054C (sub_1800F054C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800F0870(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h]
  __int64 v16[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp+38h]
  _QWORD *v19; // [rsp+80h] [rbp+40h]

  v19 = a3;
  v18 = a2;
  v6 = sub_1800F054C(v16, a3);
  v7 = *v6;
  v8 = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  v14 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = v7;
  v15 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v8;
  sub_180010910((__int64)&v14);
  sub_180010910((__int64)v16);
  if ( *(_DWORD *)(a1 + 140) == 1 || *(_DWORD *)(a1 + 140) == 3 )
  {
    v9 = sub_1800DEA0C(v16, a2);
    v10 = *v9;
    v11 = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    v14 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 104) = v10;
    v15 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v11;
    sub_180010910((__int64)&v14);
    sub_180010910((__int64)v16);
  }
  sub_1800E77D8(*(_QWORD *)(a1 + 104), &v17);
  v12 = v17;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 224LL))(v17, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  sub_180010910((__int64)a2);
  return sub_180010910((__int64)a3);
}
