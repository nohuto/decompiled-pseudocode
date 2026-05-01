/*
 * XREFs of ??_GCImmersiveWindowManager@@MEAAPEAXI@Z @ 0x1803A74D4
 * Callers:
 *     ??_ECImmersiveWindowManager@@OEI@EAAPEAXI@Z @ 0x1802900A0 (--_ECImmersiveWindowManager@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CImmersiveWindowManager@@MEAA@XZ @ 0x1803A707C (--1CImmersiveWindowManager@@MEAA@XZ.c)
 */

CImmersiveWindowManager *__fastcall CImmersiveWindowManager::`scalar deleting destructor'(
        CImmersiveWindowManager *this,
        char a2)
{
  CImmersiveWindowManager::~CImmersiveWindowManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
