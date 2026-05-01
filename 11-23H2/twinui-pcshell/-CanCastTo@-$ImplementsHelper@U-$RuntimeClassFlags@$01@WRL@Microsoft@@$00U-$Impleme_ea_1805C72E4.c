/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCAppLayoutOperation@@@Details@23@U?$ChainInterfaces@UIAppSwitchOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1805C72E4
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@VCAppLayoutOperation@@U?$ChainInterfaces@UIAppSwitchOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@VCAppLayoutOperation@@U?$ChainInterfaces@UIAppSwitchOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1805C6E54 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCW_ea_1805C6E54.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CAppLayoutOperation>,Microsoft::WRL::ChainInterfaces<IAppSwitchOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  __int64 result; // rax
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r11
  _QWORD *v10; // r8
  __int64 v11; // r11
  _DWORD *v12; // rcx

  if ( InlineIsEqualGUID(a2, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9) )
    goto LABEL_2;
  if ( InlineIsEqualGUID(v2, &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb) )
  {
    *v7 = v9;
LABEL_5:
    result = 0LL;
    goto LABEL_9;
  }
  if ( InlineIsEqualGUID(v6, &GUID_521214fe_07d7_470b_b6f3_b9d2354cae32) )
  {
    *v10 = v11 + 8;
    goto LABEL_5;
  }
  result = 2147500034LL;
LABEL_9:
  if ( (_DWORD)result == -2147467262 )
  {
    if ( InlineIsEqualGUID(v8, &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3)
      || InlineIsEqualGUID(v12, &GUID_521214fe_07d7_470b_b6f3_b9d2354cae32) )
    {
LABEL_2:
      *v3 = v4;
      return 0LL;
    }
    return 2147500034LL;
  }
  return result;
}
