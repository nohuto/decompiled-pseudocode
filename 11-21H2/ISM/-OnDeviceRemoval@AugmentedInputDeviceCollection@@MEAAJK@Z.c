/*
 * XREFs of ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x1800BB310
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180092BB8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyInputInfo@@@Z @ 0x1800B4DE8 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyIn.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@@1@AEBK@Z @ 0x1800BAC68 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$all.c)
 *     ?AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z @ 0x1800BAF5C (-AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x1800BAFF4 (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800BB148 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800BB8B4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceRemoval(
        AugmentedInputDeviceCollection *this,
        unsigned int a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r10
  __int64 *v6; // rax
  __int64 v7; // rcx
  RawInputProvidersTracing *v8; // rcx
  unsigned int v10[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+48h] [rbp-B8h]
  unsigned int v12; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[16]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h]
  _BYTE v15[24]; // [rsp+70h] [rbp-90h] BYREF
  int v16; // [rsp+88h] [rbp-78h]

  memset_0(v15, 0, 0xBC0uLL);
  v16 = 3008;
  *(_QWORD *)v10 = 0LL;
  v11 = 0;
  if ( (int)AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
              this,
              a2,
              (struct AugmentedInputCacheState *)v10) >= 0
    && (int)MPCInputInfoHelper::PopulateAugmentedInput(
              5LL,
              a2,
              v10[0],
              SHIWORD(v10[1]),
              v11,
              SHIWORD(v11),
              (__int64)v15) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v15);
  }
  v12 = a2;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)this + 345,
    (__int64)v13,
    &v12);
  if ( !*(_BYTE *)(v14 + 25) && a2 >= *(_DWORD *)(v14 + 28) && v14 != *((_QWORD *)this + 345) )
  {
    v6 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
           v5,
           v14);
    std::_Deallocate<16,0>(v6, 0x30uLL);
  }
  if ( RawInputProvidersTracing::IsEnabled(v4) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v7,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::AugmentedInputDevice_DeviceRemoved_(v8, v10[0]);
  }
  return 0LL;
}
