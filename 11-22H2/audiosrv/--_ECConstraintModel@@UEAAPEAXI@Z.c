/*
 * XREFs of ??_ECConstraintModel@@UEAAPEAXI@Z @ 0x18015F7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x18015F5D0 (--1CConstraintModel@@UEAA@XZ.c)
 */

void **__fastcall CConstraintModel::`vector deleting destructor'(void **this, char a2)
{
  CConstraintModel::~CConstraintModel(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
