/*
 * XREFs of ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180024E70
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@AEAAXXZ @ 0x180024360 (-StateCheckExpiredCallback@CAudioSession@@AEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180016D94 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _lambda_ab1b644c27156c762685df6288a886df_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x180070C3C (_lambda_ab1b644c27156c762685df6288a886df_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800DED64 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::PruneTerminatedOwningProcesses(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const char *v3; // r9
  __int64 *v4; // r14
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  __int64 *v8; // rcx
  unsigned __int128 v9; // kr10_16
  __int64 v10; // rdi
  unsigned __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int128 *v14; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int128 *v15; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+80h] [rbp+18h]

  v11 = 0LL;
  v12 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
  v16 = v2;
  v4 = (__int64 *)*((_QWORD *)this + 89);
  v15 = &v11;
  v14 = &v11;
  v5 = (__int64 *)*((_QWORD *)this + 88);
  try
  {
    while ( v5 != v4
         && !(unsigned __int8)lambda_ab1b644c27156c762685df6288a886df_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
                                &v14,
                                v5) )
      ++v5;
    v6 = v5;
    if ( v5 != v4 )
    {
      while ( ++v5 != v4 )
      {
        if ( !(unsigned __int8)lambda_ab1b644c27156c762685df6288a886df_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
                                 &v15,
                                 v5) )
          wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v6++, v5);
      }
    }
    if ( v6 != v4 )
    {
      v7 = (__int64 *)*((_QWORD *)this + 89);
      while ( v4 != v7 )
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v6++, v4++);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(
        v6,
        *((__int64 **)this + 89));
      *((_QWORD *)this + 89) = v6;
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    v8 = (__int64 *)v11;
    v9 = v11;
    v10 = *((_QWORD *)&v11 + 1);
    while ( (_QWORD)v9 != v10 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)v9 + 32LL))(
        *(_QWORD *)v9,
        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      v8 = (__int64 *)v11;
      v9 = __PAIR128__(*((unsigned __int64 *)&v11 + 1), (__int64)v9 + 8);
    }
    if ( v8 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(
        v8,
        *((__int64 **)&v9 + 1));
      std::_Deallocate<16,0>(v11, (v12 - v11) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x784,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      v3);
  }
}
