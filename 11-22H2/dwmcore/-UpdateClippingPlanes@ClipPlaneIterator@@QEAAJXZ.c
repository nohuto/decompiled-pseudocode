/*
 * XREFs of ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x1801DA564
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180078E18 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180079010 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044D1C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z @ 0x1800F3150 (--4-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3C10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x1801D9CFC (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x1801D9DD0 (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x1801D9F28 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 */

__int64 __fastcall ClipPlaneIterator::UpdateClippingPlanes(ClipPlaneIterator *this)
{
  unsigned int v1; // esi
  char *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct D2D_VECTOR_4F *v8; // rax
  float *v9; // rcx
  float x; // xmm2_4
  bool v11; // cc
  float v12; // xmm0_4
  _OWORD *v13; // rcx
  _DWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v19; // [rsp+38h] [rbp-9h] BYREF
  __int64 v20; // [rsp+40h] [rbp-1h] BYREF
  struct D2D_VECTOR_4F v21; // [rsp+48h] [rbp+7h] BYREF

  v1 = 0;
  v19 = 0;
  if ( !*(_BYTE *)this && ClipPlaneIterator::HasMoreClipPlanes(this) )
  {
    if ( *((_DWORD *)this + 1) )
      ClipPlaneIterator::GetMorePlaceholderClipPlanes(this, &v21, &v19);
    else
      ClipPlaneIterator::GetMoreStandardClipPlanes(this, &v21, &v19);
    v3 = (char *)DefaultHeap::Alloc(0x60uLL);
    v5 = (__int64)v3;
    if ( v3 )
    {
      memset_0(v3 + 12, 0, 0x54uLL);
      *(_DWORD *)(v5 + 8) = 0;
      *(_QWORD *)v5 = &ClipPlaneInfoRef::`vftable';
      v20 = v5;
      ((void (__fastcall *)(__int64))ClipPlaneInfoRef::`vftable')(v5);
      v6 = v19;
      v7 = 0LL;
      if ( !v19 )
        goto LABEL_17;
      v8 = &v21;
      v9 = (float *)(v5 + 80);
      v7 = v19;
      do
      {
        x = v8->x;
        *(struct D2D_VECTOR_4F *)((char *)v8 + v5 - (_QWORD)&v21.y + 20) = *v8;
        if ( x == 0.0 )
          v11 = v8->y <= 0.0;
        else
          v11 = x <= 0.0;
        if ( v11 )
          v12 = 0.0;
        else
          v12 = FLOAT_0_5;
        *v9 = v12;
        ++v8;
        ++v9;
        --v6;
      }
      while ( v6 );
      if ( (unsigned int)v7 < 4 )
      {
LABEL_17:
        v13 = (_OWORD *)(v5 + 16 * (v7 + 1));
        v14 = (_DWORD *)(v5 + 80 + 4 * v7);
        v15 = (unsigned int)(4 - v7);
        do
        {
          *v13 = 0LL;
          *v14 = 0;
          ++v13;
          ++v14;
          --v15;
        }
        while ( v15 );
      }
      Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::operator=(
        (_QWORD *)(*((_QWORD *)this + 15) + 256LL),
        (void (__fastcall ***)(_QWORD))v5);
    }
    else
    {
      v20 = 0LL;
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x2A8u, 0LL);
    }
    goto LABEL_23;
  }
  v16 = *((_QWORD *)this + 15);
  v17 = *(_QWORD *)(v16 + 256);
  if ( v17 )
  {
    *(_QWORD *)(v16 + 256) = 0LL;
    v20 = v17;
LABEL_23:
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v20);
  }
  return v1;
}
