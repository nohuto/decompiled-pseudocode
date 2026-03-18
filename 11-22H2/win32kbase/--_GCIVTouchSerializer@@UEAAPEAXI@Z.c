/*
 * XREFs of ??_GCIVTouchSerializer@@UEAAPEAXI@Z @ 0x1C01E9620
 * Callers:
 *     <none>
 * Callees:
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD0B8 (--1CIVSerializer@@UEAA@XZ.c)
 */

CIVTouchSerializer *__fastcall CIVTouchSerializer::`scalar deleting destructor'(CIVTouchSerializer *this)
{
  *(_QWORD *)this = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer(this);
  return this;
}
