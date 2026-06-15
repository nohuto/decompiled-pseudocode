/*
 * XREFs of ??_GDialogSession@@EEAAPEAXI@Z @ 0x18010D0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1DialogSession@@EEAA@XZ @ 0x18010D008 (--1DialogSession@@EEAA@XZ.c)
 */

DialogSession *__fastcall DialogSession::`scalar deleting destructor'(DialogSession *this, char a2)
{
  DialogSession::~DialogSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
