/*
 * XREFs of sub_180051710 @ 0x180051710
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180050DFC @ 0x180050DFC (sub_180050DFC.c)
 *     sub_180051128 @ 0x180051128 (sub_180051128.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall sub_180051710(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  void (__fastcall *v11)(__int64, _QWORD *, __int64); // r9
  __int64 v12; // rcx
  __int128 v14; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-30h] BYREF

  v8 = sub_18001C190();
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::LightProbe>::`vftable';
    sub_180051128(v8 + 16, a4);
  }
  else
  {
    v9 = 0LL;
  }
  v14 = 0LL;
  sub_180050DFC(&v14, v9 + 16, v9);
  v10 = sub_180011DA0(v15, &v14);
  v11(a1, v10, a3);
  *a2 = v14;
  v12 = *(_QWORD *)(a4 + 8);
  if ( v12 )
    sub_180010530(v12);
  return a2;
}
