/*
 * XREFs of ??_GMPCConstantManager@@UEAAPEAXI@Z @ 0x1800AAED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCConstantManager@@UEAA@XZ @ 0x1800AACC4 (--1MPCConstantManager@@UEAA@XZ.c)
 */

MPCConstantManager *__fastcall MPCConstantManager::`scalar deleting destructor'(MPCConstantManager *this, char a2)
{
  MPCConstantManager::~MPCConstantManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
