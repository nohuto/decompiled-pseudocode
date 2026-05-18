/*
 * XREFs of sub_1800D3820 @ 0x1800D3820
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_1800D875C @ 0x1800D875C (sub_1800D875C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D3820(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 16LL);
  v5 = *(_QWORD *)(a1 + 104);
  v9 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  sub_180011C50(a1 + 72, &v7);
  sub_1800D875C(a2, &v7, &v9, v4);
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
