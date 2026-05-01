/*
 * XREFs of _lambda_30895542713010bf0b1f8061f525305d_::operator() @ 0x1802E0794
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_30895542713010bf0b1f8061f525305d___::operator() @ 0x1802E1000 (CDelayIAMOperations--CDelayedOperation__lambda_30895542713010bf0b1f8061f525305d___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_250fcdf9c28934f08f14c2de8f45316a___ @ 0x1802DD804 (Windows--Internal--ComTaskPool--QueueTask__lambda_250fcdf9c28934f08f14c2de8f45316a___.c)
 */

void __fastcall lambda_30895542713010bf0b1f8061f525305d_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  PSRWLOCK v3; // rdi
  int v4; // ebx
  unsigned int Ptr; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *a1;
  v11 = *a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
  {
    *(RTL_SRWLOCK *)v8 = CApplicationManagerUtility::g_pIAMGlobals[14];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v8);
    Ptr = (unsigned int)v3[15].Ptr;
    v11 = 0LL;
    v9 = v2;
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_250fcdf9c28934f08f14c2de8f45316a___(v7, v6, Ptr, v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v8);
  }
  else
  {
    v4 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x131B,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v4);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, (unsigned int)v4);
  }
}
