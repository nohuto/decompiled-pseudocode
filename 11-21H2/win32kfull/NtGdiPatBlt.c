/*
 * XREFs of NtGdiPatBlt @ 0x1C0042E10
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     xxxPaintMenuBar @ 0x1C00BCDEC (xxxPaintMenuBar.c)
 *     DrawThumb2 @ 0x1C00C5BBC (DrawThumb2.c)
 *     xxxSoundSentry @ 0x1C011B3AC (xxxSoundSentry.c)
 *     EraseBitmap @ 0x1C011C584 (EraseBitmap.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C024078C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0247194 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0247410 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1C0247D38 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0247E7C (xxxMNDrawFullNC.c)
 *     xxxDrawState @ 0x1C024DD1C (xxxDrawState.c)
 *     DxgkEngColorFillViaGDI @ 0x1C0274DE0 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0043168 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     bCvtPts1 @ 0x1C0089370 (bCvtPts1.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D630 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015D9B0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiPatBlt(HDC a1, LONG a2, LONG a3, int a4, int a5, int a6)
{
  unsigned int v10; // ebx
  __int64 v11; // r10
  unsigned int v12; // edi
  __int64 v13; // rax
  int v14; // r11d
  LONG v15; // r8d
  int v16; // edx
  LONG v17; // ecx
  LONG v18; // r9d
  LONG v19; // eax
  LONG v20; // eax
  __int64 v21; // rcx
  struct SURFACE *v22; // rsi
  __int64 v23; // rdx
  unsigned int locked; // eax
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  _QWORD v29[6]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  _QWORD v33[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v34[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  __int64 v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  LONG v39; // [rsp+120h] [rbp+20h] BYREF
  LONG v40; // [rsp+124h] [rbp+24h]
  int v41; // [rsp+128h] [rbp+28h]
  LONG v42; // [rsp+12Ch] [rbp+2Ch]

  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v29, a1);
  v11 = v29[0];
  if ( v29[0] )
  {
    v12 = (BYTE2(a6) << 8) | BYTE2(a6);
    if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
    {
      v10 = 1;
      v27 = *(_DWORD *)(*(_QWORD *)(v29[0] + 976LL) + 208LL);
      v28 = *(_DWORD *)(*(_QWORD *)(v29[0] + 976LL) + 108LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v29[0] + 976LL) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v26, (struct XDCOBJ *)v29, 0x204u, 0);
        v11 = v29[0];
        v13 = v26;
      }
      else
      {
        v13 = v29[0] + 320LL;
        v26 = v29[0] + 320LL;
      }
      v14 = *(_DWORD *)(v13 + 32);
      v15 = a3;
      if ( (v14 & 1) == 0 )
      {
        v10 = GreMaskBlt(a1, a5, 0LL, 0, 0, 0LL, 0, 0, v12 << 16, 0);
        goto LABEL_34;
      }
      v40 = a3;
      v16 = a2 + a4;
      v17 = a2;
      v39 = a2;
      v18 = a3 + a5;
      v41 = a2 + a4;
      v42 = a3 + a5;
      if ( (v14 & 0x43) != 0x43 )
      {
        bCvtPts1(v13, &v39, 2LL);
        v11 = v29[0];
        v18 = v42;
        v16 = v41;
        v15 = v40;
        v17 = v39;
      }
      if ( v28 )
      {
        ++v17;
        ++v16;
        v39 = v17;
        v41 = v16;
      }
      if ( v17 > v16 )
      {
        v19 = v17;
        v39 = v16;
        v17 = v16;
        v41 = v19;
        v16 = v19;
      }
      if ( v15 > v18 )
      {
        v20 = v15;
        v40 = v18;
        v15 = v18;
        v42 = v20;
        v18 = v20;
      }
      if ( v17 != v16 && v15 != v18 )
      {
        if ( (*(_DWORD *)(v11 + 36) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v29, (struct ERECTL *)&v39);
        if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
          bSpDwmValidateSurface((struct XDCOBJ *)v29, a2, a3, a4, a5);
        v33[0] = 0LL;
        v33[1] = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v34);
        v35 = 256;
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0;
        v33[0] = 0LL;
        v38 = 0LL;
        v37 = 0LL;
        v36 = 0LL;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v30, (struct XDCOBJ *)v29, 0) )
        {
          v21 = v29[0];
          v22 = *(struct SURFACE **)(v29[0] + 496LL);
          if ( !v22 )
          {
LABEL_28:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v30);
            if ( v33[0] )
            {
              if ( (_BYTE)v35 )
              {
                *(_DWORD *)(v33[0] + 40LL) &= ~2u;
                LOBYTE(v35) = 0;
              }
              XDCOBJ::vUnlock((XDCOBJ *)v33);
            }
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v34);
            goto LABEL_34;
          }
          v23 = *(_QWORD *)(v29[0] + 976LL);
          if ( (*(_DWORD *)(v23 + 152) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v29[0], *(_QWORD *)(v23 + 160));
            v21 = v29[0];
          }
          locked = GrePatBltLockedDC(
                     (struct XDCOBJ *)v29,
                     (struct EXFORMOBJ *)*(unsigned int *)(*(_QWORD *)(v21 + 976) + 188LL),
                     (struct ERECTL *)&v39,
                     v12,
                     v22,
                     *(_DWORD *)(*(_QWORD *)(v21 + 976) + 184LL),
                     *(_DWORD *)(*(_QWORD *)(v21 + 976) + 176LL),
                     *(_DWORD *)(*(_QWORD *)(v21 + 976) + 188LL),
                     *(_DWORD *)(*(_QWORD *)(v21 + 976) + 180LL));
        }
        else
        {
          locked = XDCOBJ::bFullScreen((XDCOBJ *)v29);
        }
        v10 = locked;
        goto LABEL_28;
      }
    }
  }
LABEL_34:
  DCOBJ::~DCOBJ((DCOBJ *)v29);
  return v10;
}
