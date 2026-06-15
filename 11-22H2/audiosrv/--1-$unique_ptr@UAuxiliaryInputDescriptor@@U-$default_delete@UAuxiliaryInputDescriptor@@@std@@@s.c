/*
 * XREFs of ??1?$unique_ptr@UAuxiliaryInputDescriptor@@U?$default_delete@UAuxiliaryInputDescriptor@@@std@@@std@@QEAA@XZ @ 0x180104888
 * Callers:
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x18000D4B8 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 *     _CSharedStreamGroupProxy::ConfigureAuxiliaryInputStream_::_1_::dtor$0 @ 0x180078D4C (_CSharedStreamGroupProxy--ConfigureAuxiliaryInputStream_--_1_--dtor$0.c)
 * Callees:
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x18000D54C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 */

AuxiliaryInputDescriptor *__fastcall std::unique_ptr<AuxiliaryInputDescriptor>::~unique_ptr<AuxiliaryInputDescriptor>(
        AuxiliaryInputDescriptor **a1)
{
  AuxiliaryInputDescriptor *v1; // rcx
  AuxiliaryInputDescriptor *result; // rax

  v1 = *a1;
  if ( v1 )
    return AuxiliaryInputDescriptor::`scalar deleting destructor'(v1);
  return result;
}
