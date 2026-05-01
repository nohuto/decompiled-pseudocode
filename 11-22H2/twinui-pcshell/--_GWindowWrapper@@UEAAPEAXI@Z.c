/*
 * XREFs of ??_GWindowWrapper@@UEAAPEAXI@Z @ 0x1804DD4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1WindowWrapper@@UEAA@XZ @ 0x1804DCD68 (--1WindowWrapper@@UEAA@XZ.c)
 */

WindowWrapper *__fastcall WindowWrapper::`scalar deleting destructor'(WindowWrapper *this, char a2)
{
  WindowWrapper::~WindowWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
