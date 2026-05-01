/*
 * XREFs of ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x1802E18F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_30895542713010bf0b1f8061f525305d___ @ 0x1802DC10C (CDelayIAMOperations--AddOperation__lambda_30895542713010bf0b1f8061f525305d___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::AsyncInvokeWithApplicationViewSerialization(
        CApplicationManager *this,
        struct IAsyncCallback *a2)
{
  int *v4; // rbx
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAsyncCallback *v8; // [rsp+30h] [rbp+8h] BYREF
  struct IAsyncCallback *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (int *)*((_QWORD *)this + 61);
  v8 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  LODWORD(v4) = CDelayIAMOperations::AddOperation__lambda_30895542713010bf0b1f8061f525305d___(v4, (char *)&v8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = 0;
  if ( !(_DWORD)v4 )
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1321,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return v5;
}
