/*
 * XREFs of ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180040394
 * Callers:
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x180035D28 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x180040464 (--1CEffectBrush@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CEffectBrush::ReleaseResources(CEffectBrush *this)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbx

  v1 = *((_QWORD *)this + 9);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 24LL);
    *(_BYTE *)(v1 + 200) = 1;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 72);
  }
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 80) = 0LL;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 104);
  }
  v4 = *((_DWORD *)this + 36);
  if ( v4 )
  {
    v5 = 0LL;
    v6 = v4;
    do
    {
      v7 = *((_QWORD *)this + 15);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v5 + v7));
      *(_QWORD *)(v5 + v7) = 0LL;
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  *((_DWORD *)this + 36) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 120, 8LL);
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((char *)this + 112);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  *((_QWORD *)this + 12) = 0LL;
}
