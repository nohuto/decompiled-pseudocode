/*
 * XREFs of ?TryGetResourceManagerService@CCustomAudioEndpointResourceManagerCache@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x180046FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@@Z @ 0x1800F4964 (--$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@WRL.c)
 *     ??$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@@Z @ 0x1800F4A18 (--$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@W.c)
 *     ??$find_if@V?$_Flist_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V_lambda_106e1f811817531308326247710b5667_@@@std@@YA?AV?$_Flist_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@V10@V_lambda_106e1f811817531308326247710b5667_@@@Z @ 0x1800F504C (--$find_if@V-$_Flist_iterator@V-$_Flist_val@U-$_Flist_simple_types@V-$com_ptr_t@UIBtAudioResourc.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CCustomAudioEndpointResourceManagerCache::TryGetResourceManagerService(
        RTL_SRWLOCK *this,
        struct CEndpointCharacteristics *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int128 v8; // xmm1
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  RTL_SRWLOCK *v12; // rbx
  RTL_SRWLOCK *v13; // r14
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rdi
  int v18; // eax
  unsigned int v19; // edi
  _QWORD *v20; // rdi
  __int64 *v21; // rcx
  PVOID Ptr; // rcx
  bool v23; // zf
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // edi
  int v27; // eax
  unsigned int v28; // edi
  int v29[2]; // [rsp+20h] [rbp-78h] BYREF
  RTL_SRWLOCK *v30; // [rsp+28h] [rbp-70h] BYREF
  _QWORD *v31; // [rsp+30h] [rbp-68h]
  __int128 v32; // [rsp+38h] [rbp-60h]
  __int128 v33; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *a4 = 0LL;
  v8 = *(_OWORD *)((char *)a2 + 8252);
  v32 = v8;
  v33 = *(_OWORD *)((char *)a2 + 8268);
  result = v8 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)v8 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    result = *((_QWORD *)&v8 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( result )
  {
    v10 = v8 - BLUETOOTH_AUDIO_RESOURCE_MANAGER;
    if ( (_QWORD)v8 == BLUETOOTH_AUDIO_RESOURCE_MANAGER )
      v10 = *((_QWORD *)&v8 + 1) + 0x12C28937D3A30176LL;
    if ( v10 )
    {
      v11 = v8 - BLUETOOTHLE_AUDIO_RESOURCE_MANAGER;
      if ( (_QWORD)v8 == BLUETOOTHLE_AUDIO_RESOURCE_MANAGER )
        v11 = *((_QWORD *)&v8 + 1) + 0x54DCF32F8E93AD5ALL;
      if ( v11 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x32,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)0x8000FFFFLL);
        return 2147549183LL;
      }
    }
    v12 = this + 2;
    AcquireSRWLockExclusive(this + 2);
    *(_QWORD *)&v32 = v12;
    v13 = this + 3;
    std::find_if<std::_Flist_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>>>>,_lambda_106e1f811817531308326247710b5667_>(
      &v30,
      v13->Ptr,
      0LL,
      &v33);
    *(_QWORD *)v29 = 0LL;
    if ( v30 )
    {
      Ptr = v30[1].Ptr;
      *(_QWORD *)v29 = Ptr;
      if ( Ptr )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    }
    else
    {
      v14 = v8 - BLUETOOTH_AUDIO_RESOURCE_MANAGER;
      if ( (_QWORD)v8 == BLUETOOTH_AUDIO_RESOURCE_MANAGER )
        v14 = *((_QWORD *)&v8 + 1) + 0x12C28937D3A30176LL;
      if ( v14 )
      {
        v17 = v8 - BLUETOOTHLE_AUDIO_RESOURCE_MANAGER;
        if ( (_QWORD)v8 == BLUETOOTHLE_AUDIO_RESOURCE_MANAGER )
          v17 = *((_QWORD *)&v8 + 1) + 0x54DCF32F8E93AD5ALL;
        if ( !v17 )
        {
          *(_QWORD *)v29 = 0LL;
          v18 = Microsoft::WRL::Details::MakeAndInitialize<CBtLeAudioResourceManager,IBtAudioResourceManager,_GUID &>(
                  v29,
                  &v33);
          v19 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x44,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)v18);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v29);
            if ( v12 )
              ReleaseSRWLockExclusive(v12);
            return v19;
          }
        }
      }
      else
      {
        *(_QWORD *)v29 = 0LL;
        v15 = Microsoft::WRL::Details::MakeAndInitialize<CBtAudioResourceManager,IBtAudioResourceManager,_GUID &>(
                v29,
                &v33);
        v16 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x40,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v15);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v29);
          if ( v12 )
            ReleaseSRWLockExclusive(v12);
          return v16;
        }
      }
      v30 = v13;
      v31 = 0LL;
      v20 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      v31 = v20;
      v21 = *(__int64 **)v29;
      v20[1] = *(_QWORD *)v29;
      if ( v21 )
        (*(void (__fastcall **)(__int64 *))(*v21 + 8))(v21);
      *v20 = v13->Ptr;
      v13->Ptr = v20;
    }
    v23 = (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a2 + 56LL))(a2) == 0;
    v24 = **(_QWORD **)v29;
    if ( v23 )
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD, struct CEndpointCharacteristics *))(v24 + 48))(*(_QWORD *)v29, a2);
      v26 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x50,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v25);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v29);
        if ( v12 )
          ReleaseSRWLockExclusive(v12);
        return v26;
      }
      goto LABEL_40;
    }
    v27 = (*(__int64 (__fastcall **)(_QWORD, struct CEndpointCharacteristics *))(v24 + 56))(*(_QWORD *)v29, a2);
    v28 = v27;
    if ( v27 >= 0 )
    {
LABEL_40:
      (***(void (__fastcall ****)(_QWORD, const struct _GUID *, void **))v29)(*(_QWORD *)v29, a3, a4);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v29);
      if ( v12 )
        ReleaseSRWLockExclusive(v12);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v27);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v29);
    if ( v12 )
      ReleaseSRWLockExclusive(v12);
    return v28;
  }
  return result;
}
