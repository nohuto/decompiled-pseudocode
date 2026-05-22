/*
 * XREFs of ?EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x18003B1D4
 * Callers:
 *     ?Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z @ 0x18003A220 (-Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z.c)
 *     ?EnsurePrimitiveGroup@CVirtualSurface@DirectComposition@@AEAAJXZ @ 0x18003B14C (-EnsurePrimitiveGroup@CVirtualSurface@DirectComposition@@AEAAJXZ.c)
 *     ?PixelsDiscarded@CVirtualSurface@DirectComposition@@UEAAXXZ @ 0x1800FDFC0 (-PixelsDiscarded@CVirtualSurface@DirectComposition@@UEAAXXZ.c)
 *     ?PixelsReclaimed@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x1800FDFF0 (-PixelsReclaimed@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@2@4_NPEAPEAV12@@Z @ 0x18003B304 (-Create@CVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     ?LinkPrimitive@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z @ 0x18003BAC0 (-LinkPrimitive@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z.c)
 *     ?RemoveAndReleasePrimitive@CVirtualSurface@DirectComposition@@AEAA_NXZ @ 0x18003C1F8 (-RemoveAndReleasePrimitive@CVirtualSurface@DirectComposition@@AEAA_NXZ.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::EnsurePrimitive(
        DirectComposition::CVirtualSurface *this,
        char a2)
{
  int v4; // esi
  int v6; // eax
  float v7; // xmm1_4
  __int64 v8; // rcx
  _DWORD v9[4]; // [rsp+68h] [rbp+27h] BYREF
  DirectComposition::CDeviceLock *v10; // [rsp+78h] [rbp+37h] BYREF
  __int128 v11; // [rsp+80h] [rbp+3Fh] BYREF
  int v12; // [rsp+90h] [rbp+4Fh]
  int v13; // [rsp+94h] [rbp+53h]

  v4 = 0;
  v10 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v10);
  if ( *((_QWORD *)this + 37) )
  {
    if ( a2 )
      DirectComposition::CVirtualSurface::RemoveAndReleasePrimitive(this);
    if ( !*((_QWORD *)this + 38) )
    {
      v6 = *((_DWORD *)this + 28);
      v12 = 0;
      v13 = 0;
      v9[0] = 0;
      v9[1] = 0;
      v11 = _xmm;
      v7 = (float)*((int *)this + 29);
      v8 = *(_QWORD *)(*((_QWORD *)this + 13) + 24LL);
      *(float *)&v9[2] = (float)v6;
      *(float *)&v9[3] = v7;
      v4 = DirectComposition::CVirtualSurfacePrimitive::Create(v8, v9, &v11);
      if ( v4 >= 0 )
        DirectComposition::CPrimitiveGroup::LinkPrimitive(
          *((DirectComposition::CPrimitiveGroup **)this + 37),
          *((struct IDCompositionPrimitivePartner **)this + 38),
          1);
    }
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v10);
  return (unsigned int)v4;
}
