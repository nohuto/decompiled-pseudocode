/*
 * XREFs of ?get_Size@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x18001B3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rbx
  RTL_SRWLOCK *v3; // rdi

  *a2 = 0;
  v2 = (_DWORD *)(a1 + 72);
  v3 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v3->Ptr) >= 0 )
      ++LODWORD(v3->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v3);
  }
  *a2 = *(_DWORD *)(a1 + 40);
  if ( v2 )
  {
    if ( *v2 == 1 )
      --LODWORD(v3->Ptr);
    else
      ReleaseSRWLockShared(v3);
  }
  return 0LL;
}
