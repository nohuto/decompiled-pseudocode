/*
 * XREFs of ?AcquirePowerReference@CXvmPowerReferenceManager@@QEAA?AV?$shared_ptr@VCXvmPowerReference@@@std@@XZ @ 0x180104100
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800222B0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$make_shared@VCXvmPowerReference@@PEAVCXvmPowerReferenceManager@@@std@@YA?AV?$shared_ptr@VCXvmPowerReference@@@0@$$QEAPEAVCXvmPowerReferenceManager@@@Z @ 0x180103950 (--$make_shared@VCXvmPowerReference@@PEAVCXvmPowerReferenceManager@@@std@@YA-AV-$shared_ptr@VCXvm.c)
 *     ?CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ @ 0x18010449C (-CancelDeferredPowerReferenceRelease@CXvmPowerReferenceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CXvmPowerReferenceManager::AcquirePowerReference(CXvmPowerReferenceManager *this, _QWORD *a2)
{
  _QWORD *v2; // r15
  int v4; // eax
  int v5; // r12d
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, char *, char *); // rsi
  int v8; // eax
  std::_Ref_count_base *v9; // rbx
  std::_Ref_count_base *v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-50h] BYREF
  std::_Ref_count_base *v13; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  CXvmPowerReferenceManager *v15; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+88h] [rbp+10h]
  char *v17; // [rsp+90h] [rbp+18h]

  v16 = a2;
  v2 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( *((_QWORD *)this + 16) )
  {
    v15 = this;
    std::make_shared<CXvmPowerReference,CXvmPowerReferenceManager *>(&v12, &v15);
    v17 = (char *)this + 40;
    v4 = _Mtx_lock((CXvmPowerReferenceManager *)((char *)this + 40));
    try
    {
      if ( v4 )
        std::_Throw_C_error(v4);
      v5 = *((_DWORD *)this + 8);
      *((_DWORD *)this + 8) = v5 + 1;
      if ( !v5 )
      {
        v6 = *((_QWORD *)this + 16);
        v7 = *(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v6 + 24LL);
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 17);
        v8 = v7(v6, (char *)this + 16, (char *)this + 136);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x159,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
            (const char *)(unsigned int)v8);
      }
      _Mtx_unlock((CXvmPowerReferenceManager *)((char *)this + 40));
      if ( !v5 )
        CXvmPowerReferenceManager::CancelDeferredPowerReferenceRelease(this);
      v9 = v13;
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
        v9 = v13;
      }
      *v2 = v12;
      v10 = (std::_Ref_count_base *)v2[1];
      v2[1] = v9;
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x168,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
        (const char *)0x8007000ELL);
      return v16;
    }
  }
  return v2;
}
