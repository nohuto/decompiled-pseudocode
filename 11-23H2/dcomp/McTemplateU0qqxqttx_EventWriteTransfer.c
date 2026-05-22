/*
 * XREFs of McTemplateU0qqxqttx_EventWriteTransfer @ 0x1800F7268
 * Callers:
 *     ?CreateMaskBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionMaskBrush@345@@Z @ 0x180047C70 (-CreateMaskBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionMaskBrush@.c)
 *     ??$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800484E0 (--$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@D.c)
 *     ?CreateSurfaceBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1800488A0 (-CreateSurfaceBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@.c)
 *     ?RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVKeyFrameAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180050BA0 (-RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMP.c)
 *     ?GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVExpressionAnimator@234@@Z @ 0x180054340 (-GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEA.c)
 *     ??$MakeAndInitialize2@VCompositionPropertySet@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPropertySet@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800550C0 (--$MakeAndInitialize2@VCompositionPropertySet@Composition@UI@Windows@@V1234@PEAVCompositor@234@@.c)
 *     ?CreateSpriteVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUISpriteVisual@345@@Z @ 0x180055CA0 (-CreateSpriteVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUISpriteVisual@345@@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?CreateContainerVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIContainerVisual@345@@Z @ 0x180059C30 (-CreateContainerVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIContainerVisual@345@@.c)
 *     ?EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ @ 0x18005A150 (-EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@ComponentTransform3D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z @ 0x18005A7E0 (-RuntimeClassInitialize@ComponentTransform3D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z @ 0x18005C110 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z.c)
 *     ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704 (-OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0qqxqttx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-61h] BYREF
  int *v11; // [rsp+40h] [rbp-51h]
  __int64 v12; // [rsp+48h] [rbp-49h]
  int *v13; // [rsp+50h] [rbp-41h]
  __int64 v14; // [rsp+58h] [rbp-39h]
  char *v15; // [rsp+60h] [rbp-31h]
  __int64 v16; // [rsp+68h] [rbp-29h]
  char *v17; // [rsp+70h] [rbp-21h]
  __int64 v18; // [rsp+78h] [rbp-19h]
  char *v19; // [rsp+80h] [rbp-11h]
  __int64 v20; // [rsp+88h] [rbp-9h]
  char *v21; // [rsp+90h] [rbp-1h]
  __int64 v22; // [rsp+98h] [rbp+7h]
  char *v23; // [rsp+A0h] [rbp+Fh]
  __int64 v24; // [rsp+A8h] [rbp+17h]
  int v25; // [rsp+E0h] [rbp+4Fh] BYREF
  int v26; // [rsp+E8h] [rbp+57h] BYREF

  v26 = a4;
  v25 = a3;
  v12 = 4LL;
  v14 = 4LL;
  v11 = &v25;
  v16 = 8LL;
  v13 = &v26;
  v15 = &a5;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  v23 = &a9;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 8LL;
  return McGenEventWrite_EventWriteTransfer(a1, &DCOMPEVENT_RESOURCE_CREATION, a3, 8u, &v10);
}
