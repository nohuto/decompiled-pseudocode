/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02243DC
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C0224A30 (xxxDrawAnimatedRects.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0057310 (GreCreateCompatibleBitmapInternal.c)
 *     GetWindowBorders @ 0x1C00C6A7C (GetWindowBorders.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     _WindowFromDC @ 0x1C01BDF48 (_WindowFromDC.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C02242FC (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, __int64 *a2, struct tagRECT *a3, struct tagRECT *a4)
{
  __int64 v8; // rcx
  int DpiForSystem; // eax
  int v10; // ebx
  HDC CompatibleDC; // rdi
  LONG left; // ecx
  LONG top; // eax
  LONG v14; // ebp
  LONG v15; // r14d
  int v16; // r15d
  int v17; // esi
  int WindowBorders; // r12d
  __int64 v19; // rcx
  int v20; // eax
  int DpiDependentMetric; // eax
  int v22; // edx
  unsigned int v23; // edx
  struct tagWND *v24; // r12
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // r15d
  __int64 i; // rax
  int v38; // r8d
  unsigned int v39; // ecx
  unsigned __int16 v40; // cx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int64 v48; // [rsp+60h] [rbp-C8h]
  int v49; // [rsp+68h] [rbp-C0h]
  LONG v50; // [rsp+6Ch] [rbp-BCh]
  int v51; // [rsp+6Ch] [rbp-BCh]
  LONG v52; // [rsp+70h] [rbp-B8h]
  int v53; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v54; // [rsp+74h] [rbp-B4h]
  const struct tagWND *v56; // [rsp+80h] [rbp-A8h]
  int v57; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v59; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v61; // [rsp+90h] [rbp-98h]
  __int64 v62; // [rsp+98h] [rbp-90h]
  __int64 CompatibleBitmapInternal; // [rsp+A0h] [rbp-88h]
  __int128 v64; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-70h]
  _DWORD v66[2]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned int v67; // [rsp+C8h] [rbp-60h]
  int v68; // [rsp+CCh] [rbp-5Ch]

  v65 = 0LL;
  v67 = 0;
  v64 = 0LL;
  v56 = WindowFromDC(a2);
  if ( v56 )
  {
    DpiForSystem = GetDpiForSystem(v8);
    v10 = GetDpiDependentMetric(2, DpiForSystem) - 1;
    if ( !gProtocolType && (*(_DWORD *)(gpsi + 2236LL) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(ghdcMem);
      if ( CompatibleDC )
      {
        left = a4->left;
        top = a4->top;
        v14 = a3->top;
        v15 = a3->left;
        v16 = a4->right - a4->left;
        v50 = left;
        v17 = a3->right - a3->left;
        v52 = top;
        WindowBorders = GetWindowBorders(
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL));
        v20 = GetDpiForSystem(v19);
        DpiDependentMetric = GetDpiDependentMetric(2, v20);
        v22 = 2 * WindowBorders;
        if ( a3->bottom - v14 > DpiDependentMetric )
        {
          v15 += WindowBorders;
          v14 += WindowBorders;
          v17 -= v22;
        }
        if ( a4->bottom - v52 > DpiDependentMetric )
        {
          v50 += WindowBorders;
          v52 += WindowBorders;
          v16 -= v22;
        }
        v66[1] = v10;
        v66[0] = 0;
        v23 = v16;
        v68 = 2 * v10;
        if ( v17 > v16 )
          v23 = v17;
        v49 = v15;
        v67 = v23;
        v48 = __PAIR64__(v14, v17);
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                     *(_QWORD *)(gpDispInfo + 56LL),
                                     v23,
                                     2 * v10,
                                     0,
                                     0LL,
                                     0LL);
        v24 = v56;
        v62 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        ThreadLock(v56, &v64);
        if ( gbDisableAlpha || (v25 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v25 = 13;
        xxxDrawCaptionTemp(a1, CompatibleDC, v66, 0LL, 0LL, 0LL, v25);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
        EnterSharedCrit(v31, v30, v32);
        EnterSharedRenderCrit();
        v59 = SaveScreen(v56, 0, 0LL, v15, v14, v17, v10);
        if ( v59
          || (v33 = NtGdiBitBltInternal((__int64)CompatibleDC, 0, 0, v17, v10, (HDC)a2, v15, v14, 13369376, 0, 0),
              v35 = 0LL,
              v33) )
        {
          v51 = v50 - v15;
          v53 = v52 - v14;
          v36 = v16 - v17;
          v61 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal((__int64)a2, v15, v14, v17, v10, CompatibleDC, 0, v10, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v40 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v61;
            if ( v40 > 0xFAu )
              break;
            v38 = v40;
            v39 = (int)((unsigned __int64)(274877907LL * (v51 * v40 + 125)) >> 32) >> 4;
            v57 = v15 + (v39 >> 31) + v39;
            HIDWORD(v54) = v14 + (v53 * v38 + 125) / 250;
            LODWORD(v54) = v17 + (v36 * v38 + 125) / 250;
            UserSleep(1LL);
            if ( v59 )
            {
              SaveScreen(v24, 1u, v59, v49, SHIDWORD(v48), v48, v10);
              v48 = v54;
              v49 = v57;
              v59 = SaveScreen(v24, 0, 0LL, v57, SHIDWORD(v54), v54, v10);
            }
            else
            {
              NtGdiBitBltInternal((__int64)a2, v49, SHIDWORD(v48), v48, v10, CompatibleDC, 0, 0, 13369376, 0, 0);
              v48 = v54;
              v49 = v57;
              NtGdiBitBltInternal((__int64)CompatibleDC, 0, 0, v54, v10, (HDC)a2, v57, SHIDWORD(v54), 13369376, 0, 0);
            }
            NtGdiBitBltInternal((__int64)a2, v57, SHIDWORD(v54), v54, v10, CompatibleDC, 0, v10, 13369376, 0, 0);
          }
          if ( v59 )
            SaveScreen(v24, 1u, v59, v49, SHIDWORD(v48), v48, v10);
          else
            NtGdiBitBltInternal((__int64)a2, v49, SHIDWORD(v48), v48, v10, CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v34, v35);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v42, v41, v43, v44);
        EnterCrit(1LL, 0LL);
        ThreadUnlock1(v46, v45, v47);
        GreSelectBitmap(CompatibleDC, v62);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
