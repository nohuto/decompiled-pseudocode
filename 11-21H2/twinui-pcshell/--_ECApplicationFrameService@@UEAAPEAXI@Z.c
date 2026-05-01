/*
 * XREFs of ??_ECApplicationFrameService@@UEAAPEAXI@Z @ 0x18003CC30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CApplicationFrameService@@UEAA@XZ @ 0x18003CC6C (--1CApplicationFrameService@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CApplicationFrameService *__fastcall CApplicationFrameService::`vector deleting destructor'(
        CApplicationFrameService *this,
        char a2)
{
  CApplicationFrameService::~CApplicationFrameService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xE8uLL);
  return this;
}
