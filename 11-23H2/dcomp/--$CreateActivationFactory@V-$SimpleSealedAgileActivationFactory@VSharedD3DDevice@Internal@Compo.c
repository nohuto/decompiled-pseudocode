/*
 * XREFs of ??$CreateActivationFactory@V?$SimpleSealedAgileActivationFactory@VSharedD3DDevice@Internal@Composition@UI@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800A0F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0?$SimpleSealedAgileActivationFactory@VSharedD3DDevice@Internal@Composition@UI@Windows@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1800A10DC (--0-$SimpleSealedAgileActivationFactory@VSharedD3DDevice@Internal@Composition@UI@Windows@@$0A@@W.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800A13A0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@VNil@Details@23@@WRL@Microsoft.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@VNil@Details@23@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800A14C4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_1800A14C4.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800A18A0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@VNil@Details@23@@WRL@Microsof.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Microsoft::WRL::SimpleSealedAgileActivationFactory<Windows::UI::Composition::Internal::SharedD3DDevice,0>>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  LPVOID v9; // rax
  int CanCastTo; // edi
  __int64 v11; // rax
  __int64 result; // rax
  volatile int *v13; // rdx
  LPVOID v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  v9 = DefaultHeap::Alloc(0x58uLL);
  v14[0] = v9;
  if ( v9 )
  {
    v11 = Microsoft::WRL::SimpleSealedAgileActivationFactory<Windows::UI::Composition::Internal::SharedD3DDevice,0>::SimpleSealedAgileActivationFactory<Windows::UI::Composition::Internal::SharedD3DDevice,0>(v9);
    v14[0] = 0LL;
    v5 = v11;
    if ( v11 )
    {
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(v11);
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v5);
    }
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(v14);
  if ( CanCastTo < 0
    || (CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                      v5,
                      a3,
                      a4),
        CanCastTo < 0) )
  {
    if ( v5 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v5);
    return (unsigned int)CanCastTo;
  }
  else
  {
    if ( (*a1 & 4) == 0 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 60), v13);
    *(_DWORD *)(v5 + 80) = *(_DWORD *)a1;
    result = 0LL;
    *(_QWORD *)(v5 + 72) = a2;
  }
  return result;
}
