/*
 * XREFs of ??1?$CAutoPtr@UAuxiliaryInputDescriptor@@@ATL@@QEAA@XZ @ 0x1800D8560
 * Callers:
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$8 @ 0x1800DD898 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$8.c)
 * Callees:
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x18000D54C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 */

AuxiliaryInputDescriptor *__fastcall ATL::CAutoPtr<AuxiliaryInputDescriptor>::~CAutoPtr<AuxiliaryInputDescriptor>(
        AuxiliaryInputDescriptor **a1)
{
  AuxiliaryInputDescriptor *v2; // rcx
  AuxiliaryInputDescriptor *result; // rax

  v2 = *a1;
  if ( v2 )
    result = AuxiliaryInputDescriptor::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
