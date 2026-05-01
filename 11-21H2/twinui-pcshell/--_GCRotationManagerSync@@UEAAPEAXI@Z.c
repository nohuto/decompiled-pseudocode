/*
 * XREFs of ??_GCRotationManagerSync@@UEAAPEAXI@Z @ 0x180179F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRotationManagerSync@@UEAA@XZ @ 0x180179FCC (--1CRotationManagerSync@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CRotationManagerSync *__fastcall CRotationManagerSync::`scalar deleting destructor'(
        CRotationManagerSync *this,
        char a2)
{
  CRotationManagerSync::~CRotationManagerSync(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA8uLL);
  return this;
}
