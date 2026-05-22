/*
 * XREFs of ??_GInputSystemInternalClientConnection@@UEAAPEAXI@Z @ 0x180120740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1InputSystemInternalClientConnection@@UEAA@XZ @ 0x1801206C0 (--1InputSystemInternalClientConnection@@UEAA@XZ.c)
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
