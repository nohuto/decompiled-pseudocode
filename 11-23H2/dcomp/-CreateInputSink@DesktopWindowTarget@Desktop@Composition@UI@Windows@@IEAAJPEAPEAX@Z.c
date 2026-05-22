/*
 * XREFs of ?CreateInputSink@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAPEAX@Z @ 0x180011CEC
 * Callers:
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006CB30 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windo.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006D130 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18019FE44 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

int __fastcall Windows::UI::Composition::Desktop::DesktopWindowTarget::CreateInputSink(
        Windows::UI::Composition::Desktop::DesktopWindowTarget *this,
        void **a2)
{
  int v4; // eax
  void *v5; // rdx
  unsigned int v6; // r8d
  const char *v7; // r9
  int v9[4]; // [rsp+20h] [rbp-E0h]
  int v10; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v11; // [rsp+68h] [rbp-98h]
  __int128 v12; // [rsp+78h] [rbp-88h]
  __int128 v13; // [rsp+88h] [rbp-78h]
  __int64 v14; // [rsp+98h] [rbp-68h]
  __int128 v15; // [rsp+A0h] [rbp-60h]
  __int128 v16; // [rsp+B0h] [rbp-50h]
  __int128 v17; // [rsp+C0h] [rbp-40h]
  __int64 v18; // [rsp+D0h] [rbp-30h]
  __int128 v19; // [rsp+D8h] [rbp-28h]
  __int128 v20; // [rsp+E8h] [rbp-18h]
  __int128 v21; // [rsp+F8h] [rbp-8h]
  __int64 v22; // [rsp+108h] [rbp+8h]
  __int128 v23; // [rsp+110h] [rbp+10h]
  __int128 v24; // [rsp+120h] [rbp+20h]
  __int128 v25; // [rsp+130h] [rbp+30h]
  __int64 v26; // [rsp+140h] [rbp+40h]
  int v27; // [rsp+148h] [rbp+48h]
  int v28; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  *a2 = 0LL;
  memset_0(&v10, 0, 0x128uLL);
  v10 = 296;
  v28 = 2;
  v9[0] = 2;
  *(_QWORD *)&v9[2] = (*(__int64 (__fastcall **)(Windows::UI::Composition::Desktop::DesktopWindowTarget *))(*(_QWORD *)this + 288LL))(this);
  v16 = 0LL;
  v17 = 0LL;
  v27 = 0;
  v14 = 0LL;
  v18 = 0LL;
  v22 = 0LL;
  v26 = 0LL;
  v11 = *(_OWORD *)v9;
  v12 = 0LL;
  v13 = 0LL;
  v15 = *(_OWORD *)v9;
  v19 = *(_OWORD *)v9;
  v20 = 0LL;
  v21 = 0LL;
  v23 = *(_OWORD *)v9;
  v24 = 0LL;
  v25 = 0LL;
  v4 = NtCreateCompositionInputSink(&v10, a2);
  if ( v4 < 0 )
    return wil::details::in1diag3::Return_NtStatus(retaddr, v5, v6, (const char *)(unsigned int)v4, 2);
  if ( *a2 )
    return 0;
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x118,
           (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdesktopwindowtarget.cpp",
           v7);
}
