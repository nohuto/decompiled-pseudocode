/*
 * XREFs of ??_GCAPOInstance@@QEAAPEAXI@Z @ 0x1400178C4
 * Callers:
 *     ??1CAPOProcessNode@@UEAA@XZ @ 0x140017888 (--1CAPOProcessNode@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VCAPOInstance@@U?$default_delete@VCAPOInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14005D128 (--1-$unique_ptr@VCAPOInstance@@U-$default_delete@VCAPOInstance@@@wistd@@@wistd@@QEAA@XZ.c)
 * Callees:
 *     ??1CAPOInstance@@QEAA@XZ @ 0x1400178F0 (--1CAPOInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CAPOInstance *__fastcall CAPOInstance::`scalar deleting destructor'(CAPOInstance *this)
{
  CAPOInstance::~CAPOInstance(this);
  operator delete(this);
  return this;
}
