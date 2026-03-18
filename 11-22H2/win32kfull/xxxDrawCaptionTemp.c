/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C022C094
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C01CEC30 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C01CEDA0 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02243DC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GreGetLayout @ 0x1C0024844 (GreGetLayout.c)
 *     GreSetBkColor @ 0x1C0027760 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0027D58 (GreSetTextColor.c)
 *     FillRect @ 0x1C0028BEC (FillRect.c)
 *     GetDPIMetrics @ 0x1C0041140 (GetDPIMetrics.c)
 *     _HasCaptionIcon @ 0x1C00631C8 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C0065C34 (xxxGetWindowSmIcon.c)
 *     GreGetTextExtentW @ 0x1C007A468 (GreGetTextExtentW.c)
 *     ?GrepGetTextMetricsW@@YAHPEAUHDC__@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C007DC34 (-GrepGetTextMetricsW@@YAHPEAUHDC__@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0095A30 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C0095B3C (TextCopy.c)
 *     GreExtTextOutW @ 0x1C00A1DB0 (GreExtTextOutW.c)
 *     GetDPIServerInfo @ 0x1C00AB4C8 (GetDPIServerInfo.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C00F8AA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00FA9A0 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     GreSetBkMode @ 0x1C0115C14 (GreSetBkMode.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     xxxGetWindowText @ 0x1C01F2D84 (xxxGetWindowText.c)
 *     xxxClientExtTextOutW @ 0x1C021212C (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0212AAC (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0225FD4 (CALL_LPK.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022B9A4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C022BC94 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     DrawTextExWorker @ 0x1C024D1FC (DrawTextExWorker.c)
 *     GreGetTextAlign @ 0x1C02D7C60 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C02D7D04 (GreSetTextAlign.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        _QWORD *a1,
        Gre::Base *a2,
        struct tagRECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        __int64 a6,
        __int16 a7)
{
  struct tagCURSOR *WindowSmIcon; // r13
  LONG left; // eax
  int v13; // ebx
  HBRUSH v14; // rax
  int v15; // r12d
  HBRUSH v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int Layout; // eax
  unsigned int v22; // ebx
  int v23; // r12d
  __int128 *v24; // r13
  int WindowText; // eax
  struct _LARGE_UNICODE_STRING *StrName; // rax
  __int64 v27; // r12
  unsigned __int64 v28; // rcx
  __int64 DPIMetrics; // rax
  __int64 v30; // rcx
  int v31; // edx
  __int64 DPIServerInfo; // rax
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rax
  int TextMetricsW; // ebx
  __int64 v37; // rcx
  int v38; // ecx
  const WCHAR *v39; // r10
  int v40; // eax
  const WCHAR *SourceString; // r9
  int v42; // r8d
  int v43; // r10d
  int v44; // edx
  const WCHAR *v45; // r8
  unsigned int v46; // r10d
  unsigned int v47; // eax
  int v48; // [rsp+40h] [rbp-C0h]
  HBRUSH v49; // [rsp+48h] [rbp-B8h]
  int v50; // [rsp+50h] [rbp-B0h]
  unsigned int v51; // [rsp+58h] [rbp-A8h]
  int v52; // [rsp+60h] [rbp-A0h]
  int v53; // [rsp+64h] [rbp-9Ch]
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  struct tagTHREADINFO *v55; // [rsp+70h] [rbp-90h]
  __int128 v56; // [rsp+78h] [rbp-88h] BYREF
  __int128 v57; // [rsp+88h] [rbp-78h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  int v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A4h] [rbp-5Ch]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  _OWORD v62[4]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v63[5]; // [rsp+100h] [rbp+0h] BYREF
  char v64[512]; // [rsp+150h] [rbp+50h] BYREF

  WindowSmIcon = a5;
  *(_QWORD *)&v56 = a6;
  left = a3->left;
  v61 = a4;
  v51 = 1;
  v50 = 0;
  v54 = 0LL;
  if ( a3->right <= left )
    return 0LL;
  if ( a1 && !a5 && (unsigned int)HasCaptionIcon((__int64)a1) && (a7 & 2) == 0 && (*(_BYTE *)(a1[5] + 30LL) & 8) != 0 )
    WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon((ULONG_PTR)a1, a7 & 0x2000);
  v48 = *(_DWORD *)(gpsi + 4572LL);
  if ( (a7 & 1) == 0 )
  {
    if ( (a7 & 0x10) != 0 )
    {
      v13 = *(_DWORD *)(gpsi + 4628LL);
      v14 = *(HBRUSH *)(gpsi + 4816LL);
      goto LABEL_19;
    }
    v15 = *(_DWORD *)(gpsi + 4644LL);
    v13 = *(_DWORD *)(gpsi + 4580LL);
    v16 = *(HBRUSH *)(gpsi + 4720LL);
    goto LABEL_21;
  }
  if ( (a7 & 0x10) == 0 )
  {
    v15 = *(_DWORD *)(gpsi + 4604LL);
    v13 = *(_DWORD *)(gpsi + 4576LL);
    v16 = *(HBRUSH *)(gpsi + 4712LL);
LABEL_21:
    v49 = v16;
    if ( (a7 & 0x20) == 0 )
      goto LABEL_24;
    v50 = 1;
LABEL_23:
    v48 = GreSetBkMode((HDC)a2, 1);
    goto LABEL_24;
  }
  if ( *(_WORD *)(gpsi + 6996LL) < 8u
    || (v13 = *(_DWORD *)(gpsi + 4648LL), v13 != *(_DWORD *)(gpsi + 4568LL))
    || v13 == *(_DWORD *)(gpsi + 4588LL) )
  {
    v15 = *(_DWORD *)(gpsi + 4628LL);
    v13 = *(_DWORD *)(gpsi + 4648LL);
    v49 = *(HBRUSH *)(gpsi + 4944LL);
    goto LABEL_23;
  }
  v14 = *(HBRUSH *)(gpsi + 4856LL);
LABEL_19:
  v15 = *(_DWORD *)(gpsi + 4640LL);
  v49 = v14;
LABEL_24:
  v52 = GreSetTextColor((__int64)a2, v15);
  v53 = GreSetBkColor((HDC)a2, v13);
  if ( WindowSmIcon )
  {
    v19 = 2LL;
    if ( (a7 & 2) == 0 )
    {
      if ( (a7 & 4) != 0 )
      {
        Layout = GreGetLayout((HDC)a2);
        v22 = Layout;
        v23 = Layout & 1;
        if ( (Layout & 1) != 0 )
          GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
        DrawCaptionIcon((HDC)a2, a3, WindowSmIcon, v49, a7);
        if ( v23 )
          GreSetLayout(a2, 0xFFFFFFFFLL, v22);
      }
      else
      {
        v18 = (unsigned int)(a3->bottom - a3->top);
        a3->left += v18;
      }
    }
  }
  if ( (a7 & 8) == 0 )
    goto LABEL_87;
  v57 = 0LL;
  v24 = (__int128 *)v56;
  v55 = PtiCurrentShared(v18, v17, v19, v20);
  if ( !(_QWORD)v56 )
  {
    if ( a1 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText((struct tagWND *)a1, v64);
LABEL_39:
        v28 = (unsigned __int16)WindowText;
        LODWORD(v27) = WindowText;
        LOWORD(v28) = 2 * WindowText;
        LOWORD(v57) = 2 * WindowText;
LABEL_41:
        LOWORD(v28) = v28 + 2;
        *((_QWORD *)&v57 + 1) = v64;
        WORD1(v57) = v28;
        v24 = &v57;
        goto LABEL_45;
      }
      if ( *(_DWORD *)(a1[5] + 184LL) )
      {
        v56 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 23),
                    (struct _LARGE_UNICODE_STRING *)&v56);
        WindowText = TextCopy((__int64)StrName, v64, 0xFFu);
        goto LABEL_39;
      }
    }
    *(_WORD *)v64 = 0;
    v28 = 0LL;
    LOWORD(v57) = 0;
    LODWORD(v27) = 0;
    goto LABEL_41;
  }
  v28 = *(unsigned __int16 *)(v56 + 2) - 2LL;
  if ( v28 >= *(unsigned __int16 *)v56 )
    LOWORD(v28) = *(_WORD *)v56;
  *(_WORD *)v56 = v28;
  v27 = (unsigned __int16)v28 >> 1;
  *(_WORD *)(*((_QWORD *)v24 + 1) + 2 * v27) = 0;
LABEL_45:
  if ( v61 )
  {
    *(_QWORD *)&v56 = GreSelectFontInternal((__int64)a2, v61, 1);
    memset_0(v63, 0, 0x44uLL);
    v35 = SGDGetSessionState(v34);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v62, *(struct Gre::Full::SESSION_GLOBALS **)(v35 + 32));
    TextMetricsW = GrepGetTextMetricsW((HDC)a2, (struct _TMW_INTERNAL *)v63, 1027);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v62);
    v62[0] = v63[0];
    if ( TextMetricsW )
      v38 = v62[0];
    else
      v38 = *(_DWORD *)(GetDPIServerInfo(v37) + 40);
    v33 = (a3->top + a3->bottom - v38) / 2;
  }
  else
  {
    if ( (a7 & 2) != 0 )
    {
      DPIMetrics = GetDPIMetrics(v28);
      v30 = *(_QWORD *)(DPIMetrics + 32);
      v31 = *(_DWORD *)(DPIMetrics + 44);
    }
    else
    {
      DPIServerInfo = GetDPIServerInfo(v28);
      v30 = *(_QWORD *)(DPIServerInfo + 8);
      v31 = *(_DWORD *)(DPIServerInfo + 20);
    }
    v33 = (a3->top + a3->bottom - v31) / 2;
    *(_QWORD *)&v56 = GreSelectFontInternal((__int64)a2, v30, 1);
  }
  if ( v50 )
    FillCaptionGradient((HDC)a2, a3, a7 & 1);
  else
    FillRect((HDC)a2, a3, v49);
  if ( v49 == *(HBRUSH *)(gpsi + 4944LL) )
  {
    GreSetTextColor((__int64)a2, *(_DWORD *)(gpsi + 4640LL));
    GreSetBkColor((HDC)a2, *(_DWORD *)(gpsi + 4636LL));
  }
  if ( (unsigned int)CALL_LPK((__int64)v55) )
    xxxClientGetTextExtentPointW(a2, v39, v27, &v54);
  else
    GreGetTextExtentW((__int64)a2, (__int64)v39, v27, (__int64)&v54);
  if ( a1 && (*(_BYTE *)(a1[5] + 25LL) & 0x20) != 0 )
  {
    GreGetTextAlign((HDC)a2);
    GreSetTextAlign((HDC)a2);
  }
  if ( (a7 & 0x4000) != 0 || (_DWORD)v27 && (int)v54 > a3->right - a3->left - 2 )
  {
    v60 = 0LL;
    v58 = 20LL;
    v59 = 2;
    if ( (a7 & 0x4000) != 0 )
    {
      v47 = 34853;
    }
    else if ( !a1 || (v47 = 34854, (*(_BYTE *)(a1[5] + 25LL) & 0x10) == 0) )
    {
      v47 = 34852;
    }
    DrawTextExWorker((HDC)a2, *((unsigned __int16 **)v24 + 1), v27, a3, v47, (struct tagDRAWTEXTPARAMS *)&v58);
    v51 = 0;
  }
  else
  {
    if ( a1 && (*(_BYTE *)(a1[5] + 25LL) & 0x10) != 0 )
    {
      v40 = CALL_LPK((__int64)v55);
      v44 = v43 - v42 - 2;
      if ( v40 )
        xxxClientExtTextOutW(a2, v44, v33, 4, a3, SourceString, v27);
      else
        GreExtTextOutW((__int64)a2, v44, v33, 4u, (__int64)a3, (__int64)SourceString, v27);
LABEL_83:
      if ( (*(_BYTE *)(a1[5] + 25LL) & 0x20) != 0 )
        GreSetTextAlign((HDC)a2);
      goto LABEL_85;
    }
    if ( (unsigned int)CALL_LPK((__int64)v55) )
      xxxClientExtTextOutW(a2, v46, v33, 4, a3, v45, v27);
    else
      GreExtTextOutW((__int64)a2, v46, v33, 4u, (__int64)a3, (__int64)v45, v27);
  }
  if ( a1 )
    goto LABEL_83;
LABEL_85:
  if ( (_QWORD)v56 )
    GreSelectFontInternal((__int64)a2, v56, 1);
LABEL_87:
  GreSetTextColor((__int64)a2, v52);
  GreSetBkColor((HDC)a2, v53);
  if ( v49 == *(HBRUSH *)(gpsi + 4944LL) )
    GreSetBkMode((HDC)a2, v48);
  return v51;
}
