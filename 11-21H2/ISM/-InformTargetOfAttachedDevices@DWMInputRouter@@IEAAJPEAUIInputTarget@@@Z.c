/*
 * XREFs of ?InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z @ 0x18003CEB4
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18003CFB0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMInputRouter::InformTargetOfAttachedDevices(DWMInputRouter *this, struct IInputTarget *a2)
{
  int v3; // eax
  __int64 *v4; // rcx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = 0LL;
  v3 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
         a2,
         &GUID_ce017166_b885_4259_a1c9_31032455b8b4,
         (__int64 *)&v15);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3EC,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v3,
      v13);
  v4 = v15;
  if ( !v15 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x8000FFFFLL,
      v13);
  v5 = (_QWORD *)*((_QWORD *)this + 25);
  v6 = (_QWORD *)*v5;
  while ( 1 )
  {
    v7 = *v4;
    if ( v6 == v5 )
      break;
    v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v7 + 24))(v4, v6[3]);
    v9 = v8;
    if ( v8 < 0 )
    {
      v12 = 1020LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v8,
        v13);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
      return v9;
    }
    v6 = (_QWORD *)*v6;
    v4 = v15;
  }
  v8 = (*(__int64 (**)(void))(v7 + 48))();
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 1024LL;
    goto LABEL_15;
  }
  v10 = (__int64)v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
