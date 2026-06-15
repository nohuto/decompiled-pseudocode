/*
 * XREFs of ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x18001F4C0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c25bfbbe3eff8159fd381be65f1c93f0__void_::_Do_call @ 0x18001F290 (std--_Func_impl_no_alloc__lambda_c25bfbbe3eff8159fd381be65f1c93f0__void_--_Do_call.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18000B90C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C5EEC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     _lambda_ab1ef9b9f3a585693d4f94a0c120cf43_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x1800D4DF8 (_lambda_ab1ef9b9f3a585693d4f94a0c120cf43_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z @ 0x1800D5EFC (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CAudioSession::PruneTerminatedOwningProcesses(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 *v3; // rsi
  __int64 *i; // rdi
  __int64 *v5; // r15
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  __int64 *v9; // r12
  __int64 *j; // rdi
  char *v11; // rdx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE *v20; // [rsp+30h] [rbp-38h]
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  void *v22; // [rsp+78h] [rbp+10h] BYREF

  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
  v22 = v2;
  v3 = (__int64 *)*((_QWORD *)this + 89);
  v21 = (unsigned __int64)v19;
  for ( i = (__int64 *)*((_QWORD *)this + 88); i != v3; ++i )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*i + 248LL))(*i) )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 40LL))(*i);
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, v14);
      }
      if ( v19[1] == v20 )
      {
        std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
          (__int64 **)v19,
          (__int64 *)v19[1],
          i);
      }
      else
      {
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
          v19[1],
          *i);
        v19[1] = (char *)v19[1] + 8;
      }
      v5 = i;
      while ( ++i != v3 )
      {
        if ( !(unsigned __int8)lambda_ab1ef9b9f3a585693d4f94a0c120cf43_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
                                 &v21,
                                 i) )
        {
          v15 = *i;
          *i = 0LL;
          v16 = *v5;
          *v5 = v15;
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          ++v5;
        }
      }
      if ( v5 != v3 )
      {
        v9 = (__int64 *)*((_QWORD *)this + 89);
        if ( v3 != v9 )
        {
          do
          {
            v17 = *v3;
            *v3 = 0LL;
            v18 = *v5;
            *v5 = v17;
            if ( v18 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            ++v5;
            ++v3;
          }
          while ( v3 != v9 );
          v9 = (__int64 *)*((_QWORD *)this + 89);
        }
        for ( j = v5; j != v9; ++j )
        {
          if ( *j )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)*j + 16LL))(*j);
        }
        *((_QWORD *)this + 89) = v5;
      }
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v6 = v19[0];
  v7 = v19[0];
  v8 = v19[1];
  while ( v7 != v8 )
  {
    if ( this )
      v11 = (char *)this + 8;
    else
      v11 = 0LL;
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v7 + 32LL))(*v7, v11);
    ++v7;
    v6 = v19[0];
  }
  if ( v6 )
  {
    v12 = v19[1];
    if ( v6 != v19[1] )
    {
      do
      {
        if ( *v6 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
        ++v6;
      }
      while ( v6 != v12 );
      v6 = v19[0];
    }
    v13 = 8 * ((v20 - (_BYTE *)v6) >> 3);
    v21 = v13;
    v22 = v6;
    if ( v13 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v22, &v21);
      v13 = v21;
      v6 = v22;
    }
    operator delete(v6, v13);
  }
}
