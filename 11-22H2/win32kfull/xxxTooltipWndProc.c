/*
 * XREFs of xxxTooltipWndProc @ 0x1C001FBD0
 * Callers:
 *     <none>
 * Callees:
 *     InitTooltipDelay @ 0x1C001C208 (InitTooltipDelay.c)
 *     xxxValidateClassAndSize @ 0x1C0020EA4 (xxxValidateClassAndSize.c)
 *     xxxDefWindowProc @ 0x1C0020FF0 (xxxDefWindowProc.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0040C9C (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00BD578 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxBeginPaint @ 0x1C00CDA00 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00CEAA0 (xxxEndPaint.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BBFB0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1C01BCD50 (StopFade.c)
 *     zzzStartFade @ 0x1C01BD520 (zzzStartFade.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C022537C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C02255E8 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0225DAC (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0225E60 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxTooltipWndProc(struct tagWND *a1, int a2, HDC a3, __int64 a4)
{
  __int64 v8; // rbx
  int v10; // eax
  HDC FadeInternal; // rax
  unsigned int v12; // r8d
  unsigned int v13; // edx
  ULONG_PTR v14; // rcx
  __int64 v15; // [rsp+50h] [rbp-98h] BYREF
  HDC v16[10]; // [rsp+60h] [rbp-88h] BYREF

  memset_0(v16, 0, 0x48uLL);
  v15 = 0LL;
  if ( (unsigned int)xxxValidateClassAndSize((_DWORD)a1, a2, (_DWORD)a3, a4, 694, 129, (__int64)&v15) )
  {
    v8 = *((_QWORD *)a1 + 35);
    *(_QWORD *)v8 = a1;
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 && a2 != 130 )
      return xxxDefWindowProc(a1);
    switch ( a2 )
    {
      case 15:
        xxxBeginPaint(a1);
        xxxTooltipRender((struct tagTOOLTIPWND *)v8, v16[0]);
        xxxEndPaint(a1, v16);
        break;
      case 20:
        break;
      case 71:
        v10 = *(_DWORD *)(a4 + 32);
        if ( (v10 & 0x40) == 0 )
        {
          if ( (v10 & 0x80u) != 0 )
          {
            if ( (gfade[12] & 0x20) != 0 )
              StopFade();
            else
              DestroyTooltipBitmap((struct tagTOOLTIPWND *)v8);
          }
          return xxxDefWindowProc(a1);
        }
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
        {
LABEL_26:
          v12 = *(_DWORD *)(v8 + 12);
LABEL_28:
          v13 = 2;
LABEL_30:
          SetTooltipTimer((struct tagTOOLTIPWND *)v8, v13, v12);
          return xxxDefWindowProc(a1);
        }
        if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
        {
          if ( !(unsigned int)CreateTooltipBitmap(
                                (struct tagTOOLTIPWND *)v8,
                                *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL),
                                *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL)) )
            goto LABEL_27;
          FadeInternal = *(HDC *)(v8 + 16);
        }
        else
        {
          FadeInternal = CreateFadeInternal(a1, 0LL, 0x87u, 0x21u, 0);
        }
        if ( FadeInternal )
        {
          v14 = *(_QWORD *)v8;
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v14, 0, 0, 0LL, 1, 1);
          if ( (gfade[12] & 0x20) == 0 )
          {
            v13 = 3;
            v12 = 20;
            *(_DWORD *)(v8 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            goto LABEL_30;
          }
          zzzStartFade();
          goto LABEL_26;
        }
LABEL_27:
        v12 = 0;
        goto LABEL_28;
      default:
        switch ( a2 )
        {
          case 129:
            InitTooltipDelay(v8);
            InitTooltipAnimation((struct tagTOOLTIPWND *)v8);
            return xxxDefWindowProc(a1);
          case 130:
            DestroyTooltipBitmap((struct tagTOOLTIPWND *)v8);
            if ( *(_QWORD *)(v8 + 16) )
              GreDeleteDC();
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 24LL) + 48LL) &= 0xFFFFFCFF;
            return xxxDefWindowProc(a1);
          case 280:
            xxxTooltipHandleTimer((struct tagTOOLTIPWND *)v8, (unsigned int)a3);
            break;
          case 792:
            xxxTooltipRender((struct tagTOOLTIPWND *)v8, a3);
            break;
          default:
            return xxxDefWindowProc(a1);
        }
        return 0LL;
    }
    return 0LL;
  }
  return v15;
}
