/*
 * XREFs of ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x18014D220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1InputSiteManager@@UEAA@XZ @ 0x18014D1B0 (--1InputSiteManager@@UEAA@XZ.c)
 */

InputSiteManager *__fastcall InputSiteManager::`scalar deleting destructor'(InputSiteManager *this, char a2)
{
  InputSiteManager::~InputSiteManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
