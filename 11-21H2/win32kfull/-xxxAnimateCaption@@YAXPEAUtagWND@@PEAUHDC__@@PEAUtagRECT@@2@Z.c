/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023D3F4
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1C023DA38 (xxxDrawAnimatedRects.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     GetWindowBorders @ 0x1C00BB5A4 (GetWindowBorders.c)
 *     _WindowFromDC @ 0x1C00EE034 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023D314 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int DpiForSystem; // eax
  LONG v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  HDC CompatibleDC; // rdi
  LONG left; // ecx
  LONG top; // eax
  LONG v17; // ebp
  LONG v18; // r14d
  int v19; // r15d
  int v20; // esi
  int WindowBorders; // r12d
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // eax
  int DpiDependentMetric; // eax
  int v26; // edx
  unsigned int v27; // edx
  struct tagWND *v28; // r12
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // r15d
  __int64 i; // rax
  int v39; // r8d
  unsigned int v40; // ecx
  unsigned __int16 v41; // cx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // [rsp+60h] [rbp-C8h]
  int v47; // [rsp+64h] [rbp-C4h]
  int v48; // [rsp+68h] [rbp-C0h]
  LONG v49; // [rsp+6Ch] [rbp-BCh]
  int v50; // [rsp+6Ch] [rbp-BCh]
  LONG v51; // [rsp+70h] [rbp-B8h]
  int v52; // [rsp+70h] [rbp-B8h]
  int v53; // [rsp+74h] [rbp-B4h]
  int BugCheckParameter2a; // [rsp+78h] [rbp-B0h]
  const struct tagWND *v56; // [rsp+80h] [rbp-A8h]
  int v57; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v59; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v61; // [rsp+90h] [rbp-98h]
  __int64 v62; // [rsp+98h] [rbp-90h]
  __int64 CompatibleBitmapInternal; // [rsp+A0h] [rbp-88h]
  __int128 v64; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-70h]
  struct tagRECT v66; // [rsp+C0h] [rbp-68h] BYREF

  v65 = 0LL;
  v66.right = 0;
  v64 = 0LL;
  v56 = WindowFromDC(a2);
  if ( v56 )
  {
    DpiForSystem = GetDpiForSystem(v9, v8);
    v11 = GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    if ( !gProtocolType && (*(_DWORD *)(gpsi + 2236LL) & 2) == 0 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(ghdcMem, gpsi, v12, v13);
      if ( CompatibleDC )
      {
        left = a4->left;
        top = a4->top;
        v17 = a3->top;
        v18 = a3->left;
        v19 = a4->right - a4->left;
        v49 = left;
        v20 = a3->right - a3->left;
        v51 = top;
        WindowBorders = GetWindowBorders(
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                          *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL));
        v24 = GetDpiForSystem(v23, v22);
        DpiDependentMetric = GetDpiDependentMetric(2LL, v24);
        v26 = 2 * WindowBorders;
        if ( a3->bottom - v17 > DpiDependentMetric )
        {
          v18 += WindowBorders;
          v17 += WindowBorders;
          v20 -= v26;
        }
        if ( a4->bottom - v51 > DpiDependentMetric )
        {
          v49 += WindowBorders;
          v51 += WindowBorders;
          v19 -= v26;
        }
        v66.top = v11;
        v66.left = 0;
        v27 = v19;
        v66.bottom = 2 * v11;
        if ( v20 > v19 )
          v27 = v20;
        v48 = v18;
        v66.right = v27;
        v47 = v17;
        v46 = v20;
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                     *(HDC *)(gpDispInfo + 56LL),
                                     v27,
                                     2 * v11,
                                     0,
                                     0LL,
                                     0LL);
        v28 = v56;
        v62 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        ThreadLock((__int64)v56, (__int64 *)&v64);
        if ( gbDisableAlpha || (v29 = 45, ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010) )
          v29 = 13;
        xxxDrawCaptionTemp((unsigned __int64 *)a1, CompatibleDC, &v66, 0LL, 0LL, 0LL, v29);
        EnterRenderBlock();
        UserSessionSwitchLeaveCrit(v30);
        EnterSharedCrit(v32, v31, v33);
        EnterSharedRenderCrit();
        v59 = SaveScreen(v56, 0, 0LL, v18, v17, v20, v11);
        if ( v59
          || (v34 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v20, v11, a2, v18, v17, 13369376, 0, 0), v36 = 0LL, v34) )
        {
          v50 = v49 - v18;
          v52 = v51 - v17;
          v37 = v19 - v20;
          v61 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          NtGdiBitBltInternal(a2, v18, v17, v20, v11, CompatibleDC, 0, v11, 13369376, 0, 0);
          for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
          {
            v41 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v61;
            if ( v41 > 0xFAu )
              break;
            v39 = v41;
            v40 = (int)((unsigned __int64)(274877907LL * (v50 * v41 + 125)) >> 32) >> 4;
            v53 = v18 + (v40 >> 31) + v40;
            BugCheckParameter2a = v17 + (v52 * v39 + 125) / 250;
            v57 = v20 + (v37 * v39 + 125) / 250;
            UserSleep(1LL);
            if ( v59 )
            {
              SaveScreen(v28, 1u, v59, v48, v47, v46, v11);
              v59 = SaveScreen(v28, 0, 0LL, v53, BugCheckParameter2a, v57, v11);
            }
            else
            {
              NtGdiBitBltInternal(a2, v48, v47, v46, v11, CompatibleDC, 0, 0, 13369376, 0, 0);
              NtGdiBitBltInternal(CompatibleDC, 0, 0, v57, v11, a2, v53, BugCheckParameter2a, 13369376, 0, 0);
            }
            v46 = v57;
            v47 = BugCheckParameter2a;
            v48 = v53;
            NtGdiBitBltInternal(a2, v53, BugCheckParameter2a, v57, v11, CompatibleDC, 0, v11, 13369376, 0, 0);
          }
          if ( v59 )
            SaveScreen(v28, 1u, v59, v48, v47, v46, v11);
          else
            NtGdiBitBltInternal(a2, v48, v47, v46, v11, CompatibleDC, 0, 0, 13369376, 0, 0);
        }
        LeaveRenderBlock(v35, v36);
        LeaveRenderCrit();
        UserSessionSwitchLeaveCrit(v42);
        EnterCrit(1LL, 0LL);
        ThreadUnlock1(v44, v43, v45);
        GreSelectBitmap(CompatibleDC, v62);
        GreDeleteObject(CompatibleBitmapInternal);
        GreDeleteDC(CompatibleDC);
      }
    }
  }
}
