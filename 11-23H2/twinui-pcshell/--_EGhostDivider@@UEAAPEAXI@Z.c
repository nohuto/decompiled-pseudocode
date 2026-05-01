/*
 * XREFs of ??_EGhostDivider@@UEAAPEAXI@Z @ 0x1805E6A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1GhostDivider@@UEAA@XZ @ 0x1805E6980 (--1GhostDivider@@UEAA@XZ.c)
 */

GhostDivider *__fastcall GhostDivider::`vector deleting destructor'(GhostDivider *this, char a2)
{
  GhostDivider::~GhostDivider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
