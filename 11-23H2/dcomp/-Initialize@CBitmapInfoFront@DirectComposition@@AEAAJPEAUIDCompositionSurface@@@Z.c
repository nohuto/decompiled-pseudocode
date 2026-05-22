/*
 * XREFs of ?Initialize@CBitmapInfoFront@DirectComposition@@AEAAJPEAUIDCompositionSurface@@@Z @ 0x180037B0C
 * Callers:
 *     ?Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_NPEAPEAV12@@Z @ 0x18003745C (-Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALP.c)
 * Callees:
 *     ?RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z @ 0x180020070 (-RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z.c)
 *     McTemplateU0xxqdd_EventWriteTransfer @ 0x1800EA928 (McTemplateU0xxqdd_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoFront::Initialize(
        DirectComposition::CBitmapInfoFront *this,
        struct IDCompositionSurface *a2)
{
  int v2; // ebp
  int v3; // edi
  int v4; // edx
  char *v6; // rsi
  int v7; // edx
  __int64 v8; // rcx

  v2 = (int)a2;
  v3 = 0;
  v4 = *((_DWORD *)this + 11);
  if ( v4 )
  {
    v6 = (char *)this + 16;
    v3 = DirectComposition::CBitmapInfoFront::RequestSurface(
           this,
           v4,
           *((_DWORD *)this + 12),
           (DirectComposition::CAtlasSurfacePool ***)this + 2);
    if ( v3 >= 0 )
    {
      v8 = *(_QWORD *)v6;
      *(_QWORD *)(*(_QWORD *)v6 + 96LL) = this;
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
        McTemplateU0xxqdd_EventWriteTransfer(v8, v7, *(_QWORD *)v6, v2, 3);
    }
  }
  return (unsigned int)v3;
}
