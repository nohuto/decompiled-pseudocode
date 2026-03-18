/*
 * XREFs of GreRestoreDCInternal @ 0x1C00BEFB0
 * Callers:
 *     GreRestoreDC @ 0x1C00BEF90 (GreRestoreDC.c)
 * Callees:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001AE70 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001AFA8 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreDCSelectBrush @ 0x1C001DC40 (GreDCSelectBrush.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E6BC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001E824 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C001FD30 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00201E0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0020AE0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C0021920 (HmgPentryFromPobj.c)
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C002EB4C (--0DCOBJ@@QEAA@XZ.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0086F68 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008ABF4 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     HmgLockIgnoreOwner @ 0x1C008F1A0 (HmgLockIgnoreOwner.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0092EB4 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     vRestoreRegion @ 0x1C00944C0 (vRestoreRegion.c)
 *     GreDCSelectPen @ 0x1C0098770 (GreDCSelectPen.c)
 *     hbmSelectBitmap @ 0x1C009A990 (hbmSelectBitmap.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00CBD30 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00DA864 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DA978 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 */

__int64 __fastcall GreRestoreDCInternal(HDC a1, int a2, int a3, int a4)
{
  __int64 v8; // r8
  DC *v9; // rsi
  unsigned int v10; // edi
  int v11; // r12d
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // rbx
  int v17; // r15d
  int v18; // esi
  unsigned int *v19; // rcx
  int v20; // eax
  DC *v21; // rcx
  DC *v22; // rdx
  __int64 v23; // rax
  DC *v24; // rcx
  DC *v25; // rcx
  int v26; // edx
  __int64 v27; // r8
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  int v32; // r8d
  ULONG v33; // ecx
  DC *v35[6]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v36; // [rsp+68h] [rbp-19h] BYREF
  HSEMAPHORE v37; // [rsp+70h] [rbp-11h] BYREF
  DC *v38[7]; // [rsp+78h] [rbp-9h] BYREF
  char v39; // [rsp+B0h] [rbp+2Fh]

  DCOBJ::DCOBJ((DCOBJ *)v35, a1);
  v9 = v35[0];
  v10 = 0;
  v11 = 1;
  if ( !v35[0] || !a3 && (*(_DWORD *)(HmgPentryFromPobj((_DWORD *)v35[0]) + 8) & 0xFFFFFFFE) == 0 )
  {
    v33 = 6;
    goto LABEL_67;
  }
  if ( !a4 || *((_WORD *)v9 + 6) <= 1u )
  {
    v14 = *((_QWORD *)v9 + 122);
    v15 = *(_DWORD *)(v14 + 152);
    if ( (v15 & 0x1000) != 0 )
    {
      GreDCSelectBrush((__int64)v9, *(_QWORD *)(v14 + 160));
      v9 = v35[0];
    }
    if ( (v15 & 0x2000) != 0 )
    {
      GreDCSelectPen((struct HOBJ__ ***)v9, *(struct HOBJ__ **)(*((_QWORD *)v9 + 122) + 168LL));
      v9 = v35[0];
    }
    if ( a2 < 0 )
      a2 += *((_DWORD *)v9 + 26);
    if ( a2 >= 1 && a2 < *((_DWORD *)v9 + 26) )
    {
      v16 = *((_QWORD *)v9 + 6);
      if ( (*(_DWORD *)(v16 + 40) & 1) != 0 )
      {
        GreLockVisRgn(*((_QWORD *)v9 + 6), v14, v8);
        v9 = v35[0];
      }
      v17 = *((_DWORD *)v9 + 9) & 0x800;
      if ( v17 )
      {
        DC::bMakeInfoDC(v9, 0);
        v9 = v35[0];
      }
      v18 = *(_DWORD *)(*((_QWORD *)v9 + 122) + 104LL);
      while ( 1 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v38);
        v38[0] = (DC *)HmgLockIgnoreOwner(*((_QWORD *)v35[0] + 14), 1);
        if ( !v38[0] )
          break;
        DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v35[0] + 17));
        DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v35[0] + 18));
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)v35[0] + 19));
        DEC_SHARE_REF_CNT(*((unsigned int **)v35[0] + 12));
        vRestoreRegion((__int64)v35);
        if ( qword_1C029B0C0 && (int)qword_1C029B0C0() >= 0 && qword_1C029B0C8 )
          qword_1C029B0C8(v35, (unsigned int)(*((_DWORD *)v35[0] + 26) - 1));
        v19 = (unsigned int *)*((_QWORD *)v35[0] + 62);
        if ( v19 )
        {
          if ( *((_DWORD *)v35[0] + 8) == 1 )
          {
            hbmSelectBitmap(a1, (HBITMAP)gahStockObjects[21], 1, 0);
          }
          else
          {
            v20 = v19[28];
            if ( (v20 & 0x800) != 0 )
            {
              DEC_SHARE_REF_CNT(v19);
            }
            else if ( v20 >= 0 )
            {
              SURFACE::vDec_cRef((SURFACE *)v19);
            }
          }
        }
        v37 = ghsemPalette;
        EngAcquireSemaphore(ghsemPalette);
        v21 = v38[0];
        v22 = v35[0];
        if ( *((_QWORD *)v35[0] + 10) != *((_QWORD *)v38[0] + 10) )
        {
          SelectPaletteWorker((struct XDCOBJ *)v35, *((HPALETTE *)v38[0] + 10), 1);
          v22 = v35[0];
          v21 = v38[0];
        }
        if ( *((_QWORD *)v22 + 11) != *((_QWORD *)v21 + 11) )
        {
          EPALOBJ::EPALOBJ((EPALOBJ *)&v36, *((HPALETTE *)v22 + 10));
          *((_QWORD *)v38[0] + 11) = v36;
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v36);
          v21 = v38[0];
        }
        v23 = *((_QWORD *)v21 + 11);
        if ( (struct PALETTE *)v23 != ppalDefault )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v23 + 56));
          v21 = v38[0];
        }
        DC::vCopyTo(v21, v35);
        XDCOBJ::bDeleteDC(v38, 0);
        SEMOBJ::vUnlock((PERESOURCE *)&v37);
        DCOBJ::~DCOBJ((DCOBJ *)v38);
        v24 = v35[0];
        if ( a2 >= *((_DWORD *)v35[0] + 26) )
          goto LABEL_44;
      }
      EngSetLastError(6u);
      v11 = 0;
      DCOBJ::~DCOBJ((DCOBJ *)v38);
      v24 = v35[0];
LABEL_44:
      if ( v18 != *(_DWORD *)(*((_QWORD *)v24 + 122) + 104LL) )
      {
        *((_DWORD *)v24 + 63) |= 1u;
        v24 = v35[0];
      }
      if ( v17 )
      {
        DC::bMakeInfoDC(v24, 1);
        v24 = v35[0];
      }
      DC::vReleaseRao(v24);
      DC::AcquireDcVisRgnShared(v35[0]);
      DC::vUpdate_VisRect(v35[0], *((__m128i **)v35[0] + 142));
      if ( v39 )
        GreInnermostPushLockMSRC85333::ReleaseLock((DC *)((char *)v38[6] + 1112));
      *(_DWORD *)(*((_QWORD *)v35[0] + 122) + 152LL) |= 0x12001Fu;
      v25 = v35[0];
      if ( *((_DWORD *)v35[0] + 8) == 1 )
      {
        DC::bSetDefaultRegion(v35[0]);
        v25 = v35[0];
      }
      v26 = *((_DWORD *)v25 + 9);
      v27 = *((_QWORD *)v25 + 62);
      if ( (v26 & 1) != 0
        || *((_DWORD *)v25 + 8) == 1
        && v27
        && ((v28 = *(_DWORD *)(v27 + 112), (v28 & 0x4000) != 0)
         || (v28 & 0x800000) != 0 && (*(_DWORD *)(v16 + 40) & 1) != 0) )
      {
        *((_DWORD *)v25 + 9) = v26 | 0x200;
        v29 = *((_DWORD *)v35[0] + 9);
        if ( (*(_DWORD *)(v27 + 112) & 0x200) != 0 )
          v30 = v29 | 0x8000;
        else
          v30 = v29 & 0xFFFF7FFF;
        *((_DWORD *)v35[0] + 9) = v30;
      }
      else
      {
        *((_DWORD *)v25 + 9) = v26 & 0xFFFFFDFF;
      }
      DC::vCalcFillOrigin(v35[0]);
      if ( (*(_DWORD *)(v16 + 40) & 1) != 0 )
        GreUnlockVisRgn(v16, v31, v32);
      goto LABEL_68;
    }
    v33 = 87;
LABEL_67:
    EngSetLastError(v33);
    v11 = 0;
LABEL_68:
    v10 = v11;
    goto LABEL_69;
  }
  v12 = *((_QWORD *)v9 + 6);
  if ( v12 )
    v13 = *(_DWORD *)(v12 + 40);
  else
    v13 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(8LL, v13, *((unsigned __int16 *)v9 + 6), 0LL, 0LL);
LABEL_69:
  DCOBJ::~DCOBJ((DCOBJ *)v35);
  return v10;
}
