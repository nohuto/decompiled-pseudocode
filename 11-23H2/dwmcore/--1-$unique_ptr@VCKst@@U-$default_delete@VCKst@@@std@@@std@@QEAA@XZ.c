/*
 * XREFs of ??1?$unique_ptr@VCKst@@U?$default_delete@VCKst@@@std@@@std@@QEAA@XZ @ 0x18028551C
 * Callers:
 *     ?Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800D2B74 (-Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_GCKst@@QEAAPEAXI@Z @ 0x180282EBC (--_GCKst@@QEAAPEAXI@Z.c)
 */

CKst *__fastcall std::unique_ptr<CKst>::~unique_ptr<CKst>(CKst **a1)
{
  CKst *v1; // rcx
  CKst *result; // rax

  v1 = *a1;
  if ( v1 )
    return CKst::`scalar deleting destructor'(v1);
  return result;
}
