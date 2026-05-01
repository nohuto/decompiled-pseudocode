/*
 * XREFs of ??0APP_SIZE_CONSTRAINTS@@QEAA@AEBUCSize@Geometry@@0I@Z @ 0x18015A384
 * Callers:
 *     ?GetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEBA?AUAPP_SIZE_CONSTRAINTS@@I@Z @ 0x18014A560 (-GetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEBA-AUAPP_SIZE_CONSTRAINTS@@I@Z.c)
 * Callees:
 *     <none>
 */

APP_SIZE_CONSTRAINTS *__fastcall APP_SIZE_CONSTRAINTS::APP_SIZE_CONSTRAINTS(
        APP_SIZE_CONSTRAINTS *this,
        const struct Geometry::CSize *a2,
        const struct Geometry::CSize *a3,
        int a4)
{
  int v6; // ebx
  int v7; // ebx

  *(_QWORD *)this = AppSizeConstraintsCache::s_defaultMinSize;
  *((_QWORD *)this + 1) = AppSizeConstraintsCache::s_defaultMaxSize;
  v6 = MulDiv(*((_DWORD *)this + 1), a4, 96);
  *(_QWORD *)this = __PAIR64__(v6, MulDiv(*(_DWORD *)this, a4, 96));
  v7 = MulDiv(*((_DWORD *)this + 3), a4, 96);
  *((_QWORD *)this + 1) = __PAIR64__(v7, MulDiv(*((_DWORD *)this + 2), a4, 96));
  return this;
}
