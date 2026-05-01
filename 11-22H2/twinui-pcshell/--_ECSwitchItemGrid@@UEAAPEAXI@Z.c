/*
 * XREFs of ??_ECSwitchItemGrid@@UEAAPEAXI@Z @ 0x180578B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CSwitchItemGrid@@UEAA@XZ @ 0x1805789CC (--1CSwitchItemGrid@@UEAA@XZ.c)
 */

CSwitchItemGrid *__fastcall CSwitchItemGrid::`vector deleting destructor'(CSwitchItemGrid *this, char a2)
{
  CSwitchItemGrid::~CSwitchItemGrid(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
