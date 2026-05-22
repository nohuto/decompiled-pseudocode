/*
 * XREFs of ??$InitApiData@AEAY0CC@$$CBGAEAY0BC@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CC@$$CBGAEAY0BC@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x180065E64
 * Callers:
 *     ?CreateShapeVisual@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIShapeVisual@345@@Z @ 0x18005D750 (-CreateShapeVisual@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIShapeVisual@345@@Z.c)
 *     ?CreateSpriteShape@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSpriteShape@345@@Z @ 0x18008B9D0 (-CreateSpriteShape@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSpriteSh.c)
 * Callees:
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z @ 0x180065BA0 (-Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z.c)
 */

void __fastcall wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[34],unsigned short const (&)[18],std::nullptr_t,long volatile *>(
        __int64 a1,
        const unsigned __int16 *a2,
        const char **a3,
        volatile int **a4)
{
  __int64 v7; // rcx
  __int64 *v8; // rax

  if ( wil::details::ApiTelemetryLogger::IsEnabled(a1) )
  {
    v8 = wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
           v7,
           (void (__cdecl *)())_lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    wil::details::ApiTelemetryLogger::ApiDataList::Insert(
      (RTL_SRWLOCK *)v8 + 4,
      L"Windows.UI.Composition.Compositor",
      a2,
      *a3,
      *a4);
  }
}
