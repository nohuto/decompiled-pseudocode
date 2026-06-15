/*
 * XREFs of std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_d29f8cb166960269749b8c0ea722c7d7___ @ 0x1800377B0
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x180037B9C (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_d29f8cb166960269749b8c0ea722c7d7___(
        __int64 **a1,
        __int64 a2)
{
  __int64 **v3; // rdi
  char *v4; // rsi
  __int64 *v5; // rbx
  _QWORD *v6; // rsi
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // r8
  volatile signed __int32 *v9; // rcx
  bool i; // zf
  signed __int32 v11; // eax
  __int64 *v12; // rcx
  char *v13; // rbx
  volatile signed __int32 *v14; // rcx
  char *v15; // [rsp+28h] [rbp-20h] BYREF
  __int64 **v16; // [rsp+30h] [rbp-18h]

  v3 = a1;
  v4 = 0LL;
  v15 = 0LL;
  v16 = (__int64 **)&v15;
  v5 = *a1;
  if ( *a1 )
  {
    v6 = *(_QWORD **)a2;
    do
    {
      if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5[1] + 56) + 32LL))(*(_QWORD *)(v5[1] + 56)) == *v6 )
      {
        v7 = *(volatile signed __int32 ***)(a2 + 8);
        v8 = (volatile signed __int32 *)v5[1];
        v9 = *v7;
        *v7 = v8;
        for ( i = v8 == 0LL; !i; i = v11 == _InterlockedCompareExchange(v8 + 13, v11 + 1, v11) )
        {
          v11 = *((_DWORD *)v8 + 13);
          if ( v11 == 0x7FFFFFFF )
            break;
        }
        if ( v9 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v9);
        v12 = *v3;
        v5 = (__int64 *)**v3;
        *v12 = 0LL;
        *v3 = v5;
        *v16 = v12;
        v16 = (__int64 **)v12;
      }
      else
      {
        v3 = (__int64 **)v5;
        v5 = (__int64 *)*v5;
      }
    }
    while ( v5 );
    v4 = v15;
  }
  if ( v4 )
  {
    do
    {
      v13 = *(char **)v4;
      v14 = (volatile signed __int32 *)*((_QWORD *)v4 + 1);
      if ( v14 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v14);
      std::_Deallocate<16,0>(v4, 0x10uLL);
      v4 = v13;
    }
    while ( v13 );
  }
}
