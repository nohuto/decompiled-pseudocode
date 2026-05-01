/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_94391b322209b754f3b517464a133884___ @ 0x18002EAB8
 * Callers:
 *     _lambda_3299b7567c8e16a49084b1350d61b7f6_::operator() @ 0x1800773D4 (_lambda_3299b7567c8e16a49084b1350d61b7f6_--operator().c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d64e43660dad1d6d5e23fa56124f7c5e___ @ 0x18002EB24 (Windows--Internal--ComTaskPool--QueueTask__lambda_d64e43660dad1d6d5e23fa56124f7c5e___.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_94391b322209b754f3b517464a133884___(
        __int64 a1,
        _QWORD *a2)
{
  PSRWLOCK v2; // rbx
  __int64 Ptr_low; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  v9[0] = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  Ptr_low = LODWORD(v2[15].Ptr);
  v9[1] = *a2;
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_d64e43660dad1d6d5e23fa56124f7c5e___(v6, v5, Ptr_low, v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
  return v7;
}
