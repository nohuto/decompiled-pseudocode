/*
 * XREFs of ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z @ 0x180038474
 * Callers:
 *     ?EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x180037C40 (-EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 *     ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370 (-Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037D34 (-AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV-$TMilRect@IUMilRectU@.c)
 *     ?SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ @ 0x180038200 (-SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180038748 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ @ 0x1800387F8 (-GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ.c)
 *     ?EndDraw@CTileClump@DirectComposition@@QEAAXXZ @ 0x1800388BC (-EndDraw@CTileClump@DirectComposition@@QEAAXXZ.c)
 *     ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038F28 (-InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A3CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180087D18 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUMilRectU@@@Z @ 0x18009376C (-TryAddRectangle@CRegion@@QEAAJAEBUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ @ 0x1800EA888 (-FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ.c)
 *     ?RecoverValidRegions@CVirtualSurface@DirectComposition@@QEAAXXZ @ 0x1800FE280 (-RecoverValidRegions@CVirtualSurface@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::EndDrawInternal(
        DirectComposition::CVirtualSurface *this,
        struct CRegion *a2)
{
  __int64 v2; // rax
  int v5; // ebx
  unsigned int SafeMaxTextureSize; // eax
  _DWORD *v7; // rcx
  __int64 v8; // rsi
  char v9; // r12
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  unsigned __int64 v13; // xmm0_8
  int v14; // r13d
  int v15; // r15d
  int v16; // r14d
  volatile signed __int32 *v17; // r14
  char v18; // dl
  int v19; // eax
  __int32 v21; // eax
  __int32 v22; // eax
  __int32 v23; // eax
  __int32 v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-79h]
  __m128 v26; // [rsp+30h] [rbp-69h] BYREF
  __int128 v27; // [rsp+40h] [rbp-59h] BYREF
  CRegion *v28; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int32 v29; // [rsp+58h] [rbp-41h]
  unsigned __int32 v30; // [rsp+5Ch] [rbp-3Dh]
  _BYTE v31[80]; // [rsp+60h] [rbp-39h] BYREF

  v2 = *((_QWORD *)this + 13);
  v28 = a2;
  v5 = 0;
  SafeMaxTextureSize = DirectComposition::CDevice::GetSafeMaxTextureSize(*(DirectComposition::CDevice **)(v2 + 24));
  v7 = *(_DWORD **)a2;
  v25 = SafeMaxTextureSize;
  v26 = 0uLL;
  *v7 = 0;
  v27 = 0uLL;
  while ( 1 )
  {
    v8 = *((_QWORD *)this + 30);
    if ( !v8 )
      break;
    v9 = 0;
    v10 = *(_DWORD *)(v8 + 56);
    v11 = *(_DWORD *)(v8 + 60);
    v12 = *(_QWORD *)(*(_QWORD *)(v8 + 80) + 72LL);
    v13 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(v8 + 80) + 72LL), 8).m128i_u64[0];
    v14 = v10 + v12;
    v26.m128_i32[0] = v10 + v12;
    v26.m128_i32[1] = HIDWORD(v12) + v11;
    v15 = v10 + v13;
    v26.m128_i32[2] = v10 + v13;
    v16 = HIDWORD(v13) + v11;
    v26.m128_i32[3] = HIDWORD(v13) + v11;
    v5 = DirectComposition::CVirtualSurface::AddNewClump((__int64)this, v8, (const struct MilRectU *)&v26);
    if ( v5 >= 0 && (v15 - v14 > v25 || v16 - v26.m128_i32[1] > v25) )
      v9 = 1;
    DirectComposition::CTileClump::EndDraw((DirectComposition::CTileClump *)v8);
    if ( v9 )
      DirectComposition::CBitmapInfoFront::FlushD2D(*(DirectComposition::CBitmapInfoFront **)(v8 + 72));
    v17 = (volatile signed __int32 *)(v8 + 8);
    *((_QWORD *)this + 30) = *(_QWORD *)(v8 + 32);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 8));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
      if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
      {
        --*v17;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
      }
    }
    if ( v5 < 0 )
      break;
    CRegion::CRegion((CRegion *)v31, (const struct MilRectU *)&v26);
    v5 = FastRegion::CRegion::Union(
           (DirectComposition::CVirtualSurface *)((char *)this + 136),
           (const struct CRegion *)v31);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v31);
    TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v26);
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v27) )
    {
      v27 = v18 ? 0LL : *(_OWORD *)&v26;
    }
    else if ( !v18 )
    {
      v21 = v27;
      if ( v26.m128_i32[0] < (unsigned int)v27 )
        v21 = v26.m128_i32[0];
      LODWORD(v27) = v21;
      v22 = DWORD1(v27);
      if ( v26.m128_i32[1] < DWORD1(v27) )
        v22 = v26.m128_i32[1];
      DWORD1(v27) = v22;
      v23 = DWORD2(v27);
      if ( v26.m128_i32[2] > DWORD2(v27) )
        v23 = v26.m128_i32[2];
      DWORD2(v27) = v23;
      v24 = HIDWORD(v27);
      if ( v26.m128_i32[3] > HIDWORD(v27) )
        v24 = v26.m128_i32[3];
      HIDWORD(v27) = v24;
    }
    *((_BYTE *)this + 132) &= ~2u;
    if ( v5 < 0 )
      break;
    if ( v9 )
    {
      v5 = CRegion::TryAddRectangle(v28, (const struct MilRectU *)&v26);
      if ( v5 < 0 )
        break;
    }
  }
  if ( !*((_QWORD *)this + 30) )
    *((_QWORD *)this + 29) = 0LL;
  if ( v5 < 0 )
  {
    DirectComposition::CVirtualSurface::RecoverValidRegions(this);
  }
  else
  {
    v26.m128_f32[0] = (float)(int)v27;
    v26.m128_f32[1] = (float)SDWORD1(v27);
    v26.m128_f32[2] = (float)SDWORD2(v27);
    v26.m128_f32[3] = (float)SHIDWORD(v27);
    *(float *)&v28 = (float)(int)v27;
    v30 = _mm_shuffle_ps(v26, v26, 255).m128_u32[0];
    HIDWORD(v28) = _mm_shuffle_ps(v26, v26, 85).m128_u32[0];
    v29 = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
    DirectComposition::CDirtyNotifier::InvalidateListeners((char *)this + 16, &v28);
  }
  v19 = DirectComposition::CVirtualSurface::SynchronizeMarshalerState(this);
  if ( v19 < 0 )
    return (unsigned int)v19;
  return (unsigned int)v5;
}
