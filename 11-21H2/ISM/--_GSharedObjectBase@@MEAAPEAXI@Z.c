/*
 * XREFs of ??_GSharedObjectBase@@MEAAPEAXI@Z @ 0x1800FC220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1SharedObjectBase@@MEAA@XZ @ 0x1800FC114 (--1SharedObjectBase@@MEAA@XZ.c)
 */

SharedObjectBase *__fastcall SharedObjectBase::`scalar deleting destructor'(SharedObjectBase *this, char a2)
{
  SharedObjectBase::~SharedObjectBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
