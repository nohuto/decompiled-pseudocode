/*
 * XREFs of ??_EMiniSearchAppPositioner@@UEAAPEAXI@Z @ 0x1803AE0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1MiniSearchAppPositioner@@UEAA@XZ @ 0x1803ADFDC (--1MiniSearchAppPositioner@@UEAA@XZ.c)
 */

MiniSearchAppPositioner *__fastcall MiniSearchAppPositioner::`vector deleting destructor'(
        MiniSearchAppPositioner *this,
        char a2)
{
  MiniSearchAppPositioner::~MiniSearchAppPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
