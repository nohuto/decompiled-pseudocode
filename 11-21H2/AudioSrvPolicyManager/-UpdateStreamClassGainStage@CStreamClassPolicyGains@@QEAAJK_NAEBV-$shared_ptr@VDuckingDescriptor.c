/*
 * XREFs of ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x180037B9C
 * Callers:
 *     ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180030BB0 (-UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18000EA60 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_d29f8cb166960269749b8c0ea722c7d7___ @ 0x1800377B0 (std--forward_list_wil--com_ptr_t_CPBMStreamClassVolumeGainStage_wil--err_returncode_policy__std-.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180037B60 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage(
        LPCRITICAL_SECTION lpCriticalSection,
        char *a2,
        char a3,
        __int64 *a4,
        int a5,
        __int64 a6,
        volatile signed __int32 *a7)
{
  __int64 v9; // rsi
  const char *v11; // r9
  volatile signed __int32 *v12; // r12
  __int64 **v13; // rdi
  HANDLE ProcessHeap; // rax
  _DWORD *v15; // rax
  __int64 v16; // rbx
  int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 result; // rax
  int v22; // ebx
  HANDLE v23; // rax
  __int64 *v24; // rcx
  volatile signed __int32 *v25; // rbx
  signed __int32 v26; // eax
  float v27; // xmm1_4
  volatile signed __int32 *v28; // rcx
  __int64 *i; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // esi
  int v33; // ebx
  HANDLE v34; // rax
  __int64 *v35; // rdx
  signed __int32 v36; // eax
  char *v37; // rbx
  __int64 *v38; // rax
  __int64 *v39; // rdx
  char *v40; // rdi
  volatile signed __int32 *v41; // rcx
  char *v42; // [rsp+28h] [rbp-E0h]
  __int64 v43; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v44[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v45; // [rsp+60h] [rbp-A8h] BYREF
  char *v46; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v47; // [rsp+70h] [rbp-98h]
  _OWORD *v48; // [rsp+80h] [rbp-88h] BYREF
  _OWORD *v49; // [rsp+88h] [rbp-80h] BYREF
  __int64 v50[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v51[4]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 *v52; // [rsp+C0h] [rbp-48h]
  __int64 *v53; // [rsp+D0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  volatile signed __int32 *v55; // [rsp+110h] [rbp+8h] BYREF

  v9 = (unsigned int)a2;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    v51[2] = (__int64)lpCriticalSection;
    v12 = a7;
    *a7 = 0;
    v13 = (__int64 **)((char *)&lpCriticalSection->DebugInfo + 8 * v9 + (a3 != 0 ? 232LL : 40LL));
    if ( a6 )
    {
      if ( !a5 )
      {
        ProcessHeap = GetProcessHeap();
        v15 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
        v16 = (__int64)v15;
        v17 = 1;
        if ( v15 )
        {
          v15[2] = 1;
          v15[3] = 1;
          *(_QWORD *)v15 = &std::_Ref_count_obj2<DeactivatableDuckingDescriptor>::`vftable';
          v18 = a6;
          *((_QWORD *)v15 + 2) = &DeactivatableDuckingDescriptor::`vftable';
          *((_QWORD *)v15 + 3) = 0LL;
          *((_QWORD *)v15 + 4) = 0LL;
          v19 = a4[1];
          if ( v19 )
            _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
          *(_QWORD *)(v16 + 24) = *a4;
          *(_QWORD *)(v16 + 32) = a4[1];
          *(_QWORD *)(v16 + 40) = v18;
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        }
        else
        {
          v16 = 0LL;
        }
        v20 = v16 + 16;
        v44[0] = v16 + 16;
        v44[1] = v16;
        if ( v16 == -16 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5C,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
            (const char *)0x8007000ELL);
          std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v44);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          return 2147942414LL;
        }
        if ( v16 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
          v20 = v44[0];
        }
        v50[0] = v16 + 16;
        v50[1] = v16;
        v48 = &StreamClassVolumePolicyGuid;
        a7 = 0LL;
        v22 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
                &a7,
                &v48,
                v50);
        std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v50);
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5F,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
            (const char *)(unsigned int)v22);
          if ( a7 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(a7);
          std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v44);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          return (unsigned int)v22;
        }
        v23 = GetProcessHeap();
        v24 = (__int64 *)HeapAlloc(v23, 0, 0x10uLL);
        v52 = v24;
        v25 = a7;
        v24[1] = (__int64)a7;
        if ( v25 )
        {
          do
            v26 = *((_DWORD *)v25 + 13);
          while ( v26 != 0x7FFFFFFF && v26 != _InterlockedCompareExchange(v25 + 13, v26 + 1, v26) );
          v20 = v44[0];
          v25 = a7;
          v24 = v52;
        }
        *v24 = (__int64)*v13;
        *v13 = v24;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 24) + 24LL))(*(_QWORD *)(v20 + 24)) )
          v27 = *(float *)(*(_QWORD *)(v20 + 8) + 8LL);
        else
          v27 = 0.0;
        if ( v27 == 0.0 )
          v17 = 0;
        *v12 = v17;
        if ( v25 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v25);
        std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v44);
        goto LABEL_76;
      }
      v43 = 0LL;
      v45 = &a6;
      v46 = (char *)&v43;
      std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_d29f8cb166960269749b8c0ea722c7d7___(
        v13,
        (__int64)&v45);
      v28 = (volatile signed __int32 *)v43;
      if ( v43 )
      {
        *v12 = (***(float (__fastcall ****)(_QWORD))(v43 + 56))(*(_QWORD *)(v43 + 56)) != 0.0;
        v28 = (volatile signed __int32 *)v43;
      }
      goto LABEL_59;
    }
    for ( i = *v13; i && *a4 != *(_QWORD *)(i[1] + 56); i = (__int64 *)*i )
      ;
    if ( a5 )
    {
      if ( i )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i[1] + 36), 0xFFFFFFFF) == 1 )
        {
          v45 = (__int64 *)((char *)&lpCriticalSection->DebugInfo + 8 * v9 + (a3 != 0 ? 232LL : 40LL));
          v37 = 0LL;
          v46 = 0LL;
          v47 = &v46;
          v38 = *v13;
          if ( *v13 )
          {
            do
            {
              if ( *a4 == *(_QWORD *)(v38[1] + 56) )
              {
                v39 = *v13;
                v38 = (__int64 *)**v13;
                *v39 = 0LL;
                *v13 = v38;
                *v47 = v39;
                v47 = v39;
              }
              else
              {
                v13 = (__int64 **)v38;
                v38 = (__int64 *)*v38;
              }
            }
            while ( v38 );
            v37 = v46;
          }
          if ( v37 )
          {
            do
            {
              v40 = *(char **)v37;
              v41 = (volatile signed __int32 *)*((_QWORD *)v37 + 1);
              if ( v41 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v41);
              std::_Deallocate<16,0>(v37, 0x10uLL);
              v37 = v40;
            }
            while ( v40 );
          }
          *v12 = *(float *)(*a4 + 8) != 0.0;
        }
      }
      else
      {
        LODWORD(v42) = v9;
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          167LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
          (const char *)0x8000FFFFLL,
          (__int64)"Category = %d, DescriptorGain = %f",
          v42,
          *(float *)(*a4 + 8));
      }
      goto LABEL_76;
    }
    if ( i )
    {
      _InterlockedAdd((volatile signed __int32 *)(i[1] + 36), 1u);
LABEL_76:
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return 0LL;
    }
    v30 = *a4;
    v31 = a4[1];
    v32 = 1;
    if ( v31 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v31 + 8), 1u);
      v31 = a4[1];
    }
    v51[0] = v30;
    v51[1] = v31;
    v49 = &StreamClassVolumePolicyGuid;
    v55 = 0LL;
    v33 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
            &v55,
            &v49,
            v51);
    std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v51);
    if ( v33 >= 0 )
    {
      v34 = GetProcessHeap();
      v35 = (__int64 *)HeapAlloc(v34, 0, 0x10uLL);
      v53 = v35;
      v28 = v55;
      v35[1] = (__int64)v55;
      if ( v28 )
      {
        do
          v36 = *((_DWORD *)v28 + 13);
        while ( v36 != 0x7FFFFFFF && v36 != _InterlockedCompareExchange(v28 + 13, v36 + 1, v36) );
        v28 = v55;
        v35 = v53;
      }
      *v35 = (__int64)*v13;
      *v13 = v35;
      if ( *(float *)(*a4 + 8) == 0.0 )
        v32 = 0;
      *v12 = v32;
LABEL_59:
      if ( v28 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v28);
      goto LABEL_76;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      (const char *)(unsigned int)v33);
    if ( v55 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v55);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = (unsigned int)v33;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAE,
                           (int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
                           v11);
  }
  return result;
}
