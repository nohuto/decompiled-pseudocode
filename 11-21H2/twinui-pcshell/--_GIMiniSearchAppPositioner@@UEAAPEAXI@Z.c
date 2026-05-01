/*
 * XREFs of ??_GIMiniSearchAppPositioner@@UEAAPEAXI@Z @ 0x1803AE030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

IMiniSearchAppPositioner *__fastcall IMiniSearchAppPositioner::`scalar deleting destructor'(
        IMiniSearchAppPositioner *this,
        char a2)
{
  *(_QWORD *)this = &IMiniSearchAppPositioner::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
