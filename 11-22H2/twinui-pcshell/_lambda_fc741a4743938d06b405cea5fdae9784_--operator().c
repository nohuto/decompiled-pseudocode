/*
 * XREFs of _lambda_fc741a4743938d06b405cea5fdae9784_::operator() @ 0x1803A9AD8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___::Run @ 0x1803AA120 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004E194 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ @ 0x1803AA028 (-RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_fc741a4743938d06b405cea5fdae9784_::operator()(HANDLE *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( WaitForSingleObject(a1[1], 0x1B7740u) == 258 )
    CAppManagerTelemetry::RotationManagerSuppressionTimeout();
  v2 = (__int64)*a1;
  v6 = *a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v3);
    v4[2] = 0LL;
    if ( v4 + 2 != &v6 )
    {
      v4[2] = v2;
      v6 = 0LL;
      v2 = 0LL;
    }
    *v4 = off_1807CFCA0;
  }
  else
  {
    v4 = 0LL;
  }
  v6 = v4;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( !v4
    || (*(int (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)*a1 + 18) + 72LL))(
         *((_QWORD *)*a1 + 18),
         v4,
         0LL) < 0 )
  {
    *((_BYTE *)*a1 + 128) = 0;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
}
