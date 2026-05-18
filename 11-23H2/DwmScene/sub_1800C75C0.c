/*
 * XREFs of sub_1800C75C0 @ 0x1800C75C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800393DC @ 0x1800393DC (sub_1800393DC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C75C0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 272);
  sub_1800393DC(*(_QWORD ***)(a1 + 272));
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 48LL))(*v1);
  *(_OWORD *)v4 = 0LL;
  sub_180011020(v1, v4);
  if ( v4[1] )
    sub_180010530(v4[1]);
  sub_18000E72C((__int64 *)(a1 + 4256));
  *(_DWORD *)(a1 + 4248) = 6;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4264) + 880LL))(*(_QWORD *)(a1 + 4264));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4264) + 888LL))(*(_QWORD *)(a1 + 4264));
  sub_18000E72C((__int64 *)(a1 + 4264));
  sub_18000E72C((__int64 *)(a1 + 4272));
  sub_18000E72C((__int64 *)(a1 + 4280));
  return sub_18000E72C((__int64 *)(a1 + 4640));
}
