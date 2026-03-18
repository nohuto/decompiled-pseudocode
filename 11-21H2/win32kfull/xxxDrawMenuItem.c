/*
 * XREFs of xxxDrawMenuItem @ 0x1C00BE508
 * Callers:
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023E474 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00BE480 (GreSetBkColor.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00BE6B4 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00BE738 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     GetDPIMETRICSForDpi @ 0x1C00BF104 (GetDPIMETRICSForDpi.c)
 *     MNIsOwnerDrawItem @ 0x1C00BF45C (MNIsOwnerDrawItem.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreSetBkMode @ 0x1C00BFC20 (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1C00C1D4C (GrePolyPatBlt.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00C1F98 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00C37D8 (PrepareHDCBITSBitmap.c)
 *     GetDPIServerInfoForDpi @ 0x1C00C76E0 (GetDPIServerInfoForDpi.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C02470DC (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0247194 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x1C0247380 (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C024DBD4 (BltColor.c)
 *     xxxDrawState @ 0x1C024DD1C (xxxDrawState.c)
 *     GreGetTextCharacterExtra @ 0x1C02BAFBC (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02BB004 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawMenuItem(HDC a1, unsigned int a2, __int64 **a3, struct tagITEM *a4, char a5, __int64 a6)
{
  __int64 *v7; // rcx
  int v11; // eax
  unsigned int v12; // r11d
  int v13; // r12d
  BOOL v14; // r15d
  int v15; // edx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ebx
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rbx
  int v23; // esi
  int v24; // r11d
  __int64 v25; // rcx
  __int64 v26; // r13
  int v27; // ebx
  __int64 v28; // rdi
  int v29; // r8d
  unsigned int v30; // ebx
  _DWORD *v31; // rcx
  int v32; // r15d
  __int64 v33; // rcx
  int v34; // [rsp+50h] [rbp-78h]
  int v35; // [rsp+54h] [rbp-74h]
  __int64 v36; // [rsp+58h] [rbp-70h]
  _DWORD v37[4]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v38; // [rsp+80h] [rbp-48h]
  int v39; // [rsp+E0h] [rbp+18h]

  v34 = 0;
  v36 = 0LL;
  v7 = a3[2];
  v39 = 0;
  if ( !v7 )
    v7 = (__int64 *)**a3;
  v35 = MNIsOwnerDrawItem(v7, a4);
  v11 = MNDrawHilite(a3, a4);
  if ( v12 == -2147352576 )
  {
    if ( v11 || (v13 = 0, (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x10000100) != 0) )
      v13 = 1;
    v14 = (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 1) == 0;
  }
  else
  {
    v13 = v11;
    v14 = 0;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(GetDPIMETRICSForDpi(a2) + 48) )
    {
      v36 = GreSelectFontInternal(a1);
    }
    else
    {
      v39 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(a2);
      GetDPIMETRICSForDpi(a2);
      GreSetTextCharacterExtra(a1);
    }
    v12 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( v35 )
  {
    GreSetTextColor(a1, *(_DWORD *)(gpsi + 4596LL));
    if ( v14 )
      v15 = *(_DWORD *)(gpsi + 4688LL);
    else
      v15 = *(_DWORD *)(gpsi + 4584LL);
    GreSetBkColor(a1, v15);
    xxxSendMenuDrawItemMessage((_DWORD)a1, (a5 & 1) + 1, (_DWORD)a3, (_DWORD)a4, 0, 0, a6);
    v16 = (__int64)a3[2];
    if ( !v16 )
      v16 = **a3;
    result = MNGetpItemIndex(v16, (__int64)a4);
    if ( (_DWORD)result != -1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 1) != 0 && *((_QWORD *)a4 + 2) )
      {
        v18 = (__int64)a3[2];
        if ( !v18 )
          v18 = **a3;
        if ( !(unsigned int)MNIsUAHMenu(v18) )
        {
          v20 = (**(_DWORD **)a4 & 0x2000) != 0 ? 0x1E : 0;
          DpiForSystem = GetDpiForSystem(-(**(_DWORD **)a4 & 0x2000), v19);
          OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v20 + 62), DpiForSystem);
          if ( *(_DWORD *)(*(_QWORD *)a4 + 76LL) >= OemBitmapInfoForDpi[3] )
          {
            if ( PrepareHDCBITSBitmap(0LL) )
            {
              v23 = OemBitmapInfoForDpi[3];
              v24 = (*(_DWORD *)(*(_QWORD *)a4 + 76LL) - v23 - 2) / 2;
              if ( v24 <= 0 )
                v24 = 0;
              BltColor(
                a1,
                *(_DWORD *)(*(_QWORD *)a4 + 68LL) + v24,
                OemBitmapInfoForDpi[2],
                v23,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                1);
            }
          }
        }
      }
LABEL_15:
      MNDrawInsertionBar(a1, a4);
      if ( v34 )
        GreSetBkMode(a1);
      result = *(_QWORD *)a4;
      if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
      {
        if ( v36 )
        {
          return GreSelectFontInternal(a1);
        }
        else
        {
          GreGetTextCharacterExtra(a1);
          return GreSetTextCharacterExtra(a1);
        }
      }
      return result;
    }
    return result;
  }
  if ( v13 )
  {
    if ( v12 == -2147352576 )
    {
      v25 = gpsi;
      v26 = *(_QWORD *)(gpsi + 4928LL);
LABEL_40:
      v27 = *(_DWORD *)(v25 + 4624);
      v28 = *(_QWORD *)(v25 + 4808);
      goto LABEL_46;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 1) != 0 )
    {
      v25 = gpsi;
      v26 = *(_QWORD *)(gpsi + 4800LL);
      goto LABEL_40;
    }
LABEL_45:
    v26 = *(_QWORD *)(gpsi + 4728LL);
    v27 = *(_DWORD *)(gpsi + 4596LL);
    v28 = *(_QWORD *)(gpsi + 4752LL);
    goto LABEL_46;
  }
  if ( !v14 )
    goto LABEL_45;
  v27 = *(_DWORD *)(gpsi + 4596LL);
  v28 = *(_QWORD *)(gpsi + 4752LL);
  if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) )
    v26 = *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL);
  else
    v26 = *(_QWORD *)(gpsi + 4936LL);
LABEL_46:
  if ( !(unsigned int)MNIsCachedBmpOnly(a4)
    && ((*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 1) != 0 || (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 0x10) != 0) )
  {
    if ( v13 || v29 != *(_DWORD *)(gpsi + 4628LL) || *(_DWORD *)(gpsi + 2188LL) )
    {
      if ( *(_DWORD *)(gpsi + 4636LL) != v29 )
      {
        v28 = *(_QWORD *)(gpsi + 4832LL);
        v27 = *(_DWORD *)(gpsi + 4636LL);
        goto LABEL_58;
      }
    }
    else if ( *(_DWORD *)(gpsi + 4632LL) != v29 || *(_DWORD *)(gpsi + 4648LL) != v29 )
    {
      v39 |= (*(_DWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) & 0x10) != 0 ? 256 : 32;
      goto LABEL_58;
    }
    v39 |= 0x10u;
  }
LABEL_58:
  GreSetBkColor(a1, v29);
  GreSetTextColor(a1, v27);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) || v13 || v14 )
  {
    v31 = *(_DWORD **)a4;
    v38 = v26;
    v37[0] = v31[16];
    v37[1] = v31[17];
    v37[2] = v31[18];
    v37[3] = v31[19];
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v37, 1u);
    v30 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( v13 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      DrawOutline(
        a1,
        *(_DWORD *)(*(_QWORD *)a4 + 64LL),
        *(_DWORD *)(*(_QWORD *)a4 + 68LL),
        *(_DWORD *)(*(_QWORD *)a4 + 72LL),
        *(_DWORD *)(*(_QWORD *)a4 + 76LL),
        1,
        *(HBRUSH *)(gpsi + 4800LL));
  }
  else
  {
    v30 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40) + 24LL) )
  {
    v32 = GreSetBkMode(a1);
    v34 = v32;
  }
  else
  {
    v32 = 0;
  }
  GreSelectBrush(a1, v28);
  xxxDrawState(
    a1,
    *(_DWORD *)(*(_QWORD *)a4 + 68LL),
    *(_DWORD *)(*(_QWORD *)a4 + 72LL),
    *(_DWORD *)(*(_QWORD *)a4 + 76LL),
    v39);
  v33 = (__int64)a3[2];
  if ( !v33 )
    v33 = **a3;
  result = MNGetpItemIndex(v33, (__int64)a4);
  if ( (_DWORD)result != -1 )
  {
    if ( v30 != -2147352576 )
      MNDrawMenu3DHotTracking(a1);
    goto LABEL_15;
  }
  if ( v32 )
    return GreSetBkMode(a1);
  return result;
}
