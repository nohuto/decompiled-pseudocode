/*
 * XREFs of ??$CreateActivationFactory@VBrokeredViewTabConverterStatics@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1803DA3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$MakeAndInitialize@VBrokeredViewTabConverterStatics@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVBrokeredViewTabConverterStatics@@@Z @ 0x1803DA454 (--$MakeAndInitialize@VBrokeredViewTabConverterStatics@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVB.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIBrokeredViewTabConverterStatics@Tabs@ComposableShell@Internal@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803DA59C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_1803DA59C.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIBrokeredViewTabConverterStatics@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1803DA720 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIBrokeredViewTa_ea_1803DA720.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<BrokeredViewTabConverterStatics>(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rbx
  volatile int *v11; // rdx
  int CanCastTo; // edi
  int v13; // eax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v14[0] = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<BrokeredViewTabConverterStatics,BrokeredViewTabConverterStatics,>(v14);
  if ( v8 >= 0 )
  {
    v10 = v14[0];
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v14[0],
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
    {
      v13 = *a1;
      if ( (*a1 & 4) == 0 )
      {
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v10 + 68), v11);
        v13 = *a1;
      }
      *(_DWORD *)(v10 + 88) = v13;
      result = 0LL;
      *(_QWORD *)(v10 + 80) = a2;
    }
    else
    {
      if ( v10 )
        Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v10);
      return (unsigned int)CanCastTo;
    }
  }
  else
  {
    if ( v14[0] )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v14[0]);
    return (unsigned int)v8;
  }
  return result;
}
