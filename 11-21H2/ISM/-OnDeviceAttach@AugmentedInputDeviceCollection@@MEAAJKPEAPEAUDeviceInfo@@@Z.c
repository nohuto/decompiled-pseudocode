/*
 * XREFs of ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800BB180
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@@1@AEBK@Z @ 0x1800BAC68 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$all.c)
 *     ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x1800BAE00 (-AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z.c)
 *     ?AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z @ 0x1800BAEE4 (-AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z.c)
 *     ?GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z @ 0x1800BB064 (-GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800BB148 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800BB8B4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800CBCE0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceAttach(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  struct DeviceInfo *v8; // rbx
  int DeviceProductInfo; // edi
  __int64 v10; // rdx
  unsigned __int16 v12; // r12
  unsigned __int16 v13; // r13
  __int16 v14; // r15
  __int64 v15; // rcx
  _QWORD *v16; // r10
  __int16 v17; // r11
  int v18; // edi
  __int64 v19; // rcx
  RawInputProvidersTracing *v20; // rcx
  unsigned __int16 v21[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v22; // [rsp+34h] [rbp-1Ch] BYREF
  _BYTE v23[16]; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v26; // [rsp+98h] [rbp+48h] BYREF

  v22 = 0;
  v21[0] = 0;
  LOWORD(v26) = 0;
  v6 = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( v6 < 0 )
  {
    v7 = 103LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v8 = *a3;
  DeviceProductInfo = AugmentedInputDeviceCollection::GetDeviceProductInfo(
                        this,
                        a2,
                        &v22,
                        v21,
                        (unsigned __int16 *)&v26);
  if ( DeviceProductInfo < 0 )
  {
    v10 = 107LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)DeviceProductInfo);
    return (unsigned int)DeviceProductInfo;
  }
  v12 = v21[0];
  v13 = v22;
  v14 = v26;
  DeviceProductInfo = AugmentedInputDeviceCollection::AddDeviceToCache(this, a2, v22, v21[0], v26);
  if ( DeviceProductInfo < 0 )
  {
    v10 = 108LL;
    goto LABEL_5;
  }
  v26 = a2;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)this + 345,
    (__int64)v23,
    &v26);
  if ( *(_BYTE *)(v24 + 25) != (_BYTE)v17 || a2 < *(_DWORD *)(v24 + 28) || v24 == *v16 )
  {
    v6 = -2147467259;
    v7 = 109LL;
    goto LABEL_15;
  }
  v18 = *(_DWORD *)(v24 + 32);
  *((_DWORD *)v8 + 149) = v18;
  *((_WORD *)v8 + 300) = v13;
  *((_WORD *)v8 + 301) = v12;
  *((_WORD *)v8 + 302) = v14;
  *((_WORD *)v8 + 303) = v17;
  if ( RawInputProvidersTracing::IsEnabled(v15) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v19,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::AugmentedInputDevice_DeviceAttached_(v20, v18, *((_BYTE *)this + 2776));
  }
  return 0LL;
}
