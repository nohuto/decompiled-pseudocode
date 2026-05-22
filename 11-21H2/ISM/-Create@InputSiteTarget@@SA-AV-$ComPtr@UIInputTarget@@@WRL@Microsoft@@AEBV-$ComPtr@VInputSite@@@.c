/*
 * XREFs of ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x18019D124
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180002840 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088EA0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0InputSiteTarget@@QEAA@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x18019D02C (--0InputSiteTarget@@QEAA@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSiteTarget::Create(__int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  const char *v5; // r9
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rdi
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))InputSiteTarget::InputSiteTarget((__int64)v4, a2);
    v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v6;
  }
  else
  {
    v7 = 0LL;
    v6 = 0LL;
  }
  if ( !v7 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      15LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputsitetarget.cpp",
      v5);
  *a1 = 0LL;
  v8 = **v6;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a1);
  v9 = v8(v6, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a1);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x12,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputsitetarget.cpp",
      (const char *)(unsigned int)v9,
      v11);
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v7)[2])(v7);
  return a1;
}
