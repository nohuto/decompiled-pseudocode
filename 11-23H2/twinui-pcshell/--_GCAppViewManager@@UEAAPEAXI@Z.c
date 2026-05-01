/*
 * XREFs of ??_GCAppViewManager@@UEAAPEAXI@Z @ 0x1801B7BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAppViewManager@@UEAA@XZ @ 0x1801B7BDC (--1CAppViewManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CAppViewManager *__fastcall CAppViewManager::`scalar deleting destructor'(CAppViewManager *this, char a2)
{
  CAppViewManager::~CAppViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xC0uLL);
  return this;
}
