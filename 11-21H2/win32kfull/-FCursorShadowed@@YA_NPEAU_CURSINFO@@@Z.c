/*
 * XREFs of ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1C00732EC
 * Callers:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0072F4C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00B2D30 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FCursorShadowed(struct _CURSINFO *a1)
{
  char v1; // r8

  v1 = 0;
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == 0x80002000 )
    return (*(_DWORD *)a1 & 0x200) != 0;
  return v1;
}
