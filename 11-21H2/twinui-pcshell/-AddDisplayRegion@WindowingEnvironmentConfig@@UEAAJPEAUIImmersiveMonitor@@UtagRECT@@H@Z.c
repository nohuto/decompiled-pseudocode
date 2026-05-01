/*
 * XREFs of ?AddDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@UtagRECT@@H@Z @ 0x180152590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9___ @ 0x1801526AC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::AddDisplayRegion(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        struct tagRECT *a3,
        int a4)
{
  DWORD CurrentThreadId; // eax
  __int64 v7; // rcx
  int v8; // eax
  RTL_SRWLOCK *v10; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v11[5]; // [rsp+28h] [rbp-50h] BYREF
  float v12[4]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IImmersiveMonitor *v14; // [rsp+88h] [rbp+10h] BYREF
  int v15; // [rsp+98h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a2;
  v12[0] = (float)a3->left;
  v12[1] = (float)a3->top;
  v12[2] = (float)(a3->right - a3->left);
  v12[3] = (float)(a3->bottom - a3->top);
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 6) + 48LL))(*((_QWORD *)this + 6), &v10);
  v11[0] = (char *)this - 32;
  v11[1] = &v14;
  v11[2] = a3;
  v11[3] = &v15;
  v11[4] = v12;
  CurrentThreadId = GetCurrentThreadId();
  v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9___(
         v7,
         CurrentThreadId,
         v11);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE8,
      (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v8,
      (int)v10);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v10);
  return 0LL;
}
