/*
 * XREFs of ?GetTsSessionId@CAudioSession@@UEAAKXZ @ 0x180047A20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180016D94 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180047A9C (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::GetTsSessionId(CAudioSession *this)
{
  __int64 *v1; // rdi
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  CAudioSession::GetOwningProcesses((char *)this - 8, &v4);
  v1 = (__int64 *)v4;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 48LL))(*(_QWORD *)v4);
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(
    v1,
    *((__int64 **)&v4 + 1));
  std::_Deallocate<16,0>(v1, (v5 - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
  return v2;
}
