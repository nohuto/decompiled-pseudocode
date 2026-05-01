/*
 * XREFs of ??_GCDragVisualAcc@@EEAAPEAXI@Z @ 0x1805F5C50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 *     ??1CDragVisualAcc@@EEAA@XZ @ 0x1805F5A84 (--1CDragVisualAcc@@EEAA@XZ.c)
 */

CDragVisualAcc *__fastcall CDragVisualAcc::`scalar deleting destructor'(CDragVisualAcc *this, char a2)
{
  CDragVisualAcc::~CDragVisualAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
