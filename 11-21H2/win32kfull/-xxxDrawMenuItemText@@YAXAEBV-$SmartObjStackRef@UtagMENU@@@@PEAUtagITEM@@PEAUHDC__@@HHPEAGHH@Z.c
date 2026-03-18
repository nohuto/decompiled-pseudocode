/*
 * XREFs of ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02475D8
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     GreExtTextOutWInternal @ 0x1C008ABC0 (GreExtTextOutWInternal.c)
 *     CALL_LPK @ 0x1C00B9BC8 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C00B9C04 (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0247410 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0250058 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025BA88 (GetPrefixCount.c)
 */

WCHAR *__fastcall xxxDrawMenuItemText(__int64 **a1, __int64 a2, HDC a3, int a4, int a5, __int64 a6, int a7, int a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r13
  WCHAR *result; // rax
  WCHAR *SourceString; // rbx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int16 PrefixCount; // [rsp+50h] [rbp-288h]
  __int64 v20; // [rsp+58h] [rbp-280h]
  __int128 v21; // [rsp+68h] [rbp-270h] BYREF
  __int64 v22; // [rsp+78h] [rbp-260h]
  _BYTE v23[512]; // [rsp+80h] [rbp-258h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = *(_QWORD *)(a2 + 88);
  v20 = ThreadWin32Thread;
  v22 = 0LL;
  v21 = 0LL;
  if ( a7 < 255 )
  {
    SourceString = (WCHAR *)v23;
  }
  else
  {
    result = (WCHAR *)Win32AllocPoolZInit(2LL * (a7 + 1), 1953657685LL);
    SourceString = result;
    if ( !result )
      return result;
    PushW32ThreadLock((__int64)result, &v21, (__int64)Win32FreePool);
  }
  PrefixCount = GetPrefixCount(a6, (unsigned int)a7, SourceString, (unsigned int)a7);
  if ( (unsigned int)CALL_LPK(v20) )
  {
    xxxClientExtTextOutW(a3, a4, a5, 0, 0LL, SourceString, v16);
    v17 = (__int64)a1[2];
    if ( !v17 )
      v17 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v17, a2) == -1 || v13 != *(_QWORD *)(a2 + 88) )
      goto LABEL_21;
  }
  else
  {
    GreExtTextOutWInternal(a3, a4, a5, 0, 0LL, SourceString, v16, 0LL, 0LL, 0);
  }
  if ( a8
    || (gdwPUDFlags & 0x20000) != 0
    || ((unsigned __int8)gpdwCPUserPreferencesMask & 0x20) != 0
    || (int)gpdwCPUserPreferencesMask >= 0
    || (v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()), *(_DWORD *)(v18 + 632) <= 0x400u)
    && (*(_DWORD *)(v18 + 648) & 2) != 0 )
  {
    if ( (unsigned int)CALL_LPK(v20) )
      xxxPSMTextOut(a3, a7, 0x200000);
    else
      xxxDrawItemUnderline(a1, a2, a3, a4, a5, SourceString, PrefixCount);
  }
LABEL_21:
  result = (WCHAR *)v23;
  if ( SourceString != (WCHAR *)v23 )
    return (WCHAR *)PopAndFreeAlwaysW32ThreadLock((__int64)&v21);
  return result;
}
