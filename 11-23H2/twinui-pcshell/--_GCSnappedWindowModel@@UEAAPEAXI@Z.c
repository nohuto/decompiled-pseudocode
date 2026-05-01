/*
 * XREFs of ??_GCSnappedWindowModel@@UEAAPEAXI@Z @ 0x180666FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CSnappedWindowModel@@UEAA@XZ @ 0x1802E9196 (--1CSnappedWindowModel@@UEAA@XZ.c)
 */

CSnappedWindowModel *__fastcall CSnappedWindowModel::`scalar deleting destructor'(CSnappedWindowModel *this, char a2)
{
  CSnappedWindowModel::~CSnappedWindowModel(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
