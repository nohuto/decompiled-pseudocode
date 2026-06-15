/*
 * XREFs of ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x18004BF60
 * Callers:
 *     ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18004BFDC (-PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ??1SESSION_EVENT@@UEAA@XZ @ 0x18004BF9C (--1SESSION_EVENT@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

SESSION_EVENT *__fastcall SESSION_EVENT::`scalar deleting destructor'(SESSION_EVENT *this, char a2)
{
  SESSION_EVENT::~SESSION_EVENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x18uLL);
  return this;
}
