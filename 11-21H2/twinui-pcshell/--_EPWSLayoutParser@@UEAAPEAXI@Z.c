/*
 * XREFs of ??_EPWSLayoutParser@@UEAAPEAXI@Z @ 0x1803BD520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1PWSLayoutParser@@UEAA@XZ @ 0x1803BD3B4 (--1PWSLayoutParser@@UEAA@XZ.c)
 */

OLECHAR **__fastcall PWSLayoutParser::`vector deleting destructor'(OLECHAR **this, char a2)
{
  PWSLayoutParser::~PWSLayoutParser(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
