/*
 * XREFs of ?EnsureDCompTransform@DWMCursor@@AEAAJXZ @ 0x1801FB3A4
 * Callers:
 *     ?DuplicateHandleForProcess@DWMCursor@@QEAAJKPEAPEAX@Z @ 0x1801FB308 (-DuplicateHandleForProcess@DWMCursor@@QEAAJKPEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180052938 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z @ 0x1801FA4E4 (-GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMCursor::EnsureDCompTransform(DWMCursor *this)
{
  DWMCursorBroker *v2; // rbx
  int DCompDevice; // eax
  unsigned int v4; // ebx
  struct IDCompositionDevice *v5; // rbx
  __int64 (__fastcall *v6)(struct IDCompositionDevice *, GUID *, __int64 *); // rdi
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, GUID *, char *); // rdi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, char *); // rsi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v16; // [rsp+50h] [rbp+30h] BYREF
  struct IDCompositionDevice *v17; // [rsp+58h] [rbp+38h] BYREF

  v17 = 0LL;
  v2 = (DWMCursorBroker *)*((_QWORD *)this + 4);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
  DCompDevice = DWMCursorBroker::GetDCompDevice(v2, &v17);
  v4 = DCompDevice;
  if ( DCompDevice >= 0 )
  {
    v16 = 0LL;
    v5 = v17;
    v6 = **(__int64 (__fastcall ***)(struct IDCompositionDevice *, GUID *, __int64 *))v17;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v16);
    v7 = v6(v5, &GUID_28d6ad3d_ee2a_4bcd_9419_7d54800435b1, &v16);
    v8 = retaddr;
    if ( v7 >= 0 )
    {
      v10 = v16;
      v11 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v16 + 216LL);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 7);
      v7 = v11(v10, &GUID_16cdff07_c503_419c_83f2_0965c7af1fa6, (char *)this + 56);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        v12 = v16;
        v13 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v16 + 224LL);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          (void **)this + 8,
          0LL);
        v7 = v13(v12, *((_QWORD *)this + 7), (char *)this + 64);
        v8 = retaddr;
        if ( v7 >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v16);
          v4 = 0;
          goto LABEL_11;
        }
        v9 = 80LL;
      }
      else
      {
        v9 = 78LL;
      }
    }
    else
    {
      v9 = 76LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v8,
      (void *)v9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
    (const char *)(unsigned int)DCompDevice);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
  return v4;
}
