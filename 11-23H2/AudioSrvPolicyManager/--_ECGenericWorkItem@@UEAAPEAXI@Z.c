/*
 * XREFs of ??_ECGenericWorkItem@@UEAAPEAXI@Z @ 0x18003AD50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1CGenericWorkItem@@UEAA@XZ @ 0x18003AD0C (--1CGenericWorkItem@@UEAA@XZ.c)
 */

CGenericWorkItem *__fastcall CGenericWorkItem::`vector deleting destructor'(CGenericWorkItem *this, char a2)
{
  CGenericWorkItem::~CGenericWorkItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
