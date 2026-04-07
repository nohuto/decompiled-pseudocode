/*
 * XREFs of ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180056214
 * Callers:
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18003A494 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z @ 0x18005600C (-Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FDF0 (--1-$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@.c)
 *     ??1?$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003D81C (--1-$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180056510 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
HRESULT __fastcall CGraphicsDeviceManager::InitializeGraphicsDevice(CGraphicsDeviceManager *this)
{
  ID3D11Device **ppDevice; // rbx
  __int64 v3; // rcx
  HRESULT result; // eax
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, GUID *, char *); // r14
  __int64 **v9; // rsi
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax
  HRESULT Factory; // eax
  void *v14; // rdx
  __int64 *v15; // rsi
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64, char *); // r14
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v20)(_QWORD, GUID *, __int64 *); // rax
  int v21; // eax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, _QWORD, char *); // r14
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+50h] BYREF

  ppDevice = (ID3D11Device **)((char *)this + 48);
  v3 = *((_QWORD *)this + 6);
  *ppDevice = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  result = D3D11CreateDevice(0LL, D3D_DRIVER_TYPE_WARP, 0LL, 0x20u, 0LL, 0, 7u, ppDevice, &pFeatureLevel, 0LL);
  if ( result >= 0 )
  {
    v33 = 0LL;
    v5 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, __int64 *))(*ppDevice)->lpVtbl->QueryInterface)(
           *ppDevice,
           &GUID_77db970f_6276_48ba_ba28_070143b4392c,
           &v33);
    v6 = v5;
    if ( v5 < 0 )
    {
      v26 = 62LL;
    }
    else
    {
      v7 = v33;
      v8 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v33 + 48LL);
      v9 = (__int64 **)((char *)this + 32);
      v10 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v5 = v8(v7, &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0, (char *)this + 32);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v32 = 0LL;
        v11 = *v9;
        v12 = **v9;
        v32 = 0LL;
        Factory = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v12 + 48))(
                    v11,
                    &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8,
                    &v32);
        v6 = Factory;
        if ( Factory < 0 )
        {
          v27 = 68LL;
        }
        else
        {
          wil::details::ResetEvent(*((wil::details **)this + 7), v14);
          Factory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v32 + 240LL))(
                      v32,
                      *((_QWORD *)this + 7),
                      (char *)this + 64);
          v6 = Factory;
          if ( Factory < 0 )
          {
            v27 = 71LL;
          }
          else
          {
            v15 = (__int64 *)((char *)this + 16);
            v16 = *((_QWORD *)this + 2);
            if ( !v16 )
            {
              *v15 = 0LL;
              Factory = D2D1CreateFactory(
                          D2D1_FACTORY_TYPE_SINGLE_THREADED,
                          &GUID_94f81a73_9212_4376_9c58_b16a3a0d3992,
                          0LL,
                          (void **)this + 2);
              v6 = Factory;
              if ( Factory < 0 )
              {
                v27 = 75LL;
                goto LABEL_33;
              }
              v16 = *v15;
            }
            v17 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v16 + 136LL);
            v18 = *((_QWORD *)this + 3);
            *((_QWORD *)this + 3) = 0LL;
            if ( v18 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            Factory = v17(v16, v33, (char *)this + 24);
            v6 = Factory;
            if ( Factory >= 0 )
            {
              v31 = 0LL;
              v19 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 5)
                                                                          + 32LL);
              v20 = *v19;
              v31 = 0LL;
              v21 = (*v20)(v19, &GUID_25297d5c_3ad4_4c9c_b5cf_e36a38512330, &v31);
              v6 = v21;
              if ( v21 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x51,
                  (int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
                  (const char *)(unsigned int)v21);
              }
              else
              {
                v28[0] = 0LL;
                v22 = v31;
                v23 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v31 + 40LL);
                v24 = *((_QWORD *)this + 5);
                *((_QWORD *)this + 5) = 0LL;
                if ( v24 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
                v25 = v23(v22, *((_QWORD *)this + 3), (char *)this + 40);
                v6 = v25;
                if ( v25 < 0 )
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x54,
                    (int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
                    (const char *)(unsigned int)v25);
                else
                  v6 = 0;
                wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>(v28);
              }
              wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v31);
              goto LABEL_23;
            }
            v27 = 78LL;
          }
        }
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
          (const char *)(unsigned int)Factory);
LABEL_23:
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v32);
LABEL_24:
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v33);
        return v6;
      }
      v26 = 65LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_24;
  }
  return result;
}
