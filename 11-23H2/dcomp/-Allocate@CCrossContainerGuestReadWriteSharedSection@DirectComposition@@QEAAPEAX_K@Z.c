/*
 * XREFs of ?Allocate@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@QEAAPEAX_K@Z @ 0x1800EC58C
 * Callers:
 *     ?AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800EDA14 (-AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCShar.c)
 * Callees:
 *     McTemplateU0xqqt_EventWriteTransfer @ 0x1800EC80C (McTemplateU0xqqt_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSection::Allocate(
        DirectComposition::CCrossContainerGuestReadWriteSharedSection *this,
        unsigned __int64 a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 <= *((_QWORD *)this + 8) && !*((_QWORD *)this + 5) )
  {
    v2 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 5) = 1LL;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x20) != 0 )
    McTemplateU0xqqt_EventWriteTransfer(
      *((_DWORD *)this + 16),
      a2,
      (_DWORD)this,
      v2 != 0 ? a2 : 0,
      *((_DWORD *)this + 16),
      0);
  return v2;
}
