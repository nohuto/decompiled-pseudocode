/*
 * XREFs of sub_1800CFB1C @ 0x1800CFB1C
 * Callers:
 *     sub_1800CFBF0 @ 0x1800CFBF0 (sub_1800CFBF0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180026D64 @ 0x180026D64 (sub_180026D64.c)
 *     sub_1800D01E0 @ 0x1800D01E0 (sub_1800D01E0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CFB1C(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  sub_180011C50((__int64)(a1 + 9), &v4);
  if ( v4 && sub_180026D64(v4) )
  {
    v2 = a1 + 18;
    if ( sub_18001070C(a1 + 18) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 880LL))(*v2);
      sub_1800D01E0(a1, 0LL);
    }
  }
  else
  {
    sub_18001DB68(
      &stru_1801C8548,
      3,
      "WARNING: CommandListD3D11 destroyed after RenderDeviceD3D11 has been shutdown.\n");
    v2 = a1 + 18;
  }
  if ( v5 )
    sub_180010530(v5);
  sub_18000E72C(a1 + 19);
  sub_18000E72C(v2);
  return sub_1800390DC(a1);
}
