/*
 * XREFs of xxxPSMTextOut @ 0x1C0250058
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02475D8 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C008ABC0 (GreExtTextOutWInternal.c)
 *     CALL_LPK @ 0x1C00B9BC8 (CALL_LPK.c)
 *     GreSetBkColor @ 0x1C00BE480 (GreSetBkColor.c)
 *     GreGetTextMetricsW @ 0x1C00C42C4 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 *     GreGetTextColor @ 0x1C00C5D38 (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     xxxClientPSMTextOut @ 0x1C022CBE4 (xxxClientPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025BA88 (GetPrefixCount.c)
 */

HDC __fastcall xxxPSMTextOut(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        const WCHAR *a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int16 *v6; // rsi
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  HDC result; // rax
  int PrefixCount; // edi
  int TextMetricsW; // eax
  int v16; // ebx
  LONG v17; // edi
  int TextColor; // eax
  int v19; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h]
  __int128 v22; // [rsp+80h] [rbp-80h]
  _OWORD v23[5]; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v24; // [rsp+F0h] [rbp-10h] BYREF

  v6 = &word_1C033BE40;
  v8 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a4);
    return xxxClientPSMTextOut(a1, a2, a3, &DestinationString.Length, a5, a6);
  }
  else if ( a5 < 0xFF
         || (result = (HDC)Win32AllocPoolZInit(2LL * (int)(a5 + 1), 1953657685LL),
             (v6 = (unsigned __int16 *)result) != 0LL) )
  {
    PrefixCount = GetPrefixCount(a4, a5, v6, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, v6, a5 - HIWORD(PrefixCount), 0LL, 0LL, 0);
    if ( (_WORD)PrefixCount != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      memset(v23, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v23);
      v21 = v23[0];
      v22 = v23[2];
      if ( TextMetricsW )
      {
        v16 = v22;
        v8 = DWORD1(v21);
      }
      else
      {
        v16 = 0;
      }
      if ( (_WORD)PrefixCount )
      {
        GreGetTextExtentW(a1, v6, (unsigned __int16)PrefixCount, (struct tagSIZE *)&DestinationString, 1u);
        a2 += *(_DWORD *)&DestinationString.Length - v16;
      }
      GreGetTextExtentW(a1, &v6[(unsigned __int16)PrefixCount], 1u, (struct tagSIZE *)&DestinationString, 1u);
      v17 = v8 + a3 + 1;
      v24.left = a2;
      v24.top = v17;
      v24.bottom = v17 + 1;
      v24.right = a2 + DestinationString.Length - v16 / 2;
      TextColor = GreGetTextColor(a1);
      v19 = GreSetBkColor(a1, TextColor);
      GreExtTextOutWInternal(a1, a2, v17, 2, &v24, (unsigned __int16 *)&word_1C02E3794, 0, 0LL, 0LL, 0);
      GreSetBkColor(a1, v19);
    }
    result = (HDC)&word_1C033BE40;
    if ( v6 != &word_1C033BE40 )
      return (HDC)Win32FreePool(v6);
  }
  return result;
}
