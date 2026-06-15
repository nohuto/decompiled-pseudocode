/*
 * XREFs of ??_GCpuManager@@UEAAPEAXI@Z @ 0x140052FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CpuManager@@UEAA@XZ @ 0x140052F1C (--1CpuManager@@UEAA@XZ.c)
 */

CpuManager *__fastcall CpuManager::`scalar deleting destructor'(CpuManager *this, char a2)
{
  CpuManager::~CpuManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
