/*
 * XREFs of ?SetD2DDevice@CDxDevice@DirectComposition@@QEAAXPEAUID2D1Device@@@Z @ 0x18001907C
 * Callers:
 *     ?Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z @ 0x18009BA98 (-Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Multithread@@@@YAXAEAPEAUID2D1Multithread@@@Z @ 0x18001B198 (--$ReleaseInterface@UID2D1Multithread@@@@YAXAEAPEAUID2D1Multithread@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall DirectComposition::CDxDevice::SetD2DDevice(DirectComposition::CDxDevice *this, struct ID2D1Device *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  (*(void (__fastcall **)(struct ID2D1Device *, char *))(*(_QWORD *)a2 + 24LL))(a2, (char *)this + 88);
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 11))(
         *((_QWORD *)this + 11),
         &GUID_31e6e7bc_e0ff_4d46_8c64_a0a8c41c15d3,
         (char *)this + 40);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x11E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\dxdevice.cpp",
      (const char *)(unsigned int)v4,
      v6);
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5)) )
    ReleaseInterface<ID2D1Multithread>((char *)this + 40);
  v5 = (**(__int64 (__fastcall ***)(struct ID2D1Device *, GUID *, char *))a2)(
         a2,
         &GUID_d7bdb159_5683_4a46_bc9c_72dc720b858b,
         (char *)this + 80);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x126,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\dxdevice.cpp",
      (const char *)(unsigned int)v5,
      v6);
}
