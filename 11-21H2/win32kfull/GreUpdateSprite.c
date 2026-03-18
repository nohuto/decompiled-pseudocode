/*
 * XREFs of GreUpdateSprite @ 0x1C0020E98
 * Callers:
 *     UpdateSprite @ 0x1C0020D60 (UpdateSprite.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0037530 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C01541E4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C01547D8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E22D4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026B85C (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027DD98 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     bMoveDevDragRect @ 0x1C02823D0 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C02826A4 (bMoveDevPreviewRect.c)
 * Callees:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0037EE0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 */

__int64 __fastcall GreUpdateSprite(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15)
{
  NTSTATUS v20; // eax
  unsigned int v21; // ecx
  _QWORD Parameter[11]; // [rsp+88h] [rbp-69h] BYREF
  unsigned int v23; // [rsp+E0h] [rbp-11h]
  unsigned int v24; // [rsp+E4h] [rbp-Dh]
  int v25; // [rsp+E8h] [rbp-9h]
  int v26; // [rsp+ECh] [rbp-5h]
  __int64 v27; // [rsp+F0h] [rbp-1h]

  if ( !(unsigned int)GreStackExpansionRequired(0x2000LL) )
    return GreUpdateSpriteInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  Parameter[4] = a5;
  Parameter[5] = a6;
  Parameter[6] = a7;
  Parameter[7] = a8;
  Parameter[8] = a10;
  Parameter[9] = a12;
  Parameter[10] = a13;
  v23 = a9;
  v24 = a11;
  v25 = a14;
  v26 = a15;
  v27 = 0LL;
  Parameter[0] = a1;
  Parameter[1] = a2;
  Parameter[2] = a3;
  Parameter[3] = a4;
  v20 = KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, Parameter, 0x2000uLL, 1u, 0LL);
  v21 = v27;
  if ( v20 < 0 )
    return 0;
  return v21;
}
