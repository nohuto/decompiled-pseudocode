/*
 * XREFs of ??_EIMiniSearchAppPositionerConfig@@UEAAPEAXI@Z @ 0x1803AE070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

IMiniSearchAppPositionerConfig *__fastcall IMiniSearchAppPositionerConfig::`vector deleting destructor'(
        IMiniSearchAppPositionerConfig *this,
        char a2)
{
  *(_QWORD *)this = &IMiniSearchAppPositionerConfig::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
