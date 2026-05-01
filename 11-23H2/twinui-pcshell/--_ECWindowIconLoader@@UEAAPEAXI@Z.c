/*
 * XREFs of ??_ECWindowIconLoader@@UEAAPEAXI@Z @ 0x18055DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CWindowIconLoader@@UEAA@XZ @ 0x18055DDA0 (--1CWindowIconLoader@@UEAA@XZ.c)
 */

CWindowIconLoader *__fastcall CWindowIconLoader::`vector deleting destructor'(CWindowIconLoader *this, char a2)
{
  CWindowIconLoader::~CWindowIconLoader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
