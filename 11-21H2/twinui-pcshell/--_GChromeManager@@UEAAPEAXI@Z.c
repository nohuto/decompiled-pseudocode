/*
 * XREFs of ??_GChromeManager@@UEAAPEAXI@Z @ 0x18017CD10
 * Callers:
 *     <none>
 * Callees:
 *     ??1ChromeManager@@UEAA@XZ @ 0x18017CD4C (--1ChromeManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

ChromeManager *__fastcall ChromeManager::`scalar deleting destructor'(ChromeManager *this, char a2)
{
  ChromeManager::~ChromeManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
