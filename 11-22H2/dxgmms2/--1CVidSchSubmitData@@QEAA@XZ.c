/*
 * XREFs of ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C001520C
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C0014F38 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVidSchSubmitData::~CVidSchSubmitData(CVidSchSubmitData *this)
{
  if ( *(_QWORD *)this )
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(*((_QWORD *)this + 1) + 1424LL), *(PVOID *)this);
}
