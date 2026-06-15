/*
 * XREFs of ??_GCCrossProcessClientMemory@@UEAAPEAXI@Z @ 0x180019100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
CCrossProcessClientMemory *__fastcall CCrossProcessClientMemory::`scalar deleting destructor'(
        CCrossProcessClientMemory *this,
        char a2)
{
  void *v4; // rcx
  const void *v5; // rcx
  char *v6; // rcx

  *(_QWORD *)this = &CCrossProcessClientMemory::`vftable';
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 && !VirtualUnlock(v4, *((unsigned int *)this + 6)) )
    GetLastError();
  *((_DWORD *)this + 11) = -1073741823;
  *(_QWORD *)this = &CCrossProcessBaseMemory::`vftable';
  v5 = (const void *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    UnmapViewOfFile(v5);
    *((_QWORD *)this + 4) = 0LL;
  }
  v6 = (char *)*((_QWORD *)this + 2);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
