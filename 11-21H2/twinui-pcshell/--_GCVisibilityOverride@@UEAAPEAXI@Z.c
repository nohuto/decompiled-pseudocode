/*
 * XREFs of ??_GCVisibilityOverride@@UEAAPEAXI@Z @ 0x180179640
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisibilityOverride@@UEAA@XZ @ 0x18017967C (--1CVisibilityOverride@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CVisibilityOverride *__fastcall CVisibilityOverride::`scalar deleting destructor'(CVisibilityOverride *this, char a2)
{
  CVisibilityOverride::~CVisibilityOverride(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
