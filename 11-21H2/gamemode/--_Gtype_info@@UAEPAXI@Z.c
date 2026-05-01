/*
 * XREFs of ??_Gtype_info@@UAEPAXI@Z @ 0x10006FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPAX@Z_0 @ 0x10006F70 (--3@YAXPAX@Z_0.c)
 */

type_info *__thiscall type_info::`scalar deleting destructor'(type_info *this, char a2)
{
  type_info::~type_info(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
