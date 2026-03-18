/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C004D030
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00903C4 (IsTopLevelOrLayeredChildWindow.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00FE1A0 (GetAppCompatFlags2QuadWord.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C014E298 (DwmSyncGetCompositionAttribute.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C016DF68 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x1C0212958 (-GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C025A1E4 (_W32ExceptionHandler.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, __m128i *a2)
{
  __int64 v2; // r12
  NTSTATUS WindowMinimizeAnimation; // esi
  __int64 v4; // rdi
  ULONG64 v5; // rcx
  __int64 CurrentProcessWow64Process; // rax
  ULONG v7; // r8d
  void *v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  const struct tagWND *v11; // r14
  int v12; // r12d
  const struct tagWND *v13; // rbx
  int v14; // r15d
  __int128 *Prop; // r10
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  const struct tagWND *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // r15d
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // ebx
  int v29; // eax
  bool v30; // al
  __int64 v31; // rcx
  void *v32; // rcx
  struct tagRECT *v33; // rax
  __int64 v34; // rcx
  const struct tagWND *v35; // r8
  __int64 v36; // rax
  ULONG v37; // r8d
  _DWORD *v38; // rbx
  bool v39; // sf
  ULONG v40; // eax
  int v42; // [rsp+30h] [rbp-118h]
  void *v43; // [rsp+40h] [rbp-108h]
  int v44; // [rsp+48h] [rbp-100h]
  __int128 Src; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-E8h]
  NTSTATUS v47; // [rsp+68h] [rbp-E0h]
  __int64 v48; // [rsp+70h] [rbp-D8h]
  __int64 v49; // [rsp+78h] [rbp-D0h]
  size_t Size; // [rsp+80h] [rbp-C8h]
  __m128i v51; // [rsp+88h] [rbp-C0h] BYREF
  volatile void *Address[2]; // [rsp+98h] [rbp-B0h]
  SIZE_T v53; // [rsp+A8h] [rbp-A0h]
  SIZE_T Length; // [rsp+C8h] [rbp-80h]
  __int128 v55; // [rsp+D0h] [rbp-78h] BYREF
  __int128 v56; // [rsp+E0h] [rbp-68h]
  __int128 v57; // [rsp+F0h] [rbp-58h]
  __int128 v58; // [rsp+100h] [rbp-48h]

  v2 = a1;
  v48 = a1;
  v49 = a1;
  WindowMinimizeAnimation = -1073741811;
  *(_OWORD *)Address = 0LL;
  v4 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v46 = 0LL;
  v5 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v5 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v51 = *a2;
  Length = a2[1].m128i_u64[0];
  *(__m128i *)Address = v51;
  v53 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
  v7 = 4;
  if ( CurrentProcessWow64Process )
    v7 = 1;
  ProbeForWrite((volatile void *)_mm_srli_si128(v51, 8).m128i_i64[0], (unsigned int)Length, v7);
  if ( (unsigned int)(v51.m128i_i32[0] - 1) <= 0x1D )
  {
    Size = qword_1C02ED3A8[2 * v51.m128i_i32[0]];
    WindowMinimizeAnimation = (unsigned int)Length < Size ? 0xC0000023 : 0;
    v47 = WindowMinimizeAnimation;
  }
  if ( WindowMinimizeAnimation < 0 )
    goto LABEL_111;
  v8 = 0LL;
  v43 = 0LL;
  EnterSharedCrit();
  v9 = ValidateHwnd(v2);
  v11 = (const struct tagWND *)v9;
  if ( !v9 )
    goto LABEL_96;
  if ( LODWORD(Address[0]) == 18 )
  {
    v12 = 0;
    v55 = 0LL;
    v13 = (const struct tagWND *)v9;
    v14 = 0;
    while ( 1 )
    {
      v44 = 0;
      Prop = 0LL;
      v51.m128i_i64[0] = (__int64)v13 + 104;
      v16 = *((_QWORD *)v13 + 13);
      if ( v16 )
      {
        v17 = 0LL;
        v18 = *((_QWORD *)v13 + 3);
        if ( v18 )
        {
          v10 = *(_QWORD *)(v18 + 8);
          if ( v10 )
            v17 = *(_QWORD *)(v10 + 24);
        }
        if ( v16 == v17 )
          goto LABEL_26;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v13 + 5) + 26LL) & 8) != 0 )
      {
        v19 = v13;
        do
        {
          v10 = *((_QWORD *)v19 + 13);
          if ( v10 )
          {
            v20 = 0LL;
            v21 = *((_QWORD *)v19 + 3);
            if ( v21 )
            {
              v22 = *(_QWORD *)(v21 + 8);
              if ( v22 )
                v20 = *(_QWORD *)(v22 + 24);
            }
            if ( v10 == v20 )
              break;
          }
          v19 = (const struct tagWND *)*((_QWORD *)v19 + 13);
        }
        while ( v10 );
        if ( v19 )
        {
LABEL_26:
          Prop = (__int128 *)GetProp(v13, (unsigned __int16)atomDWMProp, 1LL);
          v44 = 1;
        }
      }
      if ( Prop )
      {
        v55 = *Prop;
        v23 = v55;
      }
      else
      {
        v10 = ((unsigned __int64)GetAppCompatFlags2QuadWord(*((_QWORD *)v13 + 2)) >> 3) & 0x40000;
        v23 = v14 & 0xFFF90000 | v10;
      }
      v14 = v23 & 0x7FFFF;
      if ( v44 )
      {
        v10 = 0LL;
        if ( (v14 & 0x400) != 0 || (v14 & 0x2000) != 0 )
          v10 = 1LL;
        v12 = v10 | 2;
        if ( (v14 & 0x800) == 0 )
          v12 = v10;
        if ( v12 )
          break;
      }
      v13 = *(const struct tagWND **)v51.m128i_i64[0];
      if ( !*(_QWORD *)v51.m128i_i64[0] )
        goto LABEL_41;
    }
    if ( v13 != v11 )
      v12 |= 4u;
LABEL_41:
    LODWORD(Src) = v12;
    v8 = 0LL;
    v2 = v48;
    goto LABEL_45;
  }
  if ( LODWORD(Address[0]) == 21 )
  {
    v24 = (*(_DWORD *)(v9 + 320) >> 11) & 1;
LABEL_44:
    LODWORD(Src) = v24;
    goto LABEL_45;
  }
  v25 = *(_QWORD *)(v9 + 104);
  if ( !v25 )
    goto LABEL_115;
  v10 = 0LL;
  v26 = *((_QWORD *)v11 + 3);
  if ( v26 )
  {
    v27 = *(_QWORD *)(v26 + 8);
    if ( v27 )
      v10 = *(_QWORD *)(v27 + 24);
  }
  if ( v25 != v10 )
  {
LABEL_115:
    if ( LODWORD(Address[0]) != 20 || !(unsigned int)IsTopLevelOrLayeredChildWindow(v11) )
      goto LABEL_96;
  }
  if ( LODWORD(Address[0]) != 1 )
  {
    switch ( LODWORD(Address[0]) )
    {
      case 0x14:
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v58 = 0LL;
        if ( (unsigned int)_GetWindowCompositionInfo(v11, (struct WINDOWCOMPOSITIONINFO *)&v55) && (v55 & 0x1000) != 0 )
          LODWORD(Src) = 1;
        goto LABEL_45;
      case 0x17:
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v58 = 0LL;
        if ( (unsigned int)_GetWindowCompositionInfo(v11, (struct WINDOWCOMPOSITIONINFO *)&v55) && (v55 & 0x2000) != 0 )
          LODWORD(Src) = 1;
        goto LABEL_45;
      case 0x18:
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v58 = 0LL;
        if ( (unsigned int)_GetWindowCompositionInfo(v11, (struct WINDOWCOMPOSITIONINFO *)&v55) && (v55 & 0x4000) != 0 )
          LODWORD(Src) = 1;
        goto LABEL_45;
      case 0x19:
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v58 = 0LL;
        if ( (unsigned int)_GetWindowCompositionInfo(v11, (struct WINDOWCOMPOSITIONINFO *)&v55) && (v55 & 0x8000) != 0 )
          LODWORD(Src) = 1;
        goto LABEL_45;
      case 0x1A:
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v58 = 0LL;
        if ( (unsigned int)_GetWindowCompositionInfo(v11, (struct WINDOWCOMPOSITIONINFO *)&v55) && (v55 & 0x10000) != 0 )
          LODWORD(Src) = 1;
        goto LABEL_45;
      case 0x1B:
        WindowMinimizeAnimation = GetWindowMinimizeAnimation(v11, (enum CORNER_STYLE *)&Src);
        goto LABEL_45;
      case 0x1D:
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v58 = 0LL;
        if ( (unsigned int)_GetWindowCompositionInfo(v11, (struct WINDOWCOMPOSITIONINFO *)&v55) && (v55 & 0x20000) != 0 )
          LODWORD(Src) = 1;
        goto LABEL_45;
      case 0x1E:
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v58 = 0LL;
        if ( (unsigned int)_GetWindowCompositionInfo(v11, (struct WINDOWCOMPOSITIONINFO *)&v55) )
        {
          v24 = DWORD2(v58);
          goto LABEL_44;
        }
        goto LABEL_45;
    }
    if ( (unsigned int)IsWindowDesktopComposed(v11) )
      goto LABEL_45;
LABEL_96:
    WindowMinimizeAnimation = -1073741816;
    goto LABEL_97;
  }
  v28 = 0;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  if ( (unsigned int)_GetWindowCompositionInfo(v11, (struct WINDOWCOMPOSITIONINFO *)&v55) )
  {
    v10 = *((_QWORD *)v11 + 5);
    v29 = *(_DWORD *)(v10 + 24);
    if ( ((v29 & 0x80000) == 0 || (v29 & 0x20000000) != 0) && (v55 & 1) == 0 )
    {
      if ( DWORD1(v55) )
      {
        if ( DWORD1(v55) == 2 )
        {
          LODWORD(Src) = 1;
          goto LABEL_45;
        }
      }
      else
      {
        v10 = *(unsigned __int8 *)(v10 + 30);
        v30 = (v10 & 0xC0) != 0xC0;
        LOBYTE(v10) = ~((unsigned __int8)v10 >> 2);
        if ( ((unsigned __int8)v10 & v30 & 1) == 0 )
          v28 = 1;
      }
    }
  }
  LODWORD(Src) = v28;
LABEL_45:
  if ( WindowMinimizeAnimation >= 0 )
  {
    v8 = (void *)ReferenceDwmApiPort();
    v43 = v8;
  }
LABEL_97:
  UserSessionSwitchLeaveCrit(v10);
  if ( WindowMinimizeAnimation < 0 )
  {
LABEL_108:
    v32 = v43;
  }
  else
  {
    switch ( LODWORD(Address[0]) )
    {
      case 1:
      case 0x12:
      case 0x14:
      case 0x15:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1D:
      case 0x1E:
        goto LABEL_108;
      case 5:
        break;
      case 8:
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_UseWin32kMargins__private_reporting,
          0x1B65B59u,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
          1,
          v42);
        EnterSharedCrit();
        v33 = (struct tagRECT *)ValidateHwnd(v2);
        if ( v33 )
        {
          Src = (__int128)*WindowMargins::GetPhysicalFrameBounds((WindowMargins *)&v51, v33, v35);
          WindowMinimizeAnimation = 0;
        }
        else
        {
          WindowMinimizeAnimation = -1073741816;
        }
        UserSessionSwitchLeaveCrit(v34);
        goto LABEL_108;
      case 0xC:
        v36 = PsGetCurrentProcessWow64Process(v31);
        v37 = 4;
        if ( v36 )
          v37 = 1;
        v38 = Address[1];
        ProbeForRead(Address[1], 4uLL, v37);
        LODWORD(Src) = *v38;
        break;
      default:
        WindowMinimizeAnimation = -1073741811;
        goto LABEL_108;
    }
    WindowMinimizeAnimation = DwmSyncGetCompositionAttribute(v8);
    v32 = 0LL;
  }
  DereferenceDwmApiPort(v32);
  if ( WindowMinimizeAnimation < 0 )
  {
LABEL_111:
    v40 = RtlNtStatusToDosError(WindowMinimizeAnimation);
    UserSetLastError(v40);
    v39 = WindowMinimizeAnimation < 0;
    goto LABEL_112;
  }
  memmove((void *)Address[1], &Src, Size);
  v39 = WindowMinimizeAnimation < 0;
LABEL_112:
  LOBYTE(v4) = !v39;
  return v4;
}
