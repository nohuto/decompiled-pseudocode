/*
 * XREFs of ??_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z @ 0x1800B4400
 * Callers:
 *     <none>
 * Callees:
 *     ??1UniqueExtendedExecutionSession@@UEAA@XZ @ 0x1800B40A0 (--1UniqueExtendedExecutionSession@@UEAA@XZ.c)
 */

UniqueExtendedExecutionSession *__fastcall UniqueExtendedExecutionSession::`scalar deleting destructor'(
        UniqueExtendedExecutionSession *this,
        char a2)
{
  UniqueExtendedExecutionSession::~UniqueExtendedExecutionSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
