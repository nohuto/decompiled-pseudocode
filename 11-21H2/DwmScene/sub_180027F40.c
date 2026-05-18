/*
 * XREFs of sub_180027F40 @ 0x180027F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002858C @ 0x18002858C (sub_18002858C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180027F40(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64, __int64); // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, __int64, __int64); // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  _QWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-18h] BYREF

  sub_18002858C(a1, v13);
  v4 = *(_QWORD *)(a1 + 272);
  v5 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 88LL);
  v6 = v13[0];
  v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v13[0] + 32LL))(v13[0], v14);
  v5(v4, v7, a2);
  sub_180010910((__int64)v14);
  v8 = *(_QWORD *)(a1 + 272);
  v9 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 104LL);
  v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 40LL))(v6, v14);
  LOBYTE(v11) = 1;
  v9(v8, v10, v11);
  sub_180010910((__int64)v14);
  return sub_180010910((__int64)v13);
}
