/*
 * XREFs of sub_180051410 @ 0x180051410
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180050FFC @ 0x180050FFC (sub_180050FFC.c)
 *     sub_180053418 @ 0x180053418 (sub_180053418.c)
 *     sub_1800690B8 @ 0x1800690B8 (sub_1800690B8.c)
 *     sub_1800FA4C4 @ 0x1800FA4C4 (sub_1800FA4C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180051410(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // xmm6_8
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-20h] BYREF

  sub_180050FFC((__int64 *)&v14, a3);
  v6 = *(_QWORD *)(a1 + 8);
  v13 = 0LL;
  if ( *((_QWORD *)&v14 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
  v7 = v14;
  v13 = v14;
  sub_180053418(v6, &v13);
  v8 = *(_QWORD *)(v7 + 144);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(v7 + 144);
  }
  v15[0] = *(_QWORD *)(v7 + 136);
  v15[1] = v8;
  v9 = (_QWORD *)sub_1800690B8(v15[0], v16);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 72LL))(
    *v9,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16));
  sub_180010910((__int64)v16);
  sub_180010910((__int64)v15);
  sub_1800FA4C4(a2, v10, v11);
  sub_180010910((__int64)&v14);
  sub_180010910((__int64)a3);
  return a2;
}
