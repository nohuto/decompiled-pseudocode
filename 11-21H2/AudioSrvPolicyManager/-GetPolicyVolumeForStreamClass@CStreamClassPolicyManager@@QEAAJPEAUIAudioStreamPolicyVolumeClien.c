/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAMAEA_J@Z @ 0x180029A24
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180009C00 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x180029970 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x18002EEF8 (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStreamClassPolicyManager::GetPolicyVolumeForStreamClass(
        CStreamClassPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2,
        float *a3,
        __int64 *a4)
{
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v11; // eax
  int PBMRelatedAudioStreamCategory; // eax
  const unsigned __int16 *v13; // rsi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v14; // edi
  int v15; // ebx
  DWORD v16; // eax
  int PolicyVolumeForStreamClass; // eax
  unsigned int v18; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CStreamClassPolicyManager *v20; // [rsp+60h] [rbp+8h] BYREF
  struct IAudioProcess *v21; // [rsp+68h] [rbp+10h] BYREF

  v20 = this;
  v7 = *(_QWORD *)a2;
  v21 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *, struct IAudioProcess **))(v7 + 24))(a2, &v21);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)(unsigned int)v8);
    if ( v21 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 16LL))(v21);
    return v9;
  }
  v11 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 56LL))(a2);
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v21, v11, (unsigned int *)&v20);
  v9 = PBMRelatedAudioStreamCategory;
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)(unsigned int)PBMRelatedAudioStreamCategory);
    if ( v21 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 16LL))(v21);
    return v9;
  }
  v13 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 40LL))(a2);
  v14 = (*(unsigned int (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 72LL))(a2);
  v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 104LL))(v21);
  v16 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 48LL))(v21);
  PolicyVolumeForStreamClass = TsSessionIdGetPolicyVolumeForStreamClass(v16, v13, (unsigned int)v20, v15, v14, a3, a4);
  v18 = PolicyVolumeForStreamClass;
  if ( PolicyVolumeForStreamClass >= 0 )
  {
    if ( v21 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 16LL))(v21);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)(unsigned int)PolicyVolumeForStreamClass);
    if ( v21 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 16LL))(v21);
    return v18;
  }
}
