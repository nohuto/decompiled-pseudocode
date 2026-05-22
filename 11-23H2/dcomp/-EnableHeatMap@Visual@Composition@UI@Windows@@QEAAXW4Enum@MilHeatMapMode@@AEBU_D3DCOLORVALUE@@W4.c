/*
 * XREFs of ?EnableHeatMap@Visual@Composition@UI@Windows@@QEAAXW4Enum@MilHeatMapMode@@AEBU_D3DCOLORVALUE@@W4CompositionDebugOverdrawContentKinds@Diagnostics@234@@Z @ 0x18010B248
 * Callers:
 *     ?ShowMemoryUsage@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z @ 0x18018AF00 (-ShowMemoryUsage@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisu.c)
 *     ?ShowOverdraw@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@W4CompositionDebugOverdrawContentKinds@3456@@Z @ 0x18018AFD0 (-ShowOverdraw@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

void __fastcall Windows::UI::Composition::Visual::EnableHeatMap(
        __int64 a1,
        int a2,
        const void *a3,
        unsigned __int16 a4)
{
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    15,
    a2);
  DirectComposition::CDevice::ResourceSetBufferProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    14,
    a3,
    0x10uLL);
  if ( a2 == 1 )
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      16,
      a4);
}
