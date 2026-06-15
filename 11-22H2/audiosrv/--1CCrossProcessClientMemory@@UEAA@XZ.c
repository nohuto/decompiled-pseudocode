/*
 * XREFs of ??1CCrossProcessClientMemory@@UEAA@XZ @ 0x180042B5C
 * Callers:
 *     ??_GCCrossProcessClientMemory@@UEAAPEAXI@Z @ 0x1800427C0 (--_GCCrossProcessClientMemory@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessClientMemory::~CCrossProcessClientMemory(CCrossProcessClientMemory *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CCrossProcessClientMemory::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 && !VirtualUnlock(v2, *((unsigned int *)this + 6)) )
    GetLastError();
  *((_DWORD *)this + 11) = -1073741823;
  CCrossProcessBaseMemory::~CCrossProcessBaseMemory(this);
}
