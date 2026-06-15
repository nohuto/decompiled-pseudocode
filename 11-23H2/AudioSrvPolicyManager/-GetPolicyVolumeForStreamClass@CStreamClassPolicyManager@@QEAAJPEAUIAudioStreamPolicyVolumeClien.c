/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAMAEA_J@Z @ 0x18003230C
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x18001C710 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F510 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x180015778 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x18003861C (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyManager::GetPolicyVolumeForStreamClass(
        CStreamClassPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2,
        float *a3,
        __int64 *a4)
{
  __int64 v7; // rax
  int PBMRelatedAudioStreamCategory; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // eax
  const unsigned __int16 *v12; // rsi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v13; // edi
  int v14; // ebx
  unsigned int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CStreamClassPolicyManager *v18; // [rsp+60h] [rbp+8h] BYREF
  struct IAudioProcess *v19; // [rsp+68h] [rbp+10h] BYREF

  v18 = this;
  v7 = *(_QWORD *)a2;
  v19 = 0LL;
  PBMRelatedAudioStreamCategory = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *, struct IAudioProcess **))(v7 + 24))(
                                    a2,
                                    &v19);
  v9 = PBMRelatedAudioStreamCategory;
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 56LL))(a2);
    PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v19, v11, (unsigned int *)&v18);
    v9 = PBMRelatedAudioStreamCategory;
    if ( PBMRelatedAudioStreamCategory >= 0 )
    {
      v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 40LL))(a2);
      v13 = (*(unsigned int (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 72LL))(a2);
      v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 104LL))(v19);
      v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 48LL))(v19);
      PBMRelatedAudioStreamCategory = TsSessionIdGetPolicyVolumeForStreamClass(
                                        v15,
                                        v12,
                                        (unsigned int)v18,
                                        v14,
                                        v13,
                                        a3,
                                        a4);
      v9 = PBMRelatedAudioStreamCategory;
      if ( PBMRelatedAudioStreamCategory >= 0 )
      {
        v9 = 0;
        goto LABEL_9;
      }
      v10 = 44LL;
    }
    else
    {
      v10 = 36LL;
    }
  }
  else
  {
    v10 = 32LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
    (const char *)(unsigned int)PBMRelatedAudioStreamCategory);
LABEL_9:
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v19);
  return v9;
}
