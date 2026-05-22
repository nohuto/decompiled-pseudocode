/*
 * XREFs of ?WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA?AU_D3DCOLORVALUE@@UColor@34@@Z @ 0x18004B7DC
 * Callers:
 *     ?CreateColorBrushWithColor@CompositorCommon@Composition@UI@Windows@@QEAAJUColor@34@PEAPEAVCompositionColorBrush@234@@Z @ 0x18004173C (-CreateColorBrushWithColor@CompositorCommon@Composition@UI@Windows@@QEAAJUColor@34@PEAPEAVCompos.c)
 *     ?CreateColorGradientStopWithOffsetAndColor@Api@CompositorCommon@Composition@UI@Windows@@UEAAJMUColor@45@PEAPEAUICompositionColorGradientStop@345@@Z @ 0x180044F10 (-CreateColorGradientStopWithOffsetAndColor@Api@CompositorCommon@Composition@UI@Windows@@UEAAJMUC.c)
 *     ?InsertKeyFrame@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUColor@45@@Z @ 0x18007C4B0 (-InsertKeyFrame@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUColor@45@@Z.c)
 *     ?InsertColor@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UColor@45@@Z @ 0x1800843A0 (-InsertColor@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UColor@45@@Z.c)
 *     ?put_Color@Api@DropShadow@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x18008BD20 (-put_Color@Api@DropShadow@Composition@UI@Windows@@UEAAJUColor@45@@Z.c)
 *     ?put_Color@Api@AmbientLight@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x18008CAA0 (-put_Color@Api@AmbientLight@Composition@UI@Windows@@UEAAJUColor@45@@Z.c)
 *     ?put_OuterConeColor@Api@SpotLight@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x1800938A0 (-put_OuterConeColor@Api@SpotLight@Composition@UI@Windows@@UEAAJUColor@45@@Z.c)
 *     ?put_InnerConeColor@Api@SpotLight@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x180093970 (-put_InnerConeColor@Api@SpotLight@Composition@UI@Windows@@UEAAJUColor@45@@Z.c)
 *     ?StartNewTrail@Api@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x18011B870 (-StartNewTrail@Api@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJUColor@45@@Z.c)
 *     ?SetColorParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UColor@45@@Z @ 0x18014F5A0 (-SetColorParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UColor@4.c)
 *     ?put_Color@Api@CompositionColorGradientStop@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x180174AE0 (-put_Color@Api@CompositionColorGradientStop@Composition@UI@Windows@@UEAAJUColor@45@@Z.c)
 *     ?put_Color@Api@DistantLight@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x1801767E0 (-put_Color@Api@DistantLight@Composition@UI@Windows@@UEAAJUColor@45@@Z.c)
 *     ?put_Color@Api@PointLight@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x18017ACF0 (-put_Color@Api@PointLight@Composition@UI@Windows@@UEAAJUColor@45@@Z.c)
 *     ?put_ClearColor@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJUColor@56@@Z @ 0x1801809C0 (-put_ClearColor@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJUColor@56@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall Windows::UI::Composition::AnimationHelper::WUColorToD2DColor(float *a1, unsigned int a2)
{
  float *result; // rax

  *a1 = (float)BYTE1(a2) / 255.0;
  a1[1] = (float)BYTE2(a2) / 255.0;
  result = a1;
  a1[2] = (float)HIBYTE(a2) / 255.0;
  a1[3] = (float)(unsigned __int8)a2 / 255.0;
  return result;
}
