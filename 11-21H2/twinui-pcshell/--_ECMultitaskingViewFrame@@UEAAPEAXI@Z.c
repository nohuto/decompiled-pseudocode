/*
 * XREFs of ??_ECMultitaskingViewFrame@@UEAAPEAXI@Z @ 0x1804B01D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CMultitaskingViewFrame@@UEAA@XZ @ 0x1804AFF10 (--1CMultitaskingViewFrame@@UEAA@XZ.c)
 */

CMultitaskingViewFrame *__fastcall CMultitaskingViewFrame::`vector deleting destructor'(
        CMultitaskingViewFrame *this,
        char a2)
{
  CMultitaskingViewFrame::~CMultitaskingViewFrame(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
