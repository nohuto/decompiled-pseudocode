/*
 * XREFs of ??$InitApiData@AEAY0CI@$$CBGAEAY0L@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0L@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A2DAC
 * Callers:
 *     ?get_Bounds@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneBoundingBox@3456@@Z @ 0x180132DC0 (-get_Bounds@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneBoundingBox@3456@@Z.c)
 *     ?get_Parent@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneNode@3456@@Z @ 0x180144C20 (-get_Parent@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneNode@3456@@Z.c)
 * Callees:
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z @ 0x180065BA0 (-Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z.c)
 */

void __fastcall wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[11],std::nullptr_t,long volatile *>(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        const char **a3,
        volatile int **a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rax

  if ( wil::details::ApiTelemetryLogger::IsEnabled((__int64)a1) )
  {
    v9 = wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
           v8,
           (void (__cdecl *)())_lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    wil::details::ApiTelemetryLogger::ApiDataList::Insert((RTL_SRWLOCK *)v9 + 4, a1, a2, *a3, *a4);
  }
}
