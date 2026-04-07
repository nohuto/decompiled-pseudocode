/*
 * XREFs of ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z @ 0x1800AF0E8
 * Callers:
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800AFCEC (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003D81C (--1-$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CDDisplayManager::MakeSourceHandleForTarget(CDDisplayManager *this, void **a2, unsigned int *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rsi
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64 *); // rsi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, __int64 *); // rsi
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, __int64, _QWORD); // rsi
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, void **); // rdi
  int v34; // eax
  void *v35; // rax
  __int64 v37; // [rsp+30h] [rbp-50h] BYREF
  __int64 v38; // [rsp+38h] [rbp-48h] BYREF
  __int64 v39; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-38h] BYREF
  __int64 v41; // [rsp+50h] [rbp-30h] BYREF
  void *v42; // [rsp+58h] [rbp-28h] BYREF
  __int64 v43; // [rsp+60h] [rbp-20h] BYREF
  __int64 *v44; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v45[8]; // [rsp+70h] [rbp-10h] BYREF
  _BYTE v46[8]; // [rsp+78h] [rbp-8h] BYREF
  unsigned int v47; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp+58h] BYREF

  v44 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v47 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2), &v44);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v44 + 56))(v44, &v47);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( v47 )
      {
        while ( 1 )
        {
          v37 = 0LL;
          v38 = 0LL;
          v10 = *v44;
          v37 = 0LL;
          v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v10 + 48))(v44, v9, &v37);
          v7 = v11;
          if ( v11 < 0 )
            break;
          v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v37 + 64LL))(v37, &v48);
          v7 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x5Cu);
            goto LABEL_42;
          }
          v13 = v37;
          v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 48LL);
          v15 = v38;
          v38 = 0LL;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          v16 = v14(v13, &v38);
          v7 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x5Du);
            goto LABEL_42;
          }
          v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v38 + 48LL))(v38, v46);
          v7 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x5Eu);
            goto LABEL_42;
          }
          v40 = 0LL;
          v39 = 0LL;
          v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 2) + 64LL))(
                  *((_QWORD *)this + 2),
                  v37,
                  v45);
          v7 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x69u);
            goto LABEL_29;
          }
          v19 = *((_QWORD *)this + 2);
          v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 80LL);
          v21 = v39;
          v39 = 0LL;
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          v22 = v20(v19, &v39);
          v7 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x6Cu);
            goto LABEL_29;
          }
          v23 = v39;
          v24 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v39 + 64LL);
          v25 = v43;
          v43 = 0LL;
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          v26 = v24(v23, &v43);
          v7 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x6Du);
LABEL_29:
            wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v39);
            wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)&v40);
            goto LABEL_42;
          }
          v27 = v43;
          v28 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v43 + 120LL);
          v29 = (__int64)v40;
          v40 = 0LL;
          if ( v29 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          v30 = v28(v27, v37, &v40);
          v7 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x70u);
            goto LABEL_29;
          }
          if ( v40 )
          {
            v41 = 0LL;
            v31 = (**v40)(v40, &GUID_a6ba4205_e59e_4e71_b25b_4e436d21ee3d, &v41);
            v7 = v31;
            if ( v31 >= 0 )
            {
              v32 = v41;
              v33 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v41 + 24LL);
              wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
                &v42,
                0LL);
              v34 = v33(v32, &v42);
              v7 = v34;
              if ( v34 >= 0 )
              {
                v35 = v42;
                v42 = 0LL;
                *a2 = v35;
                *a3 = v48;
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x75u);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x74u);
            }
            wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v41);
            goto LABEL_29;
          }
          wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v39);
          wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)&v40);
          wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v38);
          wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v37);
          if ( ++v9 >= v47 )
            goto LABEL_43;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5Bu);
LABEL_42:
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v38);
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v37);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x50u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x4Fu);
  }
LABEL_43:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v42);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v43);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)&v44);
  return v7;
}
