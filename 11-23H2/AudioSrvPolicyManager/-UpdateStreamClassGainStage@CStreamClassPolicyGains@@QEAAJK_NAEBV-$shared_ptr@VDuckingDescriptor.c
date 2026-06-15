/*
 * XREFs of ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000BDA0
 * Callers:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HHPEAUIDuckingController@@PEAH@Z @ 0x1800324AC (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKAEBV-$shared_ptr@VDuckin.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180002550 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000B5A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GainInDb@DeactivatableDuckingDescriptor@@UEBAMXZ @ 0x180014230 (-GainInDb@DeactivatableDuckingDescriptor@@UEBAMXZ.c)
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18001F468 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ??$static_pointer_cast@UIDuckingDescriptor@@VDeactivatableDuckingDescriptor@@@std@@YA?AV?$shared_ptr@UIDuckingDescriptor@@@0@AEBV?$shared_ptr@VDeactivatableDuckingDescriptor@@@0@@Z @ 0x18001FE04 (--$static_pointer_cast@UIDuckingDescriptor@@VDeactivatableDuckingDescriptor@@@std@@YA-AV-$shared.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800228D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ??$make_shared@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@std@@YA?AV?$shared_ptr@VDeactivatableDuckingDescriptor@@@0@AEAPEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@0@@Z @ 0x18003EEB4 (--$make_shared@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEBV-$shared_ptr@VDuc.c)
 *     std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_165499ea39685c5d8e5f507cce42e944___ @ 0x18003EF38 (std--forward_list_wil--com_ptr_t_CPBMStreamClassVolumeGainStage_wil--err_returncode_policy__std-.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18003F174 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?push_front@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18003F1B0 (-push_front@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned int a2,
        char a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // r14
  const char *v11; // r9
  int v12; // esi
  int *v13; // r12
  __int64 v14; // rax
  std::_Ref_count_base **v15; // rdi
  DeactivatableDuckingDescriptor *v16; // r15
  __int64 result; // rax
  __int64 v18; // rax
  int v19; // r14d
  std::_Ref_count_base *v20; // rbx
  __int64 v21; // rax
  volatile int *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  std::_Ref_count_base *v25; // rcx
  std::_Ref_count_base *v26; // rbx
  std::_Ref_count_base *v27; // rdi
  std::_Ref_count_base *i; // rax
  __int64 v29; // rax
  int v30; // r14d
  int v31; // [rsp+20h] [rbp-78h]
  char *v32; // [rsp+28h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSectiona; // [rsp+40h] [rbp-58h]
  DeactivatableDuckingDescriptor *v34; // [rsp+48h] [rbp-50h] BYREF
  std::_Ref_count_base *v35; // [rsp+50h] [rbp-48h]
  char *v36; // [rsp+58h] [rbp-40h] BYREF
  std::_Ref_count_base *v37; // [rsp+60h] [rbp-38h] BYREF
  std::_Ref_count_base **v38; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  void *v40; // [rsp+A0h] [rbp+8h] BYREF

  v9 = a2;
  EnterCriticalSection(lpCriticalSection);
  lpCriticalSectiona = lpCriticalSection;
  v12 = 0;
  v13 = (int *)a7;
  *(_DWORD *)a7 = 0;
  v14 = 232LL;
  if ( !a3 )
    v14 = 40LL;
  try
  {
    v15 = (std::_Ref_count_base **)((char *)&lpCriticalSection->DebugInfo + 8 * v9 + v14);
    if ( a6 )
    {
      if ( !a5 )
      {
        std::make_shared<DeactivatableDuckingDescriptor,IDuckingController * &,std::shared_ptr<DuckingDescriptor> const &>(
          &v34,
          &a6,
          a4);
        v16 = v34;
        if ( !v34 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5C,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
            (const char *)0x8007000ELL,
            v31);
          if ( v35 )
            std::_Ref_count_base::_Decref(v35);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          return 2147942414LL;
        }
        v18 = std::static_pointer_cast<IDuckingDescriptor,DeactivatableDuckingDescriptor>(&v36, &v34);
        v40 = &StreamClassVolumePolicyGuid;
        a7 = 0LL;
        v19 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
                &a7,
                &v40,
                v18);
        if ( v37 )
          std::_Ref_count_base::_Decref(v37);
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5F,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
            (const char *)(unsigned int)v19,
            v31);
          if ( a7 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(a7);
          if ( v35 )
            std::_Ref_count_base::_Decref(v35);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          return (unsigned int)v19;
        }
        std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::push_front(
          v15,
          &a7);
        if ( DeactivatableDuckingDescriptor::GainInDb(v16) != 0.0 )
          v12 = 1;
        *v13 = v12;
        if ( a7 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(a7);
        if ( v35 )
          std::_Ref_count_base::_Decref(v35);
        goto LABEL_71;
      }
      a7 = 0LL;
      v36 = (char *)&lpCriticalSection->DebugInfo + 8 * v9 + v14;
      v37 = 0LL;
      v38 = &v37;
      v20 = *v15;
      while ( v20 )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v20 + 1) + 56LL) + 32LL))(*(_QWORD *)(*((_QWORD *)v20 + 1) + 56LL));
        if ( v21 == a6 )
        {
          v23 = a7;
          v24 = *((_QWORD *)v20 + 1);
          a7 = v24;
          if ( v24 )
            Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v24 + 52), v22);
          if ( v23 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v23);
          v25 = *v15;
          v20 = *(std::_Ref_count_base **)*v15;
          *(_QWORD *)v25 = 0LL;
          *v15 = v20;
          *v38 = v25;
          v38 = (std::_Ref_count_base **)v25;
        }
        else
        {
          v15 = (std::_Ref_count_base **)v20;
          v20 = *(std::_Ref_count_base **)v20;
        }
      }
      v26 = v37;
      if ( v37 )
      {
        do
        {
          v27 = *(std::_Ref_count_base **)v26;
          if ( *((_QWORD *)v26 + 1) )
            ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release)();
          std::_Deallocate<16,0>(v26, 16LL);
          v26 = v27;
        }
        while ( v27 );
      }
      if ( a7 )
      {
        if ( (***(float (__fastcall ****)(_QWORD))(a7 + 56))(*(_QWORD *)(a7 + 56)) != 0.0 )
          v12 = 1;
        *v13 = v12;
      }
      goto LABEL_62;
    }
    for ( i = *v15; i && *(_QWORD *)a4 != *(_QWORD *)(*((_QWORD *)i + 1) + 56LL); i = *(std::_Ref_count_base **)i )
      ;
    if ( a5 )
    {
      if ( i )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)i + 1) + 36LL), 0xFFFFFFFF) == 1 )
        {
          std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_165499ea39685c5d8e5f507cce42e944___(
            v15,
            a4);
          if ( *(float *)(*(_QWORD *)a4 + 8LL) != 0.0 )
            v12 = 1;
          *v13 = v12;
        }
      }
      else
      {
        LODWORD(v32) = v9;
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0xA7,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
          (const char *)0x8000FFFFLL,
          (int)"Category = %d, DescriptorGain = %f",
          v32,
          *(float *)(*(_QWORD *)a4 + 8LL));
      }
      goto LABEL_71;
    }
    if ( i )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)i + 1) + 36LL));
LABEL_71:
      if ( lpCriticalSectiona )
        LeaveCriticalSection(lpCriticalSectiona);
      return 0LL;
    }
    v29 = std::static_pointer_cast<IDuckingDescriptor,DeactivatableDuckingDescriptor>(&v36, a4);
    v40 = &StreamClassVolumePolicyGuid;
    a7 = 0LL;
    v30 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
            &a7,
            &v40,
            v29);
    if ( v37 )
      std::_Ref_count_base::_Decref(v37);
    if ( v30 >= 0 )
    {
      std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::push_front(v15, &a7);
      if ( *(float *)(*(_QWORD *)a4 + 8LL) != 0.0 )
        v12 = 1;
      *v13 = v12;
LABEL_62:
      if ( a7 )
        ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release)();
      goto LABEL_71;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      (const char *)(unsigned int)v30,
      v31);
    if ( a7 )
      ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release)();
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = (unsigned int)v30;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAE,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
                           v11);
  }
  return result;
}
