/*
 * XREFs of ??_GMPCConstantManager@@UEAAPEAXI@Z @ 0x1800948A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCConstantManager@@UEAA@XZ @ 0x18009468C (--1MPCConstantManager@@UEAA@XZ.c)
 */

MPCConstantManager *__fastcall MPCConstantManager::`scalar deleting destructor'(MPCConstantManager *this, char a2)
{
  MPCConstantManager::~MPCConstantManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
