/*
 * XREFs of ??1?$unique_ptr@VCCrossContainerHostReadOnlySharedSection@DirectComposition@@U?$default_delete@VCCrossContainerHostReadOnlySharedSection@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1800EC8F0
 * Callers:
 *     ?Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID@@2PEAPEAV12@@Z @ 0x1800ECA70 (-Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID.c)
 * Callees:
 *     ??_GCCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAAPEAXI@Z @ 0x1800EC960 (--_GCCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<DirectComposition::CCrossContainerHostReadOnlySharedSection>::~unique_ptr<DirectComposition::CCrossContainerHostReadOnlySharedSection>(
        DirectComposition::CCrossContainerHostReadOnlySharedSection **a1)
{
  DirectComposition::CCrossContainerHostReadOnlySharedSection *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return DirectComposition::CCrossContainerHostReadOnlySharedSection::`scalar deleting destructor'(v1, 1u);
  return result;
}
