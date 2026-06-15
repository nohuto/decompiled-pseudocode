/*
 * XREFs of ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800226C0
 * Callers:
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000F080 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AC20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800202B4 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 *     ??1_Flist_node_remove_op@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x1800204C4 (--1_Flist_node_remove_op@-$forward_list@PEAUIAudioSessionInfo@@V-$allocator@PEAUIAudioSessionInf.c)
 *     _lambda_6c758f270a739346e4977fa18103cf5e_::operator() @ 0x180020B0C (_lambda_6c758f270a739346e4977fa18103cf5e_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDuckingManager::OnStateChanged(
        CDuckingManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  __int64 result; // rax
  const char *v7; // r9
  char *v8; // rdi
  _QWORD *v9; // rax
  struct _RTL_CRITICAL_SECTION **v10; // rcx
  _QWORD **v11; // rdi
  _QWORD *v12; // rbx
  __int64 *v13; // rcx
  char *v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  _QWORD **v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v18; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IAudioSessionInfo **v20; // [rsp+60h] [rbp+8h] BYREF
  struct IAudioSessionInfo *v21; // [rsp+68h] [rbp+10h] BYREF

  v21 = a2;
  if ( *((_BYTE *)this + 456) )
    return 0LL;
  try
  {
    if ( (*(unsigned int (**)(void))(*(_QWORD *)a2 + 40LL))() )
      return 0LL;
    if ( (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v21 + 56LL))(v21) )
      return 0LL;
    if ( a4 == AudioSessionStateActive )
    {
      if ( !(*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v21 + 48LL))(v21) )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
        v20 = (struct IAudioSessionInfo **)((char *)this + 24);
        v8 = (char *)this + 64;
        v14 = v8;
        v15 = 0LL;
        v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
        v9[1] = v21;
        *v9 = *(_QWORD *)v8;
        v15 = 0LL;
        *(_QWORD *)v8 = v9;
        std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v14);
        v10 = (struct _RTL_CRITICAL_SECTION **)&v20;
LABEL_17:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v10);
      }
    }
    else if ( a4 == AudioSessionStateInactive )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
      v14 = (char *)this + 24;
      v11 = (_QWORD **)((char *)this + 64);
      v20 = &v21;
      v16 = v11;
      v17 = 0LL;
      v18 = &v17;
      v12 = *v11;
      while ( v12 )
      {
        if ( lambda_6c758f270a739346e4977fa18103cf5e_::operator()(&v20, v12[1]) )
        {
          v13 = *v11;
          v12 = (_QWORD *)**v11;
          *v13 = 0LL;
          *v11 = v12;
          *v18 = (__int64)v13;
          v18 = v13;
        }
        else
        {
          v11 = (_QWORD **)v12;
          v12 = (_QWORD *)*v12;
        }
      }
      std::forward_list<IAudioSessionInfo *>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v16);
      v10 = (struct _RTL_CRITICAL_SECTION **)&v14;
      goto LABEL_17;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x113,
                     (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                     v7);
    return (unsigned int)v20;
  }
  return result;
}
