/*
 * XREFs of ??_GISearchAppPositionerConfig@@UEAAPEAXI@Z @ 0x1803A0410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

ISearchAppPositionerConfig *__fastcall ISearchAppPositionerConfig::`scalar deleting destructor'(
        ISearchAppPositionerConfig *this,
        char a2)
{
  *(_QWORD *)this = &ISearchAppPositionerConfig::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
