/*
 * XREFs of ??_EResourceManagerServerProxy@@MEAAPEAXI@Z @ 0x180082FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18004DD94 (--3@YAXPEAX@Z.c)
 */

ResourceManagerServerProxy *__fastcall ResourceManagerServerProxy::`vector deleting destructor'(
        ResourceManagerServerProxy *this,
        char a2)
{
  *(_QWORD *)this = &ResourceManagerServerProxy::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
