/*
 * XREFs of ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x180027C60
 * Callers:
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x180026E08 (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800281F0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsPlugin@EndpointDevice@@AEAAJPEAH@Z @ 0x180028C80 (-IsPlugin@EndpointDevice@@AEAAJPEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall EndpointDevice::InitTopologyIdInfo(__int64 **this)
{
  int IsPlugin; // eax
  unsigned int v3; // ebx
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rax
  int v21; // edi
  void *v22; // r12
  LPVOID *v23; // rsi
  void *v24; // r14
  _WORD *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // r8
  DWORD LastError; // ebx
  int v33; // [rsp+20h] [rbp-2A8h]
  int v34; // [rsp+30h] [rbp-298h] BYREF
  int v35[2]; // [rsp+38h] [rbp-290h] BYREF
  __int64 *v36; // [rsp+40h] [rbp-288h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-280h] BYREF
  __int64 *v38; // [rsp+50h] [rbp-278h] BYREF
  __int64 *v39; // [rsp+58h] [rbp-270h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-268h] BYREF
  LPVOID *p_pv; // [rsp+68h] [rbp-260h]
  void *v42; // [rsp+70h] [rbp-258h] BYREF
  char v43; // [rsp+78h] [rbp-250h]
  unsigned __int16 Src[264]; // [rsp+80h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  IsPlugin = EndpointDevice::IsPlugin((EndpointDevice *)this, &v34);
  v3 = IsPlugin;
  if ( IsPlugin < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
      (const char *)(unsigned int)IsPlugin,
      v33);
    return v3;
  }
  else
  {
    if ( v34 )
      return 0LL;
    *(_QWORD *)v35 = 0LL;
    v4 = this[3];
    v5 = *v4;
    *(_QWORD *)v35 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, _QWORD))(v5 + 24))(
           v4,
           &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
           23LL,
           0LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        (const char *)(unsigned int)v6,
        (int)v35);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v35);
      return v7;
    }
    else
    {
      v36 = 0LL;
      v8 = **(_QWORD **)v35;
      v36 = 0LL;
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v8 + 32))(*(_QWORD *)v35, 0LL, &v36);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE0,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
          (const char *)(unsigned int)v9,
          (int)v35);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v35);
        return v10;
      }
      else
      {
        v37 = 0LL;
        v11 = *v36;
        v37 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v11 + 64))(
                v36,
                &v37);
        if ( v12 < 0 )
        {
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v35);
          return (unsigned int)v12;
        }
        else
        {
          v38 = 0LL;
          v13 = (**v37)(v37, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, (__int64 *)&v38);
          v14 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xED,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
              (const char *)(unsigned int)v13,
              (int)v35);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v38);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v35);
            return v14;
          }
          else
          {
            v34 = 0;
            v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v38 + 32))(v38, &v34);
            v16 = v15;
            if ( v15 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xF2,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                (const char *)(unsigned int)v15,
                (int)v35);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v38);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v35);
              return v16;
            }
            else
            {
              *((_DWORD *)this + 29) = (unsigned __int16)v34;
              v39 = 0LL;
              v17 = *v38;
              v39 = 0LL;
              v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v17 + 96))(v38, &v39);
              v19 = v18;
              if ( v18 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xF7,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                  (const char *)(unsigned int)v18,
                  (int)v35);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v39);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v38);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v35);
                return v19;
              }
              else
              {
                pv = 0LL;
                v20 = *v39;
                p_pv = &pv;
                v42 = 0LL;
                v43 = 1;
                v21 = (*(__int64 (__fastcall **)(__int64 *, void **))(v20 + 64))(v39, &v42);
                if ( v43 )
                {
                  v22 = v42;
                  v23 = p_pv;
                  v24 = *p_pv;
                  if ( *p_pv )
                  {
                    LastError = GetLastError();
                    CoTaskMemFree(v24);
                    SetLastError(LastError);
                  }
                  *v23 = v22;
                }
                if ( v21 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0xFA,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                    (const char *)(unsigned int)v21,
                    (int)v35);
                  if ( pv )
                    CoTaskMemFree(pv);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v39);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v38);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v35);
                  return (unsigned int)v21;
                }
                else
                {
                  v25 = pv;
                  v26 = -1LL;
                  v27 = -1LL;
                  do
                    ++v27;
                  while ( *((_WORD *)pv + v27) );
                  while ( *((_WORD *)pv + v27) != 92 )
                    --v27;
                  v28 = StringCchCopyW(Src, 0x104uLL, (const unsigned __int16 *)pv + v27 + 1);
                  v29 = v28;
                  if ( v28 >= 0 )
                  {
                    v30 = -1LL;
                    do
                      ++v30;
                    while ( Src[v30] );
                    std::wstring::assign(this + 19, Src);
                    do
                      ++v26;
                    while ( v25[v26] );
                    std::wstring::assign(this + 15, v25);
                    if ( pv )
                      CoTaskMemFree(pv);
                    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v39);
                    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v38);
                    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
                    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
                    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v35);
                    return 0LL;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x102,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                    (const char *)(unsigned int)v28,
                    (int)v35);
                  if ( pv )
                    CoTaskMemFree(pv);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v39);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v38);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v35);
                  return v29;
                }
              }
            }
          }
        }
      }
    }
  }
}
