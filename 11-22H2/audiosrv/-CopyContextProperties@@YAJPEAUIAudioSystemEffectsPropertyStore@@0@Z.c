/*
 * XREFs of ?CopyContextProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x180168DE8
 * Callers:
 *     ?CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x180168AA4 (-CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopyProperties@@YAJPEAUIPropertyStore@@0@Z @ 0x180168FD8 (-CopyProperties@@YAJPEAUIPropertyStore@@0@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CopyContextProperties(
        struct IAudioSystemEffectsPropertyStore *a1,
        struct IAudioSystemEffectsPropertyStore *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v12[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IPropertyStore *v14; // [rsp+50h] [rbp+20h] BYREF
  struct IPropertyStore *v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v16; // [rsp+68h] [rbp+38h] BYREF

  v12[0] = 0LL;
  v3 = (**(__int64 (__fastcall ***)(struct IAudioSystemEffectsPropertyStore *, GUID *, __int64 *))a1)(
         a1,
         &GUID_13dfcc0a_15ea_4b9e_a5a6_cc1e5c0bb317,
         v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E5,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_14;
  }
  v14 = 0LL;
  v5 = *(_QWORD *)v12[0];
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, struct IPropertyStore **))(v5 + 24))(v12[0], 2LL, &v14);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E8,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v6);
LABEL_5:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v14);
    goto LABEL_14;
  }
  v16 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(struct IAudioSystemEffectsPropertyStore *, GUID *, __int64 **))a2)(
         a2,
         &GUID_13dfcc0a_15ea_4b9e_a5a6_cc1e5c0bb317,
         &v16);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EB,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v7);
LABEL_8:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v16);
    goto LABEL_5;
  }
  v15 = 0LL;
  v8 = *v16;
  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IPropertyStore **))(v8 + 24))(v16, 0LL, &v15);
  v4 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EE,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v9);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v15);
    goto LABEL_8;
  }
  v10 = CopyProperties(v14, v15);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2F0,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v10);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v15);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v16);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v14);
  v4 = 0;
LABEL_14:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v12);
  return v4;
}
