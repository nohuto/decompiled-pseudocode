/*
 * XREFs of ?MoveNext@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1800B4760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Write@ComLock@XWinRT@@QEAA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@XZ @ 0x180042434 (-Write@ComLock@XWinRT@@QEAA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@XZ.c)
 *     ?EnsureForced@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x1800B2278 (-EnsureForced@SplitIterator@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqua.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::SplitIterator::MoveNext(
        __int64 a1,
        bool *a2)
{
  int v4; // ebx
  _QWORD *v5; // rdi
  RTL_SRWLOCK *v6; // rcx
  char v8; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  XWinRT::ComLock::Write((_DWORD *)(a1 + 64), &v9);
  v4 = Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::SplitIterator::EnsureForced(a1);
  if ( v4 >= 0 )
  {
    v5 = (_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 88) )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v5 + 64LL))(*v5, &v8);
      if ( v4 >= 0 )
      {
        if ( v8
          || (Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 88)),
              v4 = Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::SplitIterator::EnsureForced(a1),
              v4 >= 0) )
        {
          *a2 = *v5 != 0LL;
        }
      }
    }
    else
    {
      v4 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  if ( v9 )
  {
    v6 = v9 + 1;
    if ( LODWORD(v9->Ptr) == 1 )
      LODWORD(v6->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v6);
  }
  return (unsigned int)v4;
}
