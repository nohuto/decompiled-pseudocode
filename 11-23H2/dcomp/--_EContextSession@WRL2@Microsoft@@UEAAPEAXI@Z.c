/*
 * XREFs of ??_EContextSession@WRL2@Microsoft@@UEAAPEAXI@Z @ 0x1801089B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ContextSession@WRL2@Microsoft@@UEAA@XZ @ 0x18003E0B4 (--1ContextSession@WRL2@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall Microsoft::WRL2::ContextSession::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  Microsoft::WRL2::ContextSession::~ContextSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
