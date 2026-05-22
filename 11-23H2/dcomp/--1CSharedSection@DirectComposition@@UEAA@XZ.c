/*
 * XREFs of ??1CSharedSection@DirectComposition@@UEAA@XZ @ 0x18007E794
 * Callers:
 *     ??_ECSharedSection@DirectComposition@@UEAAPEAXI@Z @ 0x18007E750 (--_ECSharedSection@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x1800EC798 (McTemplateU0xq_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CSharedSection::~CSharedSection(DirectComposition::CSharedSection *this)
{
  void *v2; // rcx
  void *v3; // rbx
  HANDLE CurrentProcess; // rax
  __int64 v5; // rcx

  *(_QWORD *)this = &DirectComposition::CSharedSection::`vftable';
  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
    RtlDestroyHeap(v2);
  v3 = (void *)*((_QWORD *)this + 7);
  CurrentProcess = GetCurrentProcess();
  NtUnmapViewOfSection(CurrentProcess, v3);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(v5, "/", this, *((unsigned int *)this + 18));
  DirectComposition::CSharedSectionBase::~CSharedSectionBase(this);
}
