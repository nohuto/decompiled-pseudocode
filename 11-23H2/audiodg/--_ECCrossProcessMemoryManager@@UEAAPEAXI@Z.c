/*
 * XREFs of ??_ECCrossProcessMemoryManager@@UEAAPEAXI@Z @ 0x1400252E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CCrossProcessMemoryManager *__fastcall CCrossProcessMemoryManager::`vector deleting destructor'(
        CCrossProcessMemoryManager *this,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    LocalFree(v4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
