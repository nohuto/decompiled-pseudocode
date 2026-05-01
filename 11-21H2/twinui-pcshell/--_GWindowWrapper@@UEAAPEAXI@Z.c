/*
 * XREFs of ??_GWindowWrapper@@UEAAPEAXI@Z @ 0x180122000
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowWrapper@@UEAA@XZ @ 0x18012203C (--1WindowWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

WindowWrapper *__fastcall WindowWrapper::`scalar deleting destructor'(WindowWrapper *this, char a2)
{
  WindowWrapper::~WindowWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x2E8uLL);
  return this;
}
