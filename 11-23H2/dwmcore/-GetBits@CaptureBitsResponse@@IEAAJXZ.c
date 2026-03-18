/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800207A4
 * Callers:
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180020570 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1801DFB80 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180020944 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180020A74 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180026D30 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180034874 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D87C4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this)
{
  int v1; // eax
  int RenderTargetBitmap; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // eax
  FastRegion::Internal::CRgnData *v11; // rcx
  int v12; // eax
  int v14; // eax
  unsigned int v15; // ecx
  __int128 *v16; // [rsp+20h] [rbp-19h]
  _BYTE v17[8]; // [rsp+30h] [rbp-9h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-1h]
  _DWORD *v19; // [rsp+40h] [rbp+7h]
  __int64 v20; // [rsp+48h] [rbp+Fh]
  int v21; // [rsp+50h] [rbp+17h]
  _DWORD v22[4]; // [rsp+60h] [rbp+27h] BYREF
  __int128 v23; // [rsp+70h] [rbp+37h] BYREF

  v1 = *((_DWORD *)this + 409);
  v22[0] = 0;
  v22[1] = 0;
  v22[2] = v1;
  v22[3] = *((_DWORD *)this + 410);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v16 = &v23;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RTCAPTURE_GETBITS);
  }
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
  v5 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, RenderTargetBitmap, 0xA4u, 0LL);
  }
  else
  {
    v6 = CaptureBitsResponse::RenderForCapture(this);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xA7u, 0LL);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 184LL))(*((_QWORD *)this + 6)) )
    {
      FastRegion::Internal::CRgnData::BeginIterator(
        *(FastRegion::Internal::CRgnData **)(*((_QWORD *)this + 6) + 4608LL),
        (struct FastRegion::CRegion::Iterator *)v17);
      while ( (unsigned __int64)v19 < v18 )
      {
        v23 = 0LL;
        DWORD1(v23) = *v19;
        HIDWORD(v23) = v19[2];
        v8 = 2 * v21;
        LODWORD(v23) = *(_DWORD *)(v20 + 4 * v8);
        v9 = *(_DWORD *)(v20 + 4 * v8 + 4);
        LODWORD(v8) = *((_DWORD *)this + 408);
        v10 = *((_DWORD *)this + 407);
        DWORD1(v23) -= v8;
        LODWORD(v23) = v23 - v10;
        HIDWORD(v23) -= v8;
        DWORD2(v23) = v9 - v10;
        if ( (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(
                                &v23,
                                v22) )
        {
          LODWORD(v16) = DWORD1(v23);
          v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 8)
                                                                                          + 48LL))(
                  *((_QWORD *)this + 8),
                  &v23,
                  *((_QWORD *)this + 210),
                  (unsigned int)v23,
                  v16);
          v5 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, v12, 0xBEu, 0LL);
            break;
          }
        }
        FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v17);
      }
    }
    else
    {
      LODWORD(v16) = 0;
      v14 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 8) + 48LL))(
              *((_QWORD *)this + 8),
              v22,
              *((_QWORD *)this + 210),
              0LL,
              v16);
      v5 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC4u, 0LL);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RTCAPTURE_Stop);
  return v5;
}
