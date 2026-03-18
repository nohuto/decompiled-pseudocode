/*
 * XREFs of ??1FxDmaEnabler@@UEAA@XZ @ 0x1C001AB5C
 * Callers:
 *     ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1C001AC30 (--_EFxDmaEnabler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0002D30 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxDmaEnabler::~FxDmaEnabler(FxDmaEnabler *this, unsigned int a2)
{
  char v3; // al

  this->__vftable = (FxDmaEnabler_vtbl *)FxDmaEnabler::`vftable';
  v3 = *((_BYTE *)this + 380);
  if ( (v3 & 0x20) != 0 )
  {
    if ( (v3 & 8) != 0 )
    {
      ExDeleteNPagedLookasideList(&this->m_SGList.ScatterGatherProfile.Lookaside);
    }
    else if ( (v3 & 4) == 0 )
    {
      ExFreePoolWithTag(this->m_SGList.ScatterGatherProfile.Lookaside.L.SingleListHead.Next, 0);
    }
    *((_BYTE *)this + 380) &= ~0x20u;
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
