/*
 * XREFs of ?PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileClump@2@@Z @ 0x1800050F8
 * Callers:
 *     ?PushDownClumps@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z @ 0x180037F58 (-PushDownClumps@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z.c)
 * Callees:
 *     ?GetAvailableRegion@CTileClump@DirectComposition@@QEAAJPEAVCRegion@@@Z @ 0x1800053A0 (-GetAvailableRegion@CTileClump@DirectComposition@@QEAAJPEAVCRegion@@@Z.c)
 *     ?TryIntersect@CRegion@@QEAAJAEBV1@0@Z @ 0x1800054BC (-TryIntersect@CRegion@@QEAAJAEBV1@0@Z.c)
 *     ?CopyRegionToClump@CTileClump@DirectComposition@@QEAAJPEAV12@PEAUID3D11Texture2D@@AEBVCRegion@@K@Z @ 0x1800054F4 (-CopyRegionToClump@CTileClump@DirectComposition@@QEAAJPEAV12@PEAUID3D11Texture2D@@AEBVCRegion@@K.c)
 *     ?BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@_NPEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037618 (-BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?EndDraw@CTileClump@DirectComposition@@QEAAXXZ @ 0x1800388BC (-EndDraw@CTileClump@DirectComposition@@QEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A2AC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800E9380 (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurfaceOptimizer::PushDownClump(
        DirectComposition::CVirtualSurfaceOptimizer *this,
        struct DirectComposition::CVirtualSurface *a2,
        struct DirectComposition::CTileClump *a3)
{
  _QWORD *v6; // r15
  int AvailableRegion; // edi
  bool v8; // zf
  __int64 i; // rbx
  unsigned __int64 v10; // xmm0_8
  unsigned int v11; // r9d
  __int64 v12; // rax
  unsigned __int64 v13; // xmm0_8
  _QWORD *v14; // rax
  __int64 v16; // rcx
  struct ID3D11Texture2D *v17; // r8
  __m128i v18; // xmm0
  __int64 v19; // rcx
  struct ID3D11Texture2D *v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-B0h]
  _BYTE v23[4]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v24[4]; // [rsp+5Ch] [rbp-A4h] BYREF
  int *v25; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+68h] [rbp-98h] BYREF
  int *v27; // [rsp+B0h] [rbp-50h] BYREF
  int v28; // [rsp+B8h] [rbp-48h] BYREF

  v27 = &v28;
  v20 = 0LL;
  v28 = 0;
  v6 = (_QWORD *)((char *)a2 + 256);
  AvailableRegion = DirectComposition::CTileClump::GetAvailableRegion(a3, (struct CRegion *)&v27);
  v8 = *v6 == (_QWORD)v6;
  for ( i = *v6 - 16LL; ; i = (__int64)(v14 - 2) )
  {
    if ( v8 )
      i = 0LL;
    if ( !i || !*v27 )
      break;
    if ( a3 != (struct DirectComposition::CTileClump *)i )
    {
      v10 = _mm_srli_si128(*(__m128i *)(i + 56), 8).m128i_u64[0];
      v11 = HIDWORD(v10) - HIDWORD(*(_QWORD *)(i + 56));
      v12 = (unsigned int)v10 - (unsigned int)*(_OWORD *)(i + 56);
      v13 = _mm_srli_si128(*(__m128i *)((char *)a3 + 56), 8).m128i_u64[0];
      if ( ((unsigned int)v13 - (unsigned int)*((_QWORD *)a3 + 7))
         * (unsigned __int64)(unsigned int)(HIDWORD(v13) - HIDWORD(*((_QWORD *)a3 + 7))) > v12 * (unsigned __int64)v11
        && (unsigned int)(*(_DWORD *)this - *(_DWORD *)(i + 168)) >= 2
        && !*(_QWORD *)(*(_QWORD *)(i + 72) + 120LL) )
      {
        v26 = 0;
        v25 = &v26;
        if ( AvailableRegion >= 0 )
        {
          AvailableRegion = CRegion::TryIntersect(
                              (CRegion *)&v25,
                              (const struct CRegion *)(i + 96),
                              (const struct CRegion *)&v27);
          if ( AvailableRegion >= 0 )
          {
            if ( *v25 )
            {
              if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
                McTemplateU0x_EventWriteTransfer(v16, &DCOMPEVENT_PUSH_DOWN_START, a2);
              v17 = v20;
              if ( v20 )
              {
LABEL_22:
                AvailableRegion = DirectComposition::CTileClump::CopyRegionToClump(
                                    (DirectComposition::CTileClump *)i,
                                    a3,
                                    v17,
                                    (const struct CRegion *)&v25,
                                    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL) + 420LL));
                if ( AvailableRegion >= 0 )
                  AvailableRegion = FastRegion::CRegion::Subtract(
                                      (FastRegion::CRegion *)&v27,
                                      (const struct CRegion *)&v25);
              }
              else
              {
                v18 = *(__m128i *)((char *)a3 + 56);
                v21[0] = v18.m128i_i32[0];
                v21[1] = v18.m128i_i32[1];
                v22 = _mm_srli_si128(v18, 8).m128i_u64[0];
                AvailableRegion = DirectComposition::CTileClump::BeginDrawInternal(
                                    a3,
                                    v21,
                                    &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                                    0LL,
                                    &v20,
                                    v24,
                                    v23,
                                    0LL);
                if ( AvailableRegion >= 0 )
                {
                  v17 = v20;
                  goto LABEL_22;
                }
              }
              if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
                McTemplateU0x_EventWriteTransfer(v19, &DCOMPEVENT_PUSH_DOWN_STOP, a2);
            }
          }
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v25);
      }
    }
    v14 = *(_QWORD **)(i + 16);
    v8 = v14 == v6;
  }
  if ( v20 )
  {
    DirectComposition::CTileClump::EndDraw(a3);
    ((void (__fastcall *)(struct ID3D11Texture2D *))v20->lpVtbl->Release)(v20);
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v27);
  return (unsigned int)AvailableRegion;
}
