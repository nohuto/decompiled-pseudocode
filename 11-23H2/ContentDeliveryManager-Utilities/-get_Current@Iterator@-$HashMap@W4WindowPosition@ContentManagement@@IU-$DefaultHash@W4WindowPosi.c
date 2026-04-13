/*
 * XREFs of ?get_Current@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@@Z @ 0x1800B5740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18003B0B0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?EnsureVersionMatches@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x1800B23CC (-EnsureVersionMatches@Iterator@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4W.c)
 *     ?InternalRelease@?$ComPtr@V?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3B1C (-InternalRelease@-$ComPtr@V-$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU-$DefaultL.c)
 *     ?Make@?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBW4WindowPosition@ContentManagement@@AEBIPEAPEAV12345@@Z @ 0x1800B42E0 (-Make@-$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU-$DefaultLifetimeTraits@W4Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Iterator::get_Current(
        __int64 a1,
        __int64 *a2)
{
  int v4; // edi
  _DWORD *v5; // rbx
  __int64 v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  LODWORD(v9) = 0;
  XWinRT::SerializingLockPolicy::Read(&v11, (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 64) + 160LL), &v9);
  v4 = v9;
  if ( (int)v9 >= 0 )
  {
    LODWORD(v9) = Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Iterator::EnsureVersionMatches(a1);
    v5 = *(_DWORD **)(a1 + 72);
    v4 = v9;
    if ( (int)v9 >= 0 )
    {
      if ( !v5 )
      {
        v4 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v4 >= 0 )
      {
        v9 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>>::InternalRelease(&v9);
        v4 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::Make(
               v5,
               v5 + 1,
               &v9);
        if ( v4 >= 0 )
        {
          v6 = v9;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          v10 = 0LL;
          *a2 = v6;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>>::InternalRelease(&v9);
      }
    }
  }
  if ( v11 )
  {
    v7 = v11 + 1;
    if ( LODWORD(v11->Ptr) == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  return (unsigned int)v4;
}
