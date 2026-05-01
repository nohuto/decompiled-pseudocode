/*
 * XREFs of ??_EGhostDivider@@UEAAPEAXI@Z @ 0x18052BAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1GhostDivider@@UEAA@XZ @ 0x18052BA20 (--1GhostDivider@@UEAA@XZ.c)
 */

GhostDivider *__fastcall GhostDivider::`vector deleting destructor'(GhostDivider *this, char a2)
{
  GhostDivider::~GhostDivider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
