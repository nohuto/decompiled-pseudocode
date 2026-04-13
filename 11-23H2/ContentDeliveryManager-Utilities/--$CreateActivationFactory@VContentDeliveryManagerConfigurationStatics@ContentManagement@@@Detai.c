/*
 * XREFs of ??$CreateActivationFactory@VContentDeliveryManagerConfigurationStatics@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180046CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003FA24 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$MakeAndInitialize@VContentDeliveryManagerConfigurationStatics@ContentManagement@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVContentDeliveryManagerConfigurationStatics@ContentManagement@@@Z @ 0x180047644 (--$MakeAndInitialize@VContentDeliveryManagerConfigurationStatics@ContentManagement@@V12@$$V@Deta.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180048F90 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<ContentManagement::ContentDeliveryManagerConfigurationStatics>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v8; // ebx
  __int64 v10; // rbx
  volatile int *v11; // rdx
  int CanCastTo; // esi
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::ContentDeliveryManagerConfigurationStatics,ContentManagement::ContentDeliveryManagerConfigurationStatics,>(v13);
  if ( v8 >= 0 )
  {
    v10 = v13[0];
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v13[0],
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
    {
      if ( (*a1 & 4) == 0 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v10 + 68), v11);
      *(_DWORD *)(v10 + 88) = *(_DWORD *)a1;
      *(_QWORD *)(v10 + 80) = a2;
      return 0LL;
    }
    else
    {
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      return (unsigned int)CanCastTo;
    }
  }
  else
  {
    if ( v13[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
    return (unsigned int)v8;
  }
}
