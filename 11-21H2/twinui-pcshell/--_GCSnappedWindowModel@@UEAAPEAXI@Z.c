/*
 * XREFs of ??_GCSnappedWindowModel@@UEAAPEAXI@Z @ 0x180598BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CSnappedWindowModel@@UEAA@XZ @ 0x180598B28 (--1CSnappedWindowModel@@UEAA@XZ.c)
 */

CSnappedWindowModel *__fastcall CSnappedWindowModel::`scalar deleting destructor'(CSnappedWindowModel *this, char a2)
{
  CSnappedWindowModel::~CSnappedWindowModel(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
