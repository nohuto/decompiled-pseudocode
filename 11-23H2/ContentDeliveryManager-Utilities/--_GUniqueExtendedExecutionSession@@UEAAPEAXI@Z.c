/*
 * XREFs of ??_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z @ 0x1800A5800
 * Callers:
 *     <none>
 * Callees:
 *     ??1UniqueExtendedExecutionSession@@UEAA@XZ @ 0x1800A5508 (--1UniqueExtendedExecutionSession@@UEAA@XZ.c)
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
