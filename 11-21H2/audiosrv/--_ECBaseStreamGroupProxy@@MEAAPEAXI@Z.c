/*
 * XREFs of ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800F7E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x180040290 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

CBaseStreamGroupProxy *__fastcall CBaseStreamGroupProxy::`vector deleting destructor'(
        CBaseStreamGroupProxy *this,
        char a2)
{
  CBaseStreamGroupProxy::~CBaseStreamGroupProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
