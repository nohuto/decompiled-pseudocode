/*
 * XREFs of ?Close@?$produce@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x1806C4F60
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1806C5034 (-CloseNoLock@WindowRegistration@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<WindowRegistration,winrt::Windows::Foundation::IClosable>::Close(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // si
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  AcquireSRWLockShared((PSRWLOCK)(v1 + 40));
  v2 = *(_BYTE *)(v1 + 48);
  if ( v1 != -40 )
    ReleaseSRWLockShared((PSRWLOCK)(v1 + 40));
  if ( v2 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v1 + 40));
    try
    {
      v4 = v1 + 40;
      WindowRegistration::CloseNoLock((WindowRegistration *)v1);
      if ( v1 != -40 )
        ReleaseSRWLockExclusive((PSRWLOCK)(v1 + 40));
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v4);
    }
  }
  return 0LL;
}
