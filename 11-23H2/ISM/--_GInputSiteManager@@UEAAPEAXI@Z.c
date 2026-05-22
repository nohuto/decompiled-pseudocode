/*
 * XREFs of ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x18013F170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1InputSiteManager@@UEAA@XZ @ 0x18013F104 (--1InputSiteManager@@UEAA@XZ.c)
 */

InputSiteManager *__fastcall InputSiteManager::`scalar deleting destructor'(InputSiteManager *this, char a2)
{
  InputSiteManager::~InputSiteManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
