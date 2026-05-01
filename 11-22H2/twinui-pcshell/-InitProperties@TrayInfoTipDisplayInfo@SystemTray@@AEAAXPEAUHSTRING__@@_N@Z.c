/*
 * XREFs of ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x180548810
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x180548B88 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x180547A78 (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 *     ??$GetAs@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@PropertySetAssembler@@AEAA?AV?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@XZ @ 0x180547B90 (--$GetAs@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@PropertySetA.c)
 *     ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x180547C4C (--$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall SystemTray::TrayInfoTipDisplayInfo::InitProperties(
        SystemTray::TrayInfoTipDisplayInfo *this,
        HSTRING a2,
        unsigned __int8 a3)
{
  unsigned int v3; // r15d
  HRESULT v6; // eax
  LPVOID v7; // rbx
  int (__fastcall *v8)(LPVOID, PCWSTR, _QWORD, WCHAR *); // rdi
  PCWSTR StringRawBuffer; // rax
  unsigned int v10; // r8d
  HSTRING_HEADER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, char *); // rsi
  __int64 v16; // rcx
  int v17; // eax
  int ppv; // [rsp+20h] [rbp-E0h]
  LPVOID v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR sourceString[264]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v3 = a3;
  v19 = 0LL;
  v6 = CoCreateInstance(
         &GUID_561df0d0_72eb_46f1_8d0a_5597dbbe6578,
         0LL,
         4u,
         &GUID_63672622_6d18_42ce_9cef_7a0118cd4dfe,
         &v19);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB3,
      (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v6,
      ppv);
  v21 = 0LL;
  v7 = v19;
  v8 = *(int (__fastcall **)(LPVOID, PCWSTR, _QWORD, WCHAR *))(*(_QWORD *)v19 + 24LL);
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( v8(v7, StringRawBuffer, v3, sourceString) >= 0 )
  {
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, sourceString, v10);
    PropertySetAssembler::InsertHString<wchar_t const *>(
      (PropertySetAssembler *)&v21,
      v12,
      (HSTRING)v11[1].Reserved.Reserved1,
      v13);
  }
  PropertySetAssembler::GetAs<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v21,
    &v20);
  v14 = v20;
  if ( v20 )
  {
    v15 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 72LL);
    v16 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v17 = v15(v14, (char *)this + 88);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC1,
        (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v17,
        260);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21 + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
}
