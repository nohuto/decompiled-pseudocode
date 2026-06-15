/*
 * XREFs of ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJPEAUIDuckingController@@_NPEA_J@Z @ 0x18000C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___ @ 0x1800D5C1C (std--forward_list_wil--com_ptr_t_CPBMStreamClassVolumeGainStage_wil--err_returncode_policy__std-.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DA6B8 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::RemoveDuckingManagerGainStage(
        CAudioSession *this,
        struct IDuckingController *a2,
        char a3,
        __int64 *a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *i; // rbx
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IDuckingController *v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = a4;
  v15 = a2;
  if ( a4 )
    *a4 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 328);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 328));
  if ( a3 )
  {
    if ( v16 )
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 46); i; i = (_QWORD *)*i )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
        v11 = v16;
        v12 = *v16;
        if ( *v16 <= v10 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
          v11 = v16;
        }
        *v11 = v12;
      }
    }
    v7 = (_QWORD *)*((_QWORD *)this + 46);
    *((_QWORD *)this + 46) = 0LL;
    if ( v7 )
    {
      do
      {
        v13 = (_QWORD *)*v7;
        if ( v7[1] )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release();
        std::_Deallocate<16,0>(v7, 16LL);
        v7 = v13;
      }
      while ( v13 );
    }
  }
  else
  {
    v14[0] = &v15;
    v14[1] = &v16;
    std::forward_list_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CPBMStreamClassVolumeGainStage_wil::err_returncode_policy_____::remove_if__lambda_5fdc09f974c9fb8661da7e153f1f57b6___(
      (char *)this + 368,
      v14);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
