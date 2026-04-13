/*
 * XREFs of ?Initialize@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@345@@Z @ 0x1800C5824
 * Callers:
 *     ?Split@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@345@PEAPEAU6345@1@Z @ 0x1800C7DA4 (-Split@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Windo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  int v17; // [rsp+48h] [rbp+28h] BYREF
  __int64 v18; // [rsp+50h] [rbp+30h] BYREF
  __int64 v19; // [rsp+58h] [rbp+38h] BYREF

  v18 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v17);
  if ( v4 < 0 )
    goto LABEL_17;
  v19 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
         a2,
         &GUID_1454d187_b3b9_5845_b51e_2e1140cc31b1,
         &v19);
  v4 = v5;
  if ( v5 == -2147467262 )
  {
    v4 = -2147418113;
    RoOriginateError(2147549183LL, 0LL, v6, v7);
    RoTransformError(2147500034LL, 2147549183LL, 0LL);
  }
  else if ( v5 >= 0 )
  {
    v8 = v19;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 48LL);
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v4 = v9(v8, &v18);
  }
  v11 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v4 < 0 )
  {
LABEL_17:
    v13 = v18;
  }
  else
  {
    v12 = v17;
    v13 = v18;
    v14 = v18;
    v15 = *(_QWORD *)(a1 + 96);
    if ( v15 != v18 )
    {
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        v15 = *(_QWORD *)(a1 + 96);
        v13 = v18;
      }
      *(_QWORD *)(a1 + 96) = v14;
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v13 = v18;
      }
    }
    *(_DWORD *)(a1 + 104) = v12;
    *(_BYTE *)(a1 + 109) = 1;
    v4 = 0;
  }
  if ( v13 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v4;
}
