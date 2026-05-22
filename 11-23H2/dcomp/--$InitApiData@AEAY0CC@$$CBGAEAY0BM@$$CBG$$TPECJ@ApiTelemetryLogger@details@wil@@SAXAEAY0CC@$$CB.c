/*
 * XREFs of ??$InitApiData@AEAY0CC@$$CBGAEAY0BM@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CC@$$CBGAEAY0BM@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x18011F614
 * Callers:
 *     ?CreateBounceScalarAnimation@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIBounceScalarNaturalMotionAnimation@345@@Z @ 0x180125060 (-CreateBounceScalarAnimation@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIBounceSca.c)
 *     ?CreatePathKeyFrameAnimation@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIPathKeyFrameAnimation@345@@Z @ 0x1801262D0 (-CreatePathKeyFrameAnimation@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIPathKeyFr.c)
 *     ?CreateSpringScalarAnimation@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUISpringScalarNaturalMotionAnimation@345@@Z @ 0x180127500 (-CreateSpringScalarAnimation@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUISpringSca.c)
 * Callees:
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z @ 0x180065BA0 (-Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z.c)
 */

void __fastcall wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[34],unsigned short const (&)[28],std::nullptr_t,long volatile *>(
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
