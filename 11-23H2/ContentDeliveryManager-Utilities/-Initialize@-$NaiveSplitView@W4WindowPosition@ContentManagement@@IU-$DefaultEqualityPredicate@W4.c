/*
 * XREFs of ?Initialize@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@345@@Z @ 0x1800B36E4
 * Callers:
 *     ?Split@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@345@PEAPEAU6345@1AEBU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@2345@@Z @ 0x1800B5370 (-Split@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Windo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  int v8; // edi
  __int64 v9; // rbx
  int v11; // [rsp+48h] [rbp+28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF

  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v11);
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
           a2,
           &GUID_1454d187_b3b9_5845_b51e_2e1140cc31b1,
           &v12);
    v4 = v5;
    if ( v5 == -2147467262 )
    {
      v4 = -2147418113;
      RoOriginateError(2147549183LL, 0LL);
      RoTransformError(2147500034LL, 2147549183LL, 0LL);
    }
    else if ( v5 >= 0 )
    {
      v6 = v12;
      v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
      v4 = v7(v6, &v13);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    if ( v4 >= 0 )
    {
      v8 = v11;
      v9 = v13;
      if ( *(_QWORD *)(a1 + 96) != v13 )
      {
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        v12 = *(_QWORD *)(a1 + 96);
        *(_QWORD *)(a1 + 96) = v9;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      }
      *(_DWORD *)(a1 + 104) = v8;
      *(_BYTE *)(a1 + 109) = 1;
      v4 = 0;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return (unsigned int)v4;
}
