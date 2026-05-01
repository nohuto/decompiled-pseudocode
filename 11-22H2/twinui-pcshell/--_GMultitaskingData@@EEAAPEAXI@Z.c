/*
 * XREFs of ??_GMultitaskingData@@EEAAPEAXI@Z @ 0x180560170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1MultitaskingData@@EEAA@XZ @ 0x1802E00B6 (--1MultitaskingData@@EEAA@XZ.c)
 */

MultitaskingData *__fastcall MultitaskingData::`scalar deleting destructor'(MultitaskingData *this, char a2)
{
  MultitaskingData::~MultitaskingData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
