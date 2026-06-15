/*
 * XREFs of ?InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800475B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18000A48C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_com_query_to@UIAPOWrapperSrv@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAPOWrapperSrv@@@Z @ 0x18002AF20 (--$try_com_query_to@UIAPOWrapperSrv@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProce.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180047644 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::InitializeAPOs(
        CBaseStreamGroupProxy *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  __int64 *v6; // rbx
  __int64 i; // rdi
  _QWORD *v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = (__int64 *)((char *)this + 232);
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
    *((_QWORD *)this + 29),
    *((_QWORD *)this + 30));
  v6[1] = *v6;
  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    v11 = 0LL;
    if ( wil::try_com_query_to<IAPOWrapperSrv,IAudioProcessingObject * &>(&a4[i], (__int64)&v11) )
    {
      v8 = (_QWORD *)v6[1];
      if ( v8 == (_QWORD *)v6[2] )
      {
        std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy> const &>(
          v6,
          (__int64)v8,
          &v11);
      }
      else
      {
        v10 = v11;
        *v8 = v11;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v6[1] += 8LL;
      }
    }
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>(&v11);
  }
  return 0LL;
}
