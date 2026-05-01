/*
 * XREFs of _lambda_4283d24cd011cefa10f50035df6139a0_::operator() @ 0x18002504C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___::Run @ 0x1800252D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a61a72d02543b99baa10fb55a6e7a2f5___ @ 0x180024CF8 (Windows--Internal--ComTaskPool--QueueTask__lambda_a61a72d02543b99baa10fb55a6e7a2f5___.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_4283d24cd011cefa10f50035df6139a0_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  PSRWLOCK v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID Ptr; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+28h] [rbp-8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+10h] BYREF
  __int64 v9; // [rsp+48h] [rbp+18h] BYREF

  v9 = *a1;
  v1 = v9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v8 = v1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
    v7 = v1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7);
    Windows::Internal::ComTaskPool::QueueTask__lambda_a61a72d02543b99baa10fb55a6e7a2f5___(
      v4,
      v3,
      (unsigned int)v2[15].Ptr,
      &Ptr);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&Ptr);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
}
