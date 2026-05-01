/*
 * XREFs of ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x180142410
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIImmersiveShellCreationBehavior@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EFA70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIImm.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetString@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180142544 (-TryGetString@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAUHKEY__@@PEB.c)
 *     ??$CoCreateInstance@UIImmersiveShellController@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIImmersiveShellController@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x1801425DC (--$CoCreateInstance@UIImmersiveShellController@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr_.c)
 *     ??$MakeOrThrow@VCImmersiveShellCreationBehavior@@$$V@wil@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@WRL@Microsoft@@XZ @ 0x18014264C (--$MakeOrThrow@VCImmersiveShellCreationBehavior@@$$V@wil@@YA-AV-$ComPtr@VCImmersiveShellCreation.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@0@$$QEAPEAUHKEY__@@$$QEAPEBG@Z @ 0x1803AF348 (--$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA-AU-$com_ptr@UImm.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveShellBuilder::CreateImmersiveShellController(
        CImmersiveShellBuilder *this,
        struct IImmersiveShellController **a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r8
  volatile int *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  struct IImmersiveShellController *v9; // rax
  _QWORD *v11; // rax
  struct IImmersiveShellController *v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  _QWORD pvData[4]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a2 = 0LL;
  wil::CoCreateInstance<IImmersiveShellController,wil::err_exception_policy>(&v12);
  TryGetString(
    pvData,
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
    L"ImmersiveShellConfiguration");
  if ( !pvData[2] )
  {
LABEL_2:
    v3 = 0LL;
    goto LABEL_3;
  }
  v11 = pvData;
  if ( pvData[3] >= 8uLL )
    v11 = (_QWORD *)pvData[0];
  v14 = v11;
  v15 = -2147483646LL;
  winrt::make_self<ImmersiveShellComponentsConfiguration,HKEY__ *,unsigned short const *>(&v13, &v15, &v14);
  v3 = v13;
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(v13 + 32) - *(_QWORD *)(v13 + 24)) >> 3)) )
  {
    if ( v13 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v13);
    goto LABEL_2;
  }
LABEL_3:
  std::wstring::_Tidy_deallocate((__int64)pvData);
  v14 = (_QWORD *)v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    v4 = (_QWORD *)wil::MakeOrThrow<CImmersiveShellCreationBehavior,>(&v13);
    v5 = (*v4 + 32LL) & -(__int64)(*v4 != 0LL);
    *v4 = 0LL;
    v15 = 0LL;
    v3 = v5;
    v14 = (_QWORD *)v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>::Release(
        v7,
        v6);
    }
  }
  v8 = (*(__int64 (__fastcall **)(struct IImmersiveShellController *, __int64))(*(_QWORD *)v12 + 40LL))(v12, v3);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3CB,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v8,
      (int)v12);
  v9 = v12;
  v12 = 0LL;
  *a2 = v9;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)&v12);
  return 0LL;
}
