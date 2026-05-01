/*
 * XREFs of ?StartGameInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1801DB514
 * Callers:
 *     ?StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1800A8F58 (-StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x1804003E8 (-HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x1801BC334 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ?InternalRelease@?$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ @ 0x1801DAC1C (-InternalRelease@-$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StartGameInputWatcher(__int64 *a1)
{
  __int64 *v1; // rbp
  HMODULE *v3; // rbx
  HMODULE v4; // rcx
  HMODULE Library; // rax
  signed int LastError; // eax
  signed int v7; // ebx
  __int64 v8; // rdx
  __int64 (__fastcall *v10)(__int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = a1 + 32;
  if ( !a1[32] )
  {
    v3 = (HMODULE *)(a1 + 33);
    v4 = (HMODULE)a1[33];
    if ( !v4 )
    {
      Library = LoadLibraryExW(L"GameInput.dll", 0LL, 0x800u);
      wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
        v3,
        Library);
      v4 = *v3;
      if ( !*v3 )
      {
        LastError = GetLastError();
        v7 = LastError;
        if ( LastError > 0 )
          v7 = (unsigned __int16)LastError | 0x80070000;
        if ( v7 >= 0 )
          return (unsigned int)v7;
        v8 = 4620LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
        return (unsigned int)v7;
      }
    }
    if ( !a1[31] )
    {
      if ( !a1[34] )
        a1[34] = (__int64)GetProcAddress(v4, "GameInputCreate");
      v10 = (__int64 (__fastcall *)(__int64 *))a1[34];
      Microsoft::WRL::ComPtr<IGameInput>::InternalRelease(a1 + 31);
      v7 = v10(a1 + 31);
      if ( v7 < 0 )
      {
        v8 = 4629LL;
        goto LABEL_8;
      }
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *, void (__fastcall *)(__int64, GamingOverlayExperienceManager *, __int64, unsigned __int64, char), __int64 *))(*(_QWORD *)a1[31] + 80LL))(
           a1[31],
           0LL,
           3LL,
           a1,
           GamingOverlayExperienceManager::OnGameInputSystemButtonCallbackStatic,
           v1);
    if ( v7 < 0 )
    {
      v8 = 4637LL;
      goto LABEL_8;
    }
  }
  return 0LL;
}
