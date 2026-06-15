/*
 * XREFs of ??_ECAudioSession@@MEAAPEAXI@Z @ 0x1800D65B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSession@@MEAA@XZ @ 0x1800263C0 (--1CAudioSession@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

CAudioSession *__fastcall CAudioSession::`vector deleting destructor'(CAudioSession *this, char a2)
{
  CAudioSession::~CAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
