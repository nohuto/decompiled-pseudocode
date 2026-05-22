/*
 * XREFs of ??1?$unique_ptr@VCSharedSection@DirectComposition@@U?$default_delete@VCSharedSection@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1800FB3E8
 * Callers:
 *     ?Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z @ 0x18007E808 (-Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z.c)
 * Callees:
 *     ??_ECSharedSection@DirectComposition@@UEAAPEAXI@Z @ 0x18007E750 (--_ECSharedSection@DirectComposition@@UEAAPEAXI@Z.c)
 */

DirectComposition::CSharedSection *__fastcall std::unique_ptr<DirectComposition::CSharedSection>::~unique_ptr<DirectComposition::CSharedSection>(
        DirectComposition::CSharedSection **a1)
{
  DirectComposition::CSharedSection *v1; // rcx
  DirectComposition::CSharedSection *result; // rax

  v1 = *a1;
  if ( v1 )
    return DirectComposition::CSharedSection::`vector deleting destructor'(v1, 1);
  return result;
}
