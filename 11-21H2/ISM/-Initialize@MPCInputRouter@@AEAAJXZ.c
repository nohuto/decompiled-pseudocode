/*
 * XREFs of ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18002BDC0
 * Callers:
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x180028414 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18002C220 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D48C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18002D4B4 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800F1670 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 */

__int64 __fastcall MPCInputRouter::Initialize(MPCInputRouter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  RTL_SRWLOCK *Instance; // rax
  struct MPC3DStateHelper *v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-68h]
  char v8; // [rsp+30h] [rbp-58h]
  void **v9; // [rsp+40h] [rbp-48h] BYREF
  __int128 v10; // [rsp+48h] [rbp-40h]
  char v11; // [rsp+58h] [rbp-30h]
  MPCInputRouter *v12; // [rsp+60h] [rbp-28h]
  void ***v13; // [rsp+78h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct MPC3DStateHelper *v15; // [rsp+98h] [rbp+10h] BYREF

  v2 = DWMInputRouter::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v2,
      v7);
    return v3;
  }
  else
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    DWORD2(v7) = 0;
    *(_QWORD *)&v7 = MPCInputRouter::On3DCompositorRunningChanged;
    v12 = this;
    v9 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCInputRouter::*)(bool),MPCInputRouter *,std::_Ph<1> const &>,void,bool>::`vftable';
    v11 = v8;
    v13 = &v9;
    v10 = v7;
    MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(Instance);
    v5 = MPC3DStateHelper::GetInstance();
    AcquireSRWLockShared((PSRWLOCK)v5);
    v15 = v5;
    LOBYTE(v5) = *((_BYTE *)v5 + 20);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
    if ( (_BYTE)v5 )
      MPCInputRouter::On3DCompositorRunningChanged(this, 1);
    return 0LL;
  }
}
