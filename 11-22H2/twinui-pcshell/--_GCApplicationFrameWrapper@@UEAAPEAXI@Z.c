/*
 * XREFs of ??_GCApplicationFrameWrapper@@UEAAPEAXI@Z @ 0x180063000
 * Callers:
 *     <none>
 * Callees:
 *     ??1CApplicationFrameWrapper@@UEAA@XZ @ 0x18006303C (--1CApplicationFrameWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CApplicationFrameWrapper *__fastcall CApplicationFrameWrapper::`scalar deleting destructor'(
        CApplicationFrameWrapper *this,
        char a2)
{
  CApplicationFrameWrapper::~CApplicationFrameWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xB0uLL);
  return this;
}
