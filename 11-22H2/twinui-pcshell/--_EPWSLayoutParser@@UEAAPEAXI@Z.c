/*
 * XREFs of ??_EPWSLayoutParser@@UEAAPEAXI@Z @ 0x180496580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1PWSLayoutParser@@UEAA@XZ @ 0x1804963EC (--1PWSLayoutParser@@UEAA@XZ.c)
 */

PWSLayoutParser *__fastcall PWSLayoutParser::`vector deleting destructor'(PWSLayoutParser *this, char a2)
{
  PWSLayoutParser::~PWSLayoutParser(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
