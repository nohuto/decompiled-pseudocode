/*
 * XREFs of ?Allocate@CSharedSection@DirectComposition@@QEAAPEAX_K@Z @ 0x180086240
 * Callers:
 *     ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0 (-AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z.c)
 * Callees:
 *     McTemplateU0xqqt_EventWriteTransfer @ 0x1800EC80C (McTemplateU0xqqt_EventWriteTransfer.c)
 */

PVOID __fastcall DirectComposition::CSharedSection::Allocate(DirectComposition::CSharedSection *this, SIZE_T a2)
{
  void *v3; // rcx
  int v4; // ebp
  PVOID Heap; // rsi

  v3 = (void *)*((_QWORD *)this + 8);
  v4 = a2;
  Heap = 0LL;
  if ( v3 )
  {
    Heap = RtlAllocateHeap(v3, 0, a2);
    if ( Heap )
      ++*((_QWORD *)this + 5);
  }
  else if ( a2 >= 0x1000 && a2 <= *((_QWORD *)this + 9) && !*((_QWORD *)this + 5) )
  {
    Heap = (PVOID)*((_QWORD *)this + 7);
    *((_QWORD *)this + 5) = 1LL;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x20) != 0 )
    McTemplateU0xqqt_EventWriteTransfer(
      (_DWORD)v3,
      a2,
      (_DWORD)this,
      Heap != 0LL ? v4 : 0,
      *((_DWORD *)this + 18),
      *((_QWORD *)this + 8) != 0LL);
  return Heap;
}
