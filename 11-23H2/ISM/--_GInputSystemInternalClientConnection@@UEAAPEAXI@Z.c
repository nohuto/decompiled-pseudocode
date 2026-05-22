/*
 * XREFs of ??_GInputSystemInternalClientConnection@@UEAAPEAXI@Z @ 0x18013C090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1InputSystemInternalClientConnection@@UEAA@XZ @ 0x18013C00C (--1InputSystemInternalClientConnection@@UEAA@XZ.c)
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
