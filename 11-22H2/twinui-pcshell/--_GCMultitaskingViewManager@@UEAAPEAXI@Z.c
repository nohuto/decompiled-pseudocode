/*
 * XREFs of ??_GCMultitaskingViewManager@@UEAAPEAXI@Z @ 0x180148420
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x180145494 (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CMultitaskingViewManager *__fastcall CMultitaskingViewManager::`scalar deleting destructor'(
        CMultitaskingViewManager *this,
        char a2)
{
  CMultitaskingViewManager::~CMultitaskingViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1E8uLL);
  return this;
}
