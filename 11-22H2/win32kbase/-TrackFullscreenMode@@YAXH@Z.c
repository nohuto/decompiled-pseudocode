/*
 * XREFs of ?TrackFullscreenMode@@YAXH@Z @ 0x1C0012418
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0012540 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0135D48 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackFullscreenMode(int a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  if ( a1 )
    v1 = *((_QWORD *)gptiCurrent + 53);
  gppiFullscreen = v1;
}
