/*
 * XREFs of ?BindDCompVirtualSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAUIDCompositionVirtualSurface@@@Z @ 0x18003B064
 * Callers:
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?GetResourceProxyNoRef@CVirtualSurface@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z @ 0x18003B110 (-GetResourceProxyNoRef@CVirtualSurface@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::BindDCompVirtualSurface(
        Windows::UI::Composition::CompositionSurfaceBrush *this,
        struct IDCompositionVirtualSurface *a2)
{
  int ResourceProxyNoRef; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // edx
  DirectComposition::CDevice *v9; // rcx
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v13; // [rsp+58h] [rbp+10h] BYREF

  ResourceProxyNoRef = DirectComposition::CVirtualSurface::GetResourceProxyNoRef(a2, &v13);
  v5 = ResourceProxyNoRef;
  if ( ResourceProxyNoRef < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DF,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
      (const char *)(unsigned int)ResourceProxyNoRef);
    return v5;
  }
  else
  {
    v6 = *((_DWORD *)a2 + 28);
    v7 = *((_QWORD *)this + 3);
    v8 = *((_DWORD *)this + 32);
    v11[0] = 0;
    v11[1] = 0;
    v9 = *(DirectComposition::CDevice **)(v7 + 456);
    v11[2] = v6;
    v11[3] = *((_DWORD *)a2 + 29);
    DirectComposition::CDevice::ResourceSetReferenceProperty(v9, v8, 0, HIDWORD(v13[1].lpVtbl));
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      1u,
      v11,
      0x10uLL);
    return 0LL;
  }
}
