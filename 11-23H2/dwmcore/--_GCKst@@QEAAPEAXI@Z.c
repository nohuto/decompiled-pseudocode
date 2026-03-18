/*
 * XREFs of ??_GCKst@@QEAAPEAXI@Z @ 0x180282EBC
 * Callers:
 *     ??1CGlobalInputManager@@UEAA@XZ @ 0x180282E1C (--1CGlobalInputManager@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VCKst@@U?$default_delete@VCKst@@@std@@@std@@QEAA@XZ @ 0x18028551C (--1-$unique_ptr@VCKst@@U-$default_delete@VCKst@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     ??1CKst@@QEAA@XZ @ 0x18028555C (--1CKst@@QEAA@XZ.c)
 */

CKst *__fastcall CKst::`scalar deleting destructor'(CKst *this)
{
  CKst::~CKst(this);
  operator delete(this);
  return this;
}
