/*
 * XREFs of ??$InitApiData@AEAY0CI@$$CBGAEAY0P@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CI@$$CBGAEAY0P@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x1800A31D8
 * Callers:
 *     ?get_Components@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x180144A30 (-get_Components@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAU-$IVector@PEAVSceneComp.c)
 * Callees:
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z @ 0x180065BA0 (-Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z.c)
 */

void __fastcall wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[40],unsigned short const (&)[15],std::nullptr_t,long volatile *>(
        __int64 a1,
        __int64 a2,
        const char **a3,
        volatile int **a4)
{
  __int64 v6; // rcx
  __int64 *v7; // rax

  if ( wil::details::ApiTelemetryLogger::IsEnabled(a1) )
  {
    v7 = wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
           v6,
           (void (__cdecl *)())_lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    wil::details::ApiTelemetryLogger::ApiDataList::Insert(
      (RTL_SRWLOCK *)v7 + 4,
      L"Windows.UI.Composition.Scenes.SceneNode",
      L"get_Components",
      *a3,
      *a4);
  }
}
