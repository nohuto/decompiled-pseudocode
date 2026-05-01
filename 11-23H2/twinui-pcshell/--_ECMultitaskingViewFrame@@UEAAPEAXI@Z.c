/*
 * XREFs of ??_ECMultitaskingViewFrame@@UEAAPEAXI@Z @ 0x18056CB80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CMultitaskingViewFrame@@UEAA@XZ @ 0x18056C85C (--1CMultitaskingViewFrame@@UEAA@XZ.c)
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
