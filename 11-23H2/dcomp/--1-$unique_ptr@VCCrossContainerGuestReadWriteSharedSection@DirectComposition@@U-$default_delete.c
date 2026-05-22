/*
 * XREFs of ??1?$unique_ptr@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@U?$default_delete@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1800EC4A4
 * Callers:
 *     ?Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV12@@Z @ 0x1800EC5E8 (-Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV.c)
 * Callees:
 *     ??_GCCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAAPEAXI@Z @ 0x1800EC540 (--_GCCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<DirectComposition::CCrossContainerGuestReadWriteSharedSection>::~unique_ptr<DirectComposition::CCrossContainerGuestReadWriteSharedSection>(
        DirectComposition::CCrossContainerGuestReadWriteSharedSection **a1)
{
  DirectComposition::CCrossContainerGuestReadWriteSharedSection *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return DirectComposition::CCrossContainerGuestReadWriteSharedSection::`scalar deleting destructor'(v1, 1u);
  return result;
}
