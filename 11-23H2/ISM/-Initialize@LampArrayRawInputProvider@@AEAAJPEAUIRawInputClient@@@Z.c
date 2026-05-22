/*
 * XREFs of ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x18004AF84
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18004A570 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ?OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z @ 0x18005A2D0 (-OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIMessageSession@@XZ @ 0x180058280 (--B-$ComPtrRef@V-$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIM.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x18005A044 (-EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800EA274 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Initialize(LampArrayRawInputProvider *this, struct IRawInputClient *a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char IsEnabled; // al
  struct ConsumerControlManager **v10; // r8
  int v11; // eax
  int v12; // eax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v18; // [rsp+30h] [rbp+8h] BYREF

  v18 = (char *)this + 56;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IMessageSession>>::operator IMessageSession * *(&v18);
  v5 = CoreUICreate(v4);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v5,
      v16);
  if ( IsEdition(6176LL) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(
                  &`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl,
                  v6,
                  v7,
                  v8);
    v10 = (struct ConsumerControlManager **)((char *)this + 336);
    if ( IsEnabled )
    {
      v11 = ConsumerControlManager::CreateAndInitialize(a2, this, v10);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3D,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
          (const char *)(unsigned int)v11,
          v16);
    }
    else
    {
      v14 = ConsumerControlManager::CreateAndInitialize(a2, this, v10);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x41,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
          (const char *)(unsigned int)v14);
        return v15;
      }
    }
  }
  v12 = LampArrayRawInputProvider::EnsureLampArrayThreadState(this);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x45,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v12,
      v16);
  return 0LL;
}
