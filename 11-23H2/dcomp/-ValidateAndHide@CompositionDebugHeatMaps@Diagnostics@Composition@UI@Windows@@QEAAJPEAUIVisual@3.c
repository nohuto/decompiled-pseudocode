/*
 * XREFs of ?ValidateAndHide@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@QEAAJPEAUIVisual@345@AEAV?$ComPtr@VVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Z @ 0x18018B168
 * Callers:
 *     ?Hide@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z @ 0x18018AE00 (-Hide@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z.c)
 *     ?ShowMemoryUsage@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z @ 0x18018AF00 (-ShowMemoryUsage@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisu.c)
 *     ?ShowOverdraw@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@W4CompositionDebugOverdrawContentKinds@3456@@Z @ 0x18018AFD0 (-ShowOverdraw@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@.c)
 *     ?ShowRedraw@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z @ 0x18018B0B0 (-ShowRedraw@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@45.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::ValidateAndHide(
        __int64 a1,
        struct IUnknown *a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  Microsoft::WRL2::NestableRuntimeClass *v6; // rcx
  int v7; // edi
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
    }
    v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           *(struct Microsoft::WRL2::ContextSession **)(a1 + 24),
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
           &v11);
    v8 = v11;
    *a3 = v11;
    if ( v7 >= 0 )
    {
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)v8 + 3) + 456LL),
        *((_DWORD *)v8 + 32),
        15,
        0LL);
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)*a3 + 3) + 456LL),
        *((_DWORD *)*a3 + 32),
        17,
        0LL);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondebugheatmaps.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
  }
  else
  {
    Windows::UI::Composition::OriginateInvalidArgument(18, (__int64)L"subtreeVisual");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondebugheatmaps.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
