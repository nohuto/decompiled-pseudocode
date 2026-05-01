/*
 * XREFs of ??_GCMultitaskingViewHotKeyHandler@@UEAAPEAXI@Z @ 0x1801BB200
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMultitaskingViewHotKeyHandler@@UEAA@XZ @ 0x1801BB23C (--1CMultitaskingViewHotKeyHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CMultitaskingViewHotKeyHandler *__fastcall CMultitaskingViewHotKeyHandler::`scalar deleting destructor'(
        CMultitaskingViewHotKeyHandler *this,
        char a2)
{
  CMultitaskingViewHotKeyHandler::~CMultitaskingViewHotKeyHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
