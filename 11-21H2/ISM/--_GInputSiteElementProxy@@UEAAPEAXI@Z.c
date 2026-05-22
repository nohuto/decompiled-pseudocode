/*
 * XREFs of ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x1801259D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1InputSiteElementProxy@@UEAA@XZ @ 0x180125914 (--1InputSiteElementProxy@@UEAA@XZ.c)
 */

InputSiteElementProxy *__fastcall InputSiteElementProxy::`scalar deleting destructor'(
        InputSiteElementProxy *this,
        char a2)
{
  InputSiteElementProxy::~InputSiteElementProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
