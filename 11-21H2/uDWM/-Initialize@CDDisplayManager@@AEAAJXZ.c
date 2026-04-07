/*
 * XREFs of ?Initialize@CDDisplayManager@@AEAAJXZ @ 0x1800AEE68
 * Callers:
 *     ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x1800AED68 (-Create@CDDisplayManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003D81C (--1-$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDDisplayManager::Initialize(CDDisplayManager *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  int ActivationFactory; // eax
  HRESULT v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, char *); // rsi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-29h] BYREF
  HSTRING string; // [rsp+38h] [rbp-21h] BYREF
  HSTRING v15; // [rsp+40h] [rbp-19h] BYREF
  __int64 v16; // [rsp+48h] [rbp-11h] BYREF
  __int64 v17; // [rsp+50h] [rbp-9h] BYREF
  __int64 v18; // [rsp+58h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+7h] BYREF
  HSTRING_HEADER v20; // [rsp+78h] [rbp+1Fh] BYREF

  v13 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  string = 0LL;
  v15 = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayManager", 0x2Bu, &hstringHeader, &string);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v13 = 0LL;
    ActivationFactory = RoGetActivationFactory(string, &GUID_2b6b9446_b999_5535_9d69_53f092c780a1, &v13);
    v3 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v5 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayPrimaryDescription", 0x36u, &v20, &v15);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v6 = *((_QWORD *)this + 3);
        *((_QWORD *)this + 3) = 0LL;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        v7 = RoGetActivationFactory(v15, &GUID_e60e4cfb_36c9_56dd_8fa1_6ff8c4e0ff07, (char *)this + 24);
        v3 = v7;
        if ( v7 >= 0 )
        {
          v8 = v13;
          v9 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v13 + 48LL);
          v10 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 2) = 0LL;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v11 = v9(v8, 0LL, (char *)this + 16);
          v3 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x33u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x30u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x2Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ActivationFactory, 0x2Bu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x2Au);
  }
  if ( string )
    WindowsDeleteString(string);
  if ( v15 )
    WindowsDeleteString(v15);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v13);
  return v3;
}
