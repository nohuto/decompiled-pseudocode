/*
 * XREFs of ?get_Current@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@@Z @ 0x1800C8310
 * Callers:
 *     <none>
 * Callees:
 *     ?Make@?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBW4WindowPosition@ContentManagement@@AEBIPEAPEAV12345@@Z @ 0x1800C6528 (-Make@-$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU-$DefaultLifetimeTraits@W4Windo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C7580 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IKeyValuePair@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Iterator::get_Current(
        _QWORD *a1,
        volatile signed __int64 **a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v6; // rbx
  RTL_SRWLOCK *v7; // r14
  int v8; // esi
  _DWORD *v9; // rcx
  volatile signed __int64 *v10; // rdx
  volatile signed __int64 *v11; // rdi
  volatile signed __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v6 = (_DWORD *)(a1[8] + 160LL);
  v7 = (RTL_SRWLOCK *)(a1[8] + 168LL);
  if ( *v6 == 1 )
  {
    if ( SLODWORD(v7->Ptr) >= 0 )
      ++LODWORD(v7->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1[8] + 168LL));
  }
  if ( *(_QWORD *)(a1[8] + 176LL) == a1[10] )
  {
    v8 = 0;
  }
  else
  {
    v8 = -2147483636;
    RoOriginateError(2147483660LL, 0LL, a3, a4);
  }
  v9 = (_DWORD *)a1[9];
  if ( v8 >= 0 )
  {
    if ( v9 )
    {
      v13 = 0LL;
      v8 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::Make(
             v9,
             v9 + 1,
             &v13);
      v10 = v13;
      if ( v8 >= 0 )
      {
        v11 = v13;
        if ( v13 )
        {
          (*(void (__fastcall **)(volatile signed __int64 *))(*v13 + 8))(v13);
          v10 = v13;
        }
        *a2 = v11;
      }
      if ( v10 )
      {
        v13 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::FtmBase>::Release(v10);
      }
    }
    else
    {
      v8 = -2147483637;
      RoOriginateError(2147483659LL, 0LL, a3, a4);
    }
  }
  if ( v6 )
  {
    if ( *v6 == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  return (unsigned int)v8;
}
