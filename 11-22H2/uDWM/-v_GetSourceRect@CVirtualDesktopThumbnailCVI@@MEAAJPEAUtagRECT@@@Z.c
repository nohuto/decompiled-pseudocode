/*
 * XREFs of ?v_GetSourceRect@CVirtualDesktopThumbnailCVI@@MEAAJPEAUtagRECT@@@Z @ 0x180058D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopThumbnailCVI::v_GetSourceRect(CVirtualDesktopThumbnailCVI *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 56);
  return result;
}
