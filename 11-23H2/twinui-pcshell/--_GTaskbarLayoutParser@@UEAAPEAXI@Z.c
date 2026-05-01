/*
 * XREFs of ??_GTaskbarLayoutParser@@UEAAPEAXI@Z @ 0x1803E9AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1TaskbarLayoutParser@@UEAA@XZ @ 0x1803E9958 (--1TaskbarLayoutParser@@UEAA@XZ.c)
 */

OLECHAR **__fastcall TaskbarLayoutParser::`scalar deleting destructor'(OLECHAR **this, char a2)
{
  TaskbarLayoutParser::~TaskbarLayoutParser(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
