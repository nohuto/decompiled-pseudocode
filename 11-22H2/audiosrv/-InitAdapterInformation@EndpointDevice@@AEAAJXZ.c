/*
 * XREFs of ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x180027A44
 * Callers:
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x180026E08 (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800281F0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?IsPlugin@EndpointDevice@@AEAAJPEAH@Z @ 0x180028C80 (-IsPlugin@EndpointDevice@@AEAAJPEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall EndpointDevice::InitAdapterInformation(GUID *this)
{
  int IsPlugin; // eax
  unsigned int v3; // edi
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  int v12; // edi
  int v13; // eax
  unsigned int v14; // edi
  const GUID *v15; // rdi
  int v16; // eax
  unsigned int v17; // esi
  int i; // ecx
  __int64 v19; // rax
  _WORD *v20; // rdx
  __int64 v21; // r8
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // edi
  int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // r8
  int v29; // [rsp+20h] [rbp-E8h]
  __int64 v30; // [rsp+30h] [rbp-D8h] BYREF
  int v31[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v32; // [rsp+40h] [rbp-C8h] BYREF
  PROPVARIANT *v33; // [rsp+48h] [rbp-C0h] BYREF
  char v34; // [rsp+50h] [rbp-B8h]
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h]
  OLECHAR sz[64]; // [rsp+70h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  IsPlugin = EndpointDevice::IsPlugin((EndpointDevice *)this, v31);
  v3 = IsPlugin;
  if ( IsPlugin < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
      (const char *)(unsigned int)IsPlugin,
      v29);
    return v3;
  }
  v4 = *(__int64 **)this[1].Data4;
  if ( v31[0] )
  {
    v30 = 0LL;
    v23 = *v4;
    v30 = 0LL;
    v24 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v23 + 32))(v4, 2LL, &v30);
    v25 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        (const char *)(unsigned int)v24,
        v29);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
      return v25;
    }
    *(_OWORD *)pvar = 0LL;
    v36 = 0LL;
    v33 = pvar;
    v34 = 1;
    v26 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v30 + 40LL))(
            v30,
            &PKEY_AudioEndpoint_JackSubType,
            pvar);
    v27 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        (const char *)(unsigned int)v26,
        v29);
      PropVariantClear(pvar);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
      return v27;
    }
    if ( LOWORD(pvar[0]) != 31 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        (const char *)0x80070057LL,
        v29);
      PropVariantClear(pvar);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
      return 2147942487LL;
    }
    v15 = this + 6;
    IIDFromString((LPCOLESTR)pvar[1], this + 6);
    PropVariantClear(pvar);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
  }
  else
  {
    *(_QWORD *)v31 = 0LL;
    v5 = *v4;
    *(_QWORD *)v31 = 0LL;
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
        (void *)0x7C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        (const char *)(unsigned int)v6,
        (int)v31);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
      return v7;
    }
    v32 = 0LL;
    v8 = **(_QWORD **)v31;
    v32 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v8 + 32))(*(_QWORD *)v31, 0LL, &v32);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        (const char *)(unsigned int)v9,
        (int)v31);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
      return v10;
    }
    v30 = 0LL;
    v11 = *v32;
    v30 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 64))(v32, &v30);
    if ( v12 < 0 )
    {
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
      return (unsigned int)v12;
    }
    v33 = 0LL;
    v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, PROPVARIANT **))v30)(
            v30,
            &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
            &v33);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        (const char *)(unsigned int)v13,
        (int)v31);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v33);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
      return v14;
    }
    v15 = this + 6;
    v16 = (*((__int64 (__fastcall **)(PROPVARIANT *, GUID *))*v33 + 7))(v33, this + 6);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        (const char *)(unsigned int)v16,
        (int)v31);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v33);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
      return v17;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v33);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v31);
  }
  for ( i = 0; (unsigned __int64)i < 0xB; ++i )
  {
    v19 = *(_QWORD *)&v15->Data1 - *((_QWORD *)&unk_18016D170 + 3 * i);
    if ( !v19 )
      v19 = *(_QWORD *)v15->Data4 - *((_QWORD *)&unk_18016D170 + 3 * i + 1);
    if ( !v19 )
    {
      v20 = (_WORD *)*((_QWORD *)&unk_18016D170 + 3 * i + 2);
      v21 = -1LL;
      do
        ++v21;
      while ( v20[v21] );
      std::wstring::assign(&this[4], v20);
      return 0LL;
    }
  }
  StringFromGUID2(v15, sz, 64);
  v28 = -1LL;
  do
    ++v28;
  while ( sz[v28] );
  std::wstring::assign(&this[4], sz);
  return 0LL;
}
