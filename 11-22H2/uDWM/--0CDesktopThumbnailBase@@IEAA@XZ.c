/*
 * XREFs of ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180003388
 * Callers:
 *     ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800032A0 (-Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z @ 0x1800B63EC (-Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z.c)
 *     ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180107F68 (-Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800221E0 (--0CVisual@@IEAA@XZ.c)
 */

CDesktopThumbnailBase *__fastcall CDesktopThumbnailBase::CDesktopThumbnailBase(CDesktopThumbnailBase *this)
{
  __int64 v1; // rcx
  CDesktopThumbnailBase *result; // rax

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CDesktopThumbnailBase::`vftable';
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_DWORD *)(v1 + 272) = 0;
  result = (CDesktopThumbnailBase *)v1;
  *(_QWORD *)(v1 + 280) = -1LL;
  return result;
}
