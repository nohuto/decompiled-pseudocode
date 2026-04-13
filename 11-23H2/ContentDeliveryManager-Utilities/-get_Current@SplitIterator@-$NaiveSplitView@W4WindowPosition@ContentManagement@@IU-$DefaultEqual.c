/*
 * XREFs of ?get_Current@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@@Z @ 0x1800B5860
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@ComLock@XWinRT@@QEAA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@XZ @ 0x180042434 (-Write@ComLock@XWinRT@@QEAA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@XZ.c)
 *     ?EnsureForced@SplitIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x1800B2278 (-EnsureForced@SplitIterator@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqua.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::SplitIterator::get_Current(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx
  RTL_SRWLOCK *v5; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  XWinRT::ComLock::Write((_DWORD *)(a1 + 64), &v7);
  v4 = Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::SplitIterator::EnsureForced(a1);
  if ( v4 >= 0 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 48LL))(*(_QWORD *)(a1 + 88), a2);
    }
    else
    {
      v4 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  if ( v7 )
  {
    v5 = v7 + 1;
    if ( LODWORD(v7->Ptr) == 1 )
      LODWORD(v5->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v5);
  }
  return (unsigned int)v4;
}
