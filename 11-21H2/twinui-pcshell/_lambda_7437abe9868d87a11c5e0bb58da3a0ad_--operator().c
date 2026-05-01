/*
 * XREFs of _lambda_7437abe9868d87a11c5e0bb58da3a0ad_::operator() @ 0x1801B5730
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7437abe9868d87a11c5e0bb58da3a0ad___::Run @ 0x1801B5C40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_7437abe9868d87a11c5e0bb5_ea_1801B5C40.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180108390 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CoCreateInstanceNoThrow@VDesktopWallpaper@@UIDesktopWallpaperPrivate@@@wil@@YA?AV?$com_ptr_t@UIDesktopWallpaperPrivate@@Uerr_returncode_policy@wil@@@0@K@Z @ 0x18054255C (--$CoCreateInstanceNoThrow@VDesktopWallpaper@@UIDesktopWallpaperPrivate@@@wil@@YA-AV-$com_ptr_t@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7437abe9868d87a11c5e0bb58da3a0ad_::operator()(void ***a1)
{
  LPVOID v2; // rbx
  __int64 (__fastcall *v3)(LPVOID, _QWORD, void **); // rsi
  void **v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID ppv; // [rsp+38h] [rbp+10h] BYREF

  wil::CoCreateInstanceNoThrow<DesktopWallpaper,IDesktopWallpaperPrivate>(&ppv);
  v2 = ppv;
  if ( ppv
    && (v3 = *(__int64 (__fastcall **)(LPVOID, _QWORD, void **))(*(_QWORD *)ppv + 32LL),
        v4 = *a1,
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          v4,
          0LL),
        v5 = v3(v2, 0LL, v4),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppv);
  return v6;
}
