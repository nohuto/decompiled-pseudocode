/*
 * XREFs of ??1CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAA@XZ @ 0x1800EC4C8
 * Callers:
 *     ??_GCCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAAPEAXI@Z @ 0x1800EC540 (--_GCCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x1800EC798 (McTemplateU0xq_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSection::~CCrossContainerGuestReadWriteSharedSection(
        DirectComposition::CCrossContainerGuestReadWriteSharedSection *this)
{
  void *v1; // rbx
  HANDLE CurrentProcess; // rax
  __int64 v4; // rcx

  v1 = (void *)*((_QWORD *)this + 7);
  *(_QWORD *)this = &DirectComposition::CCrossContainerGuestReadWriteSharedSection::`vftable';
  CurrentProcess = GetCurrentProcess();
  NtUnmapViewOfSection(CurrentProcess, v1);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(v4, "/", this, *((unsigned int *)this + 16));
  DirectComposition::CSharedSectionBase::~CSharedSectionBase(this);
}
