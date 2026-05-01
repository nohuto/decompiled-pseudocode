/*
 * XREFs of _lambda_33b4202f4967ef1cd2a31cded00016d1_::operator() @ 0x18055E664
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&_::Run @ 0x18055E9D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__-_--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHBITMAP__@@@Z @ 0x1802E004A (-reset@-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$in.c)
 *     CreationThreadDispatcher::RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___ @ 0x18055E43C (CreationThreadDispatcher--RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___.c)
 *     ?s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMAP__@@@Z @ 0x18055EB50 (-s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_33b4202f4967ef1cd2a31cded00016d1_::operator()(__int64 a1)
{
  int IconSync; // eax
  unsigned int v3; // edi
  HGDIOBJ v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  HGDIOBJ ho; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HGDIOBJ v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::reset(
    &v11,
    0LL);
  IconSync = CWinRTAppIconLoader::s_LoadIconSync(
               *(struct IWinRTApplicationView **)a1,
               (const struct tagSIZE *)(a1 + 8),
               (const struct tagSIZE *)(a1 + 16),
               (const struct tagSIZE *)(a1 + 24),
               *(_DWORD *)(a1 + 32),
               (HBITMAP *)&v11);
  v3 = IconSync;
  if ( IconSync >= 0 )
  {
    ho = v11;
    v4 = 0LL;
    v11 = 0LL;
    v5 = *(_QWORD *)(a1 + 48);
    v9 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = CreationThreadDispatcher::RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___(
           *(_QWORD *)(a1 + 40),
           (__int64)&ho);
    v3 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
        (const char *)(unsigned int)v6);
    wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v9);
    if ( ho )
      DeleteObject(ho);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)(unsigned int)IconSync);
    v4 = v11;
  }
  if ( v4 )
    DeleteObject(v4);
  return v3;
}
