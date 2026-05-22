/*
 * XREFs of ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D4270
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@@1@AEBK@Z @ 0x1800D3DAC (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$all.c)
 *     ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x1800D3F00 (-AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z.c)
 *     ?AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z @ 0x1800D3FDC (-AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z.c)
 *     ?GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z @ 0x1800D415C (-GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D4240 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D4994 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E52F0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceAttach(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int DeviceProductInfo; // ebx
  __int64 v7; // rdx
  struct DeviceInfo *v8; // r14
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // r13
  __int16 v11; // r15
  __int64 v12; // rcx
  _QWORD *v13; // r10
  __int16 v14; // r11
  int v15; // ebx
  __int64 v16; // rcx
  RawInputProvidersTracing *v17; // rcx
  unsigned __int16 v19[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v20; // [rsp+34h] [rbp-1Ch] BYREF
  _BYTE v21[16]; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v24; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0;
  v19[0] = 0;
  LOWORD(v24) = 0;
  DeviceProductInfo = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( DeviceProductInfo < 0 )
  {
    v7 = 103LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)DeviceProductInfo);
    return (unsigned int)DeviceProductInfo;
  }
  v8 = *a3;
  DeviceProductInfo = AugmentedInputDeviceCollection::GetDeviceProductInfo(
                        this,
                        a2,
                        &v20,
                        v19,
                        (unsigned __int16 *)&v24);
  if ( DeviceProductInfo < 0 )
  {
    v7 = 107LL;
    goto LABEL_14;
  }
  v9 = v19[0];
  v10 = v20;
  v11 = v24;
  DeviceProductInfo = AugmentedInputDeviceCollection::AddDeviceToCache(this, a2, v20, v19[0], v24);
  if ( DeviceProductInfo < 0 )
  {
    v7 = 108LL;
    goto LABEL_14;
  }
  v24 = a2;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)this + 345,
    (__int64)v21,
    &v24);
  if ( *(_BYTE *)(v22 + 25) != (_BYTE)v14 || a2 < *(_DWORD *)(v22 + 28) || v22 == *v13 )
  {
    DeviceProductInfo = -2147467259;
    v7 = 109LL;
    goto LABEL_14;
  }
  v15 = *(_DWORD *)(v22 + 32);
  *((_DWORD *)v8 + 149) = v15;
  *((_WORD *)v8 + 300) = v10;
  *((_WORD *)v8 + 301) = v9;
  *((_WORD *)v8 + 302) = v11;
  *((_WORD *)v8 + 303) = v14;
  if ( RawInputProvidersTracing::IsEnabled(v12) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v16,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::AugmentedInputDevice_DeviceAttached_(v17, v15, *((_BYTE *)this + 2776));
  }
  return 0LL;
}
