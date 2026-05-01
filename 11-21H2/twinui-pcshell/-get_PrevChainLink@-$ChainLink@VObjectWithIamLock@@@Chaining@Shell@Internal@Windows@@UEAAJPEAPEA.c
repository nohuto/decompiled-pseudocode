/*
 * XREFs of ?get_PrevChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x180309780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::get_PrevChainLink(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = 0LL;
  AcquireSRWLockShared(v2);
  if ( *(_QWORD *)(a1 + 56) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 56));
    *a2 = *(_QWORD *)(a1 + 56);
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
