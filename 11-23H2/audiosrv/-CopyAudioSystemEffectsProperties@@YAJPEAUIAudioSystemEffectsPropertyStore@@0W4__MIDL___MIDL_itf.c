/*
 * XREFs of ?CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0W4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@@Z @ 0x180168B04
 * Callers:
 *     ?CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x180168A54 (-CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopyProperties@@YAJPEAUIPropertyStore@@0@Z @ 0x180168F88 (-CopyProperties@@YAJPEAUIPropertyStore@@0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CopyAudioSystemEffectsProperties(__int64 a1, __int64 *a2, int a3)
{
  int v4; // r8d
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, __int64, struct IPropertyStore **); // rdi
  struct IPropertyStore *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, __int64, struct IPropertyStore **); // rdi
  struct IPropertyStore *v16; // rcx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, __int64, struct IPropertyStore **); // rdi
  struct IPropertyStore *v19; // rcx
  struct IPropertyStore *v21[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct IPropertyStore *v23; // [rsp+58h] [rbp+28h] BYREF

  v21[0] = 0LL;
  v23 = 0LL;
  if ( !a3 )
  {
    v17 = *a2;
    v21[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, struct IPropertyStore **))(v17 + 24))(a2, 0LL, v21) >= 0 )
    {
      v18 = *(__int64 (__fastcall **)(__int64, __int64, struct IPropertyStore **))(*(_QWORD *)a1 + 24LL);
      v19 = v23;
      v23 = 0LL;
      if ( v19 )
        ((void (__fastcall *)(struct IPropertyStore *))v19->lpVtbl->Release)(v19);
      v8 = v18(a1, 2LL, &v23);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 713LL;
        goto LABEL_16;
      }
      v11 = CopyProperties(v23, v21[0]);
      v12 = retaddr;
      if ( v11 < 0 )
      {
        v13 = 714LL;
        goto LABEL_25;
      }
    }
LABEL_26:
    v9 = 0;
    goto LABEL_27;
  }
  v4 = a3 - 1;
  if ( !v4 )
  {
    v14 = *a2;
    v21[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, struct IPropertyStore **))(v14 + 32))(a2, 0LL, v21) >= 0 )
    {
      v15 = *(__int64 (__fastcall **)(__int64, __int64, struct IPropertyStore **))(*(_QWORD *)a1 + 32LL);
      v16 = v23;
      v23 = 0LL;
      if ( v16 )
        ((void (__fastcall *)(struct IPropertyStore *))v16->lpVtbl->Release)(v16);
      v8 = v15(a1, 2LL, &v23);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 721LL;
        goto LABEL_16;
      }
      CopyProperties(v23, v21[0]);
    }
    goto LABEL_26;
  }
  if ( v4 != 1 )
    goto LABEL_26;
  v5 = *a2;
  v21[0] = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, struct IPropertyStore **))(v5 + 40))(a2, 0LL, v21) < 0 )
    goto LABEL_26;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, struct IPropertyStore **))(*(_QWORD *)a1 + 40LL);
  v7 = v23;
  v23 = 0LL;
  if ( v7 )
    ((void (__fastcall *)(struct IPropertyStore *))v7->lpVtbl->Release)(v7);
  v8 = v6(a1, 2LL, &v23);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = CopyProperties(v23, v21[0]);
    v12 = retaddr;
    if ( v11 < 0 )
    {
      v13 = 730LL;
LABEL_25:
      wil::details::in1diag3::_Log_Hr(
        v12,
        (void *)v13,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_26;
    }
    goto LABEL_26;
  }
  v10 = 729LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
    (const char *)(unsigned int)v8);
LABEL_27:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v23);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v21);
  return v9;
}
