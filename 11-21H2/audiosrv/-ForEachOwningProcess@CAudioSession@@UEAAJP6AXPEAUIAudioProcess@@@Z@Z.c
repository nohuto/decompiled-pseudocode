/*
 * XREFs of ?ForEachOwningProcess@CAudioSession@@UEAAJP6AXPEAUIAudioProcess@@@Z@Z @ 0x1800D76F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18000B87C (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005D138 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::ForEachOwningProcess(CAudioSession *this, void (*a2)(struct IAudioProcess *))
{
  int OwningProcesses; // eax
  const char *v4; // r9
  unsigned int v5; // edi
  void *v6; // rbx
  __int64 result; // rax
  __int64 *v8; // rbx
  _QWORD *v9; // rdi
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  v11 = 0LL;
  OwningProcesses = CAudioSession::GetOwningProcesses((__int64)this - 8, (__int64)&v10);
  v5 = OwningProcesses;
  if ( OwningProcesses >= 0 )
  {
    v8 = (__int64 *)v10;
    v9 = (_QWORD *)v10;
    try
    {
      while ( v9 != *((_QWORD **)&v10 + 1) )
        ((void (__fastcall *)(_QWORD))a2)(*v9++);
      if ( v8 )
      {
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
          v8,
          *((__int64 **)&v10 + 1));
        std::_Deallocate<16,0>(v8, (v11 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x731,
                             (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                             v4);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x728,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)OwningProcesses);
    v6 = (void *)v10;
    if ( (_QWORD)v10 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
        (__int64 *)v10,
        *((__int64 **)&v10 + 1));
      std::_Deallocate<16,0>(v6, (v11 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    return v5;
  }
  return result;
}
