/*
 * XREFs of ??_GChromeManager@@UEAAPEAXI@Z @ 0x1801B9B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1ChromeManager@@UEAA@XZ @ 0x1801B9B5C (--1ChromeManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

ChromeManager *__fastcall ChromeManager::`scalar deleting destructor'(ChromeManager *this, char a2)
{
  ChromeManager::~ChromeManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
