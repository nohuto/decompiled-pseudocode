/*
 * XREFs of CComposition::ForEachCursorVisualReference__lambda_c2c4320ca1e41092fdbc0b7f07aa0d93___ @ 0x180103A80
 * Callers:
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801C5564 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z @ 0x18010386C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z.c)
 *     _lambda_c2c4320ca1e41092fdbc0b7f07aa0d93_::operator() @ 0x180103B2C (_lambda_c2c4320ca1e41092fdbc0b7f07aa0d93_--operator().c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1801A9220 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CComposition::ForEachCursorVisualReference__lambda_c2c4320ca1e41092fdbc0b7f07aa0d93___(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 992) )
  {
    v6 = (_QWORD *)(a1 + 968);
    do
    {
      if ( CExcludeVisualReference::GetVisual(*(CExcludeVisualReference **)(*v6 + 8 * v3)) )
      {
        v8 = lambda_c2c4320ca1e41092fdbc0b7f07aa0d93_::operator()(a2, v7);
        v2 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x2EAu);
          return v2;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      else
      {
        DynArray<InteractionLatencyTelemetry::TouchUpdateInfo *,0>::RemoveAt((__int64)v6, v3);
      }
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 992) );
  }
  return v2;
}
