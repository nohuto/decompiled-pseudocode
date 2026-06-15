/*
 * XREFs of ??_GCAPOInstance@@QEAAPEAXI@Z @ 0x14005A56C
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140013CA0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ??1?$unique_ptr@VCAPOInstance@@U?$default_delete@VCAPOInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14005A408 (--1-$unique_ptr@VCAPOInstance@@U-$default_delete@VCAPOInstance@@@wistd@@@wistd@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??1CAPOInstance@@QEAA@XZ @ 0x14005A4F4 (--1CAPOInstance@@QEAA@XZ.c)
 */

CAPOInstance *__fastcall CAPOInstance::`scalar deleting destructor'(CAPOInstance *this)
{
  CAPOInstance::~CAPOInstance(this);
  operator delete(this);
  return this;
}
