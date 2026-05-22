/*
 * XREFs of ?OnVisualRemoved@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@@Z @ 0x18010153C
 * Callers:
 *     ?RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ @ 0x18000F4C8 (-RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Remove@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180062DD0 (-Remove@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 *     ?RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18006A86C (-RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?RemoveAll@Api@VisualCollection@Composition@UI@Windows@@UEAAJXZ @ 0x18006A980 (-RemoveAll@Api@VisualCollection@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ??$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001C0BC (--$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V-$ComPtrR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDiagnosticsInterop::OnVisualRemoved(
        struct Windows::UI::Composition::Visual *a1)
{
  int v1; // ebx
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(a1, &v4);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_180220D10 + 32LL))(qword_180220D10, v4);
  if ( v1 >= 0 )
  {
    v3 = v4;
    if ( v4 )
    {
      v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    return 0LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v4);
    return (unsigned int)v1;
  }
}
