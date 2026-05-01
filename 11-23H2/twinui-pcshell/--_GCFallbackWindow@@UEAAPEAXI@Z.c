/*
 * XREFs of ??_GCFallbackWindow@@UEAAPEAXI@Z @ 0x18006ECE4
 * Callers:
 *     ??_ECFallbackWindow@@WBI@EAAPEAXI@Z @ 0x18028FE80 (--_ECFallbackWindow@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CFallbackWindow@@UEAA@XZ @ 0x18006ED20 (--1CFallbackWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CFallbackWindow *__fastcall CFallbackWindow::`scalar deleting destructor'(CFallbackWindow *this, char a2)
{
  CFallbackWindow::~CFallbackWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x88uLL);
  return this;
}
