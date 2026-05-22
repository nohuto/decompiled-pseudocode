/*
 * XREFs of ?SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z @ 0x18016F4C0
 * Callers:
 *     ?CreateSharedVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVVisualReferenceController@Private@234@@Z @ 0x18012702C (-CreateSharedVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@.c)
 *     ?CreateVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVVisualReferenceController@Private@234@@Z @ 0x180127AD8 (-CreateVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PE.c)
 *     ?CreateInteropVisualReferenceController@InteropCompositor@Composition@UI@Windows@@QEAAJPEAVInteropVisual@234@PEAPEAVInteropVisualReferenceController@234@@Z @ 0x18015D0F0 (-CreateInteropVisualReferenceController@InteropCompositor@Composition@UI@Windows@@QEAAJPEAVInter.c)
 *     ?put_Visual@Api@VisualReferenceController@Private@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z @ 0x18016F610 (-put_Visual@Api@VisualReferenceController@Private@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@.c)
 *     ?SetVisual@Api@InteropVisualReferenceController@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x18019A8C0 (-SetVisual@Api@InteropVisualReferenceController@Composition@UI@Windows@@UEAAJPEAUIDCompositionVi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?GetWeakReferenceBase@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEAPEAVCWeakReferenceBase@@@Z @ 0x18007E660 (-GetWeakReferenceBase@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PE.c)
 *     ?InternalRelease@?$ComPtr@V?$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C038 (-InternalRelease@-$ComPtr@V-$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IE.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::VisualReferenceController::SetVisual(
        Windows::UI::Composition::Private::VisualReferenceController *this,
        struct Windows::UI::Composition::Visual *a2)
{
  int v2; // ebx
  int WeakReferenceBase; // eax
  unsigned int v6; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  if ( a2 )
  {
    WeakReferenceBase = Windows::UI::Composition::CompositorCommon::GetWeakReferenceBase(
                          *((Windows::UI::Composition::CompositorCommon **)this + 3),
                          a2,
                          (struct CWeakReferenceBase **)this + 21);
    v6 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualreferencecontroller.cpp",
        (const char *)(unsigned int)WeakReferenceBase);
      return v6;
    }
    v2 = *((_DWORD *)a2 + 32);
  }
  else
  {
    Microsoft::WRL::ComPtr<CWeakReference<Windows::UI::Composition::Visual>>::InternalRelease((CWeakReferenceBase **)this + 21);
  }
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    0,
    v2);
  return 0LL;
}
