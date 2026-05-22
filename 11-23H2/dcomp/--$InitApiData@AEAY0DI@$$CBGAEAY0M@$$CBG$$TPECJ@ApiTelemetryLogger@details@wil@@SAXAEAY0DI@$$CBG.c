/*
 * XREFs of ??$InitApiData@AEAY0DI@$$CBGAEAY0M@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0DI@$$CBGAEAY0M@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A3358
 * Callers:
 *     ?get_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface@456@@Z @ 0x180145420 (-get_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUICompositi.c)
 *     ?put_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@456@@Z @ 0x180145750 (-put_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAUICompositionS.c)
 * Callees:
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z @ 0x180065BA0 (-Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z.c)
 */

void __fastcall wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[56],unsigned short const (&)[12],std::nullptr_t,long volatile *>(
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
      L"Windows.UI.Composition.Scenes.SceneSurfaceMaterialInput",
      a2,
      *a3,
      *a4);
  }
}
