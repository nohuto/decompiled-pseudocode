/*
 * XREFs of ?GetTargetId@CHolographicInteropTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180108848
 * Callers:
 *     ?GetTargetId@CHolographicInteropTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1801214D0 (-GetTargetId@CHolographicInteropTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CHolographicInteropTarget::GetTargetId(
        CHolographicInteropTarget *this)
{
  return (CHolographicInteropTarget *)((char *)this - 128);
}
