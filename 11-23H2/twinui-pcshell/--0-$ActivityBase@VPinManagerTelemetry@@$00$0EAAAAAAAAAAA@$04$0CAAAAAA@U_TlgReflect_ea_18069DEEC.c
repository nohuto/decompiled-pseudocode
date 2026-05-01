/*
 * XREFs of ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18069DEEC
 * Callers:
 *     ??0_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_@@QEAA@AEBV?$shared_ptr@VPinRequestContext@@@std@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@AEBVPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@@Z @ 0x18069DA7C (--0_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_@@QEAA@AEBV-$shared_ptr@VPinRequestContext@@@std@@$$.c)
 *     ??0_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@AEBV?$shared_ptr@VPinRequestContext@@@std@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@AEBVPinManagerRequestPinItem@PinManagerTelemetry@@@Z @ 0x18069DAE0 (--0_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@AEBV-$shared_ptr@VPinRequestContext@@@std@@$$.c)
 *     ??0PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@AEBV01@@Z @ 0x18069E134 (--0PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@AEBV01@@Z.c)
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A4550 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x1806A502C (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??4?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18069EE4C (--4-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect_ea_18069EE4C.c)
 */

__int64 __fastcall wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rcx

  *(_QWORD *)a1 = &wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = a1 + 56;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 1LL;
  v5 = (_QWORD *)(a1 + 136);
  v5[19] = 0LL;
  v5[20] = 0LL;
  memset_0(v5, 0, 0x98uLL);
  *(_QWORD *)(v4 + 248) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  return a1;
}
