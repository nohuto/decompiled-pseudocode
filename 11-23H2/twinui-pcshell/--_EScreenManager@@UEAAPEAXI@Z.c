/*
 * XREFs of ??_EScreenManager@@UEAAPEAXI@Z @ 0x1801BE370
 * Callers:
 *     <none>
 * Callees:
 *     ??1ScreenManager@@UEAA@XZ @ 0x180142F68 (--1ScreenManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

ScreenManager *__fastcall ScreenManager::`vector deleting destructor'(ScreenManager *this, char a2)
{
  ScreenManager::~ScreenManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x160uLL);
  return this;
}
