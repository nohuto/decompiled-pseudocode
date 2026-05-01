/*
 * XREFs of ??_GCNetworkExperienceManager@@UEAAPEAXI@Z @ 0x18012CB90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CNetworkExperienceManager@@UEAA@XZ @ 0x18012CE54 (--1CNetworkExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CNetworkExperienceManager *__fastcall CNetworkExperienceManager::`scalar deleting destructor'(
        CNetworkExperienceManager *this,
        char a2)
{
  CNetworkExperienceManager::~CNetworkExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
