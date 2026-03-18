/*
 * XREFs of ?TryGetClipPlaneInfo@CDrawingContext@@QEBAPEAVClipPlaneInfoRef@@XZ @ 0x1801D6B64
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18003E2F0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     <none>
 */

struct ClipPlaneInfoRef *__fastcall CDrawingContext::TryGetClipPlaneInfo(CDrawingContext *this)
{
  __int64 v1; // rdx
  struct ClipPlaneInfoRef *result; // rax

  v1 = *((_QWORD *)this + 428);
  result = 0LL;
  if ( v1 )
    return *(struct ClipPlaneInfoRef **)(v1 + 256);
  return result;
}
