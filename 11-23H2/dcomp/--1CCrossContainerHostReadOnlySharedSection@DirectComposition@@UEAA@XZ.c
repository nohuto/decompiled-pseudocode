/*
 * XREFs of ??1CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAA@XZ @ 0x1800EC914
 * Callers:
 *     ??_GCCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAAPEAXI@Z @ 0x1800EC960 (--_GCCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x1800EC798 (McTemplateU0xq_EventWriteTransfer.c)
 */

void __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSection::~CCrossContainerHostReadOnlySharedSection(
        DirectComposition::CCrossContainerHostReadOnlySharedSection *this)
{
  *(_QWORD *)this = &DirectComposition::CCrossContainerHostReadOnlySharedSection::`vftable';
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer((__int64)this, (const EVENT_DESCRIPTOR *)"/", (__int64)this, 0);
  DirectComposition::CSharedSectionBase::~CSharedSectionBase(this);
}
