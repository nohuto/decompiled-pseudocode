/*
 * XREFs of ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18002BE88
 * Callers:
 *     std::call_once__lambda_a6dafc035b20d634b29ec3c0443d964a___ @ 0x180029D98 (std--call_once__lambda_a6dafc035b20d634b29ec3c0443d964a___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@MPCManager@@SAXXZ @ 0x18002B900 (-Create@MPCManager@@SAXXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18002C220 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D48C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18002D7A4 (-RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@P.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x18009F2C0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=17
MPCHolographicInputManager *__fastcall MPCHolographicInputManager::MPCHolographicInputManager(
        MPCHolographicInputManager *this)
{
  char *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  const char *v6; // r9
  int v7; // eax
  struct MPC3DStateHelper *Instance; // rax
  struct MPC3DStateHelper *v9; // rbx
  _QWORD v11[2]; // [rsp+20h] [rbp-58h] BYREF
  char v12; // [rsp+30h] [rbp-48h]
  MPCHolographicInputManager *v13; // [rsp+38h] [rbp-40h]
  _QWORD *v14; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char v16; // [rsp+80h] [rbp+8h]
  struct MPC3DStateHelper *v17; // [rsp+88h] [rbp+10h] BYREF

  v16 = (char)this;
  v2 = (char *)this + 264;
  memset_0((char *)this + 264, 0, 0xBC0uLL);
  *((_DWORD *)v2 + 6) = 3008;
  *((_QWORD *)this + 410) = 0LL;
  *((_QWORD *)this + 411) = 0LL;
  *((_QWORD *)this + 412) = 0LL;
  *((_QWORD *)this + 413) = 0LL;
  *((_QWORD *)this + 414) = 0LL;
  *((_QWORD *)this + 415) = 0LL;
  *((_QWORD *)this + 416) = 0LL;
  *((_QWORD *)this + 417) = 0LL;
  *((_QWORD *)this + 418) = 0LL;
  *((_QWORD *)this + 419) = 0LL;
  *((_QWORD *)this + 420) = 512LL;
  *((_BYTE *)this + 3368) = 0;
  *((_DWORD *)this + 843) = 0;
  *((_QWORD *)this + 422) = 0LL;
  *((_QWORD *)this + 423) = 0LL;
  *((_QWORD *)this + 424) = 0LL;
  memset_0((char *)this + 3400, 0, 0xC8uLL);
  *((_QWORD *)this + 450) = 0LL;
  *((_QWORD *)this + 451) = 0LL;
  *((_QWORD *)this + 452) = 0LL;
  *((_QWORD *)this + 453) = 0LL;
  *((_QWORD *)this + 454) = 0LL;
  *((_QWORD *)this + 455) = 0LL;
  *((_DWORD *)this + 912) = 1;
  *((_QWORD *)this + 457) = 0LL;
  *((_DWORD *)this + 916) = 0;
  *((_DWORD *)this + 917) = 0;
  *((_BYTE *)this + 3672) = 0;
  *(_QWORD *)((char *)this + 3676) = 0LL;
  *((_DWORD *)this + 921) = 50;
  *((_DWORD *)this + 922) = 50;
  *((_QWORD *)this + 462) = 0LL;
  *((_QWORD *)this + 463) = 0LL;
  *((_QWORD *)this + 464) = 0LL;
  *((_QWORD *)this + 465) = 0LL;
  *((_QWORD *)this + 466) = 0LL;
  *((_QWORD *)this + 467) = 0LL;
  MPCManager::Create(v4, v3, v5, v6);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 453);
  v7 = CoreUICreate((char *)this + 3624);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v7,
      v11[0]);
  *((_BYTE *)this + 3272) = 0;
  Instance = MPC3DStateHelper::GetInstance();
  v11[0] = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager *,std::_Ph<1> const &>,void,bool>::`vftable';
  v11[1] = MPCHolographicInputManager::OnHitTestingStateChanged;
  v12 = v16;
  v13 = this;
  v14 = v11;
  MPC3DStateHelper::RegisterFor3DHitTestingAvailabilityChanged(Instance, v11, (char *)this + 3668);
  v9 = MPC3DStateHelper::GetInstance();
  AcquireSRWLockShared((PSRWLOCK)v9);
  v17 = v9;
  LOBYTE(v9) = *((_BYTE *)v9 + 21);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
  if ( (_BYTE)v9 )
    MPCHolographicInputManager::OnHitTestingStateChanged(this, 1);
  return this;
}
