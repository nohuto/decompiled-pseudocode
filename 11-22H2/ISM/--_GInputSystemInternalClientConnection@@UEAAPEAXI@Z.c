/*
 * XREFs of ??_GInputSystemInternalClientConnection@@UEAAPEAXI@Z @ 0x18014A040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1InputSystemInternalClientConnection@@UEAA@XZ @ 0x180149FC4 (--1InputSystemInternalClientConnection@@UEAA@XZ.c)
 */

InputSystemInternalClientConnection *__fastcall InputSystemInternalClientConnection::`scalar deleting destructor'(
        InputSystemInternalClientConnection *this,
        char a2)
{
  InputSystemInternalClientConnection::~InputSystemInternalClientConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
