/*
 * XREFs of ?GetTsSessionId@CAudioSession@@UEAAKXZ @ 0x18000B7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18000B87C (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C5EEC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::GetTsSessionId(CAudioSession *this)
{
  _QWORD *v1; // rdi
  unsigned int v2; // esi
  _QWORD *i; // rbx
  unsigned __int64 v4; // rdx
  void *v6[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-10h]
  unsigned __int64 v8; // [rsp+60h] [rbp+20h] BYREF
  void *v9; // [rsp+68h] [rbp+28h] BYREF

  *(_OWORD *)v6 = 0LL;
  v7 = 0LL;
  CAudioSession::GetOwningProcesses((char *)this - 8, v6);
  v1 = v6[0];
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v6[0] + 48LL))(*(_QWORD *)v6[0]);
  for ( i = v1; i != v6[1]; ++i )
  {
    if ( *i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 16LL))(*i);
  }
  v4 = (v7 - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL;
  v8 = v4;
  v9 = v1;
  if ( v4 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v9, &v8);
    v4 = v8;
    v1 = v9;
  }
  operator delete(v1, v4);
  return v2;
}
