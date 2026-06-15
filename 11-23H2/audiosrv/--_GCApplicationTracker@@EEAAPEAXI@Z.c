/*
 * XREFs of ??_GCApplicationTracker@@EEAAPEAXI@Z @ 0x1800471A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CApplicationTracker@@EEAA@XZ @ 0x1800471DC (--1CApplicationTracker@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

CApplicationTracker *__fastcall CApplicationTracker::`scalar deleting destructor'(CApplicationTracker *this, char a2)
{
  CApplicationTracker::~CApplicationTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x28uLL);
  return this;
}
