/*
 * XREFs of ??_ECStreamGroupAttributes@@UEAAPEAXI@Z @ 0x180105380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

CStreamGroupAttributes *__fastcall CStreamGroupAttributes::`vector deleting destructor'(
        CStreamGroupAttributes *this,
        char a2)
{
  *(_QWORD *)this = &CStreamGroupAttributes::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
