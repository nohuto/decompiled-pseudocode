/*
 * XREFs of ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x1800E4240
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180028C20 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x180010000 (-CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180029520 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801077F0 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ApplyMaximizedClip(CTopLevelWindow *this, HRGN a2)
{
  signed int v2; // ebx
  LONG v4; // r8d
  LONG v5; // r9d
  LONG v6; // eax
  LONG v7; // eax
  HRGN v8; // rsi
  signed int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // r8d
  signed int LastError; // eax
  struct tagRECT v15; // [rsp+30h] [rbp-18h] BYREF
  HRGN v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v16 = 0LL;
  if ( (*((_BYTE *)this + 248) & 4) != 0 )
  {
    v4 = *((_DWORD *)this + 165);
    v5 = *((_DWORD *)this + 167);
    v15.left = v4;
    v15.top = v5;
    v6 = *((_DWORD *)this + 32) - *((_DWORD *)this + 166);
    if ( v4 > v6 )
      v6 = v4;
    v15.right = v6;
    v7 = *((_DWORD *)this + 33) - *((_DWORD *)this + 168);
    if ( v5 > v7 )
      v7 = v5;
    v15.bottom = v7;
    SetLastError(0);
    v16 = CreateRectRgnCoerceInvalid(&v15);
    v8 = v16;
    if ( v16 )
    {
      SetLastError(0);
      if ( !CombineRgn(a2, a2, v8, 1) )
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A480, 10LL, v2, 0x1347u);
      }
    }
    else
    {
      v9 = GetLastError();
      v2 = v9;
      if ( v9 > 0 )
        v2 = (unsigned __int16)v9 | 0x80070000;
      if ( v2 >= 0 )
        v2 = CheckGUIHandleQuota(v11, v10, v12);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011A480, 10LL, v2, 0x1345u);
    }
  }
  ReleaseGDIObject<HRGN__ *>((void **)&v16);
  return (unsigned int)v2;
}
