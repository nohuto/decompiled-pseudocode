/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ChainInterfaces@UITemporaryAppVisualArray@@UIObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1805F1C98
 * Callers:
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1805F1EAC (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UITemporaryAppVisualArray@@UIObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805F21D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1805F21D0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??$Verify@$01@?$ChainInterfaces@UITemporaryAppVisualArray@@UIObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@KAXXZ @ 0x1805F1888 (--$Verify@$01@-$ChainInterfaces@UITemporaryAppVisualArray@@UIObjectArray@@VNil@Details@WRL@Micro.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::ChainInterfaces<ITemporaryAppVisualArray,IObjectArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v7; // rcx
  unsigned int v8; // r9d

  Microsoft::WRL::ChainInterfaces<ITemporaryAppVisualArray,IObjectArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::Verify<2>(
    a1,
    a2,
    a3);
  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_c8b22b16_aa16_4dc8_8a95_5affc3bc78bd);
  v8 = 0;
  if ( IsEqualGUID || InlineIsEqualGUID(v7, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9) )
    a3->lpVtbl = (struct IProfferServiceVtbl *)a1;
  else
    return (unsigned int)-2147467262;
  return v8;
}
