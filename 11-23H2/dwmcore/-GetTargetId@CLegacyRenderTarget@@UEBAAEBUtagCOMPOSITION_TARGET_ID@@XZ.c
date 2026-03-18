/*
 * XREFs of ?GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180105EBC
 * Callers:
 *     ?GetTargetId@CLegacyRenderTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x18011C5D0 (-GetTargetId@CLegacyRenderTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CLegacyRenderTarget@@$4PPPPPPPM@BA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x18011C5F0 (-GetTargetId@CLegacyRenderTarget@@$4PPPPPPPM@BA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CLegacyRenderTarget::GetTargetId(CLegacyRenderTarget *this)
{
  return (CLegacyRenderTarget *)((char *)this - 320);
}
