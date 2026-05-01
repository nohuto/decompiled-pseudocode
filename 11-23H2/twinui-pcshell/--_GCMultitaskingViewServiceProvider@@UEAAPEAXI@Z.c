/*
 * XREFs of ??_GCMultitaskingViewServiceProvider@@UEAAPEAXI@Z @ 0x18054945C
 * Callers:
 *     ??_ECMultitaskingViewServiceProvider@@WBI@EAAPEAXI@Z @ 0x1802A30B0 (--_ECMultitaskingViewServiceProvider@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x180549324 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 */

CMultitaskingViewServiceProvider *__fastcall CMultitaskingViewServiceProvider::`scalar deleting destructor'(
        CMultitaskingViewServiceProvider *this,
        char a2)
{
  CMultitaskingViewServiceProvider::~CMultitaskingViewServiceProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
