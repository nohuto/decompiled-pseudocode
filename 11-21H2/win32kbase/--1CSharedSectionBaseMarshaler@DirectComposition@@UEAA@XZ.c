/*
 * XREFs of ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00B6EC8
 * Callers:
 *     ??_GCCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00B6E80 (--_GCCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECSharedSectionBaseMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C02145B0 (--_ECSharedSectionBaseMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0229010 (--_GCCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(
        DirectComposition::CSharedSectionBaseMarshaler *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &DirectComposition::CSharedSectionBaseMarshaler::`vftable';
  v1 = (void *)*((_QWORD *)this + 8);
  if ( v1 )
    ObfDereferenceObject(v1);
}
