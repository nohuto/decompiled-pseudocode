/*
 * XREFs of ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x18017FF70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApplicationFrameFactory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180140A90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApp.c)
 *     ??$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@12@XZ @ 0x1801801CC (--$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveSh.c)
 *     ?TryGetString@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1801802EC (-TryGetString@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAUHKEY__@@PEB.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@0@$$QEAPEAUHKEY__@@$$QEAPEBG@Z @ 0x1804897D0 (--$make_self@UImmersiveShellComponentsConfiguration@@PEAUHKEY__@@PEBG@winrt@@YA-AU-$com_ptr@UImm.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveShellBuilder::CreateImmersiveShellController(
        CImmersiveShellBuilder *this,
        struct IImmersiveShellController **a2)
{
  HRESULT Instance; // eax
  _QWORD *v4; // rax
  __int64 v5; // rbx
  const char *v6; // r9
  __int64 v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  struct IImmersiveShellController *v11; // rax
  const char *v12; // r9
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  struct IImmersiveShellController *v17; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-40h] BYREF
  _QWORD pvData[4]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *a2 = 0LL;
  LODWORD(v15) = 2;
  v17 = 0LL;
  Instance = CoCreateInstance(
               &GUID_23650f94_13b8_4f39_b2c3_817e6564a756,
               0LL,
               1u,
               &GUID_d6948331_eaf5_4365_86ac_d8d1d03b4600,
               (LPVOID *)&v17);
  try
  {
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1815,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)Instance,
        v14);
    TryGetString(
      pvData,
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
      L"ImmersiveShellConfiguration");
    if ( pvData[2] )
    {
      v4 = pvData;
      if ( pvData[3] >= 8uLL )
        v4 = (_QWORD *)pvData[0];
      v18 = v4;
      v15 = -2147483646LL;
      winrt::make_self<ImmersiveShellComponentsConfiguration,HKEY__ *,unsigned short const *>(&v16, &v15, &v18);
      v5 = v16;
      if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(v16 + 32) - *(_QWORD *)(v16 + 24)) >> 3) )
      {
        LODWORD(v15) = 5;
LABEL_11:
        std::wstring::_Tidy_deallocate((__int64)pvData);
        v18 = (_QWORD *)v5;
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        }
        else
        {
          Microsoft::WRL::Details::Make<CImmersiveShellCreationBehavior,>(&v16);
          LODWORD(v15) = 13;
          if ( !v16 )
            wil::details::in1diag3::_Throw_NullAlloc(
              retaddr,
              (void *)0x3D,
              (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\wrl.h",
              v6);
          v7 = v16 + 32;
          v16 = 0LL;
          v15 = 0LL;
          v5 = v7;
          v18 = (_QWORD *)v7;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
          v9 = v16;
          if ( v16 )
          {
            v16 = 0LL;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IApplicationFrameFactory>::Release(
              v9,
              v8);
          }
        }
        v10 = (*(__int64 (__fastcall **)(struct IImmersiveShellController *, __int64))(*(_QWORD *)v17 + 40LL))(v17, v5);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x475,
            (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
            (const char *)(unsigned int)v10,
            v14);
        v11 = v17;
        v17 = 0LL;
        *a2 = v11;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
        wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)&v17);
        return 0LL;
      }
      if ( v16 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v16);
    }
    LODWORD(v15) = 5;
    v5 = 0LL;
    goto LABEL_11;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x479,
                           (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
                           v12);
  }
  return result;
}
