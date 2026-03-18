/*
 * XREFs of ??_GCWICBitmapRealization@@UEAAPEAXI@Z @ 0x180101440
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x180032C6C (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

CWICBitmapRealization *__fastcall CWICBitmapRealization::`scalar deleting destructor'(
        CWICBitmapRealization *this,
        char a2)
{
  CD2DBitmapCache::~CD2DBitmapCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
