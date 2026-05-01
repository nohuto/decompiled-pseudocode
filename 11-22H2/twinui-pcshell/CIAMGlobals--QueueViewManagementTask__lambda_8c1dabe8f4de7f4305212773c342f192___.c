/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_8c1dabe8f4de7f4305212773c342f192___ @ 0x18005F1D4
 * Callers:
 *     _lambda_3299b7567c8e16a49084b1350d61b7f6_::operator() @ 0x180026D3C (_lambda_3299b7567c8e16a49084b1350d61b7f6_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a38938e95eaf2a759c4a7408ff269f28___ @ 0x18005F240 (Windows--Internal--ComTaskPool--QueueTask__lambda_a38938e95eaf2a759c4a7408ff269f28___.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_8c1dabe8f4de7f4305212773c342f192___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  __int64 Ptr_low; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  v9[0] = (__int64)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  Ptr_low = LODWORD(v2[15].Ptr);
  v9[1] = *a2;
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_a38938e95eaf2a759c4a7408ff269f28___(v6, v5, Ptr_low, v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
  return v7;
}
