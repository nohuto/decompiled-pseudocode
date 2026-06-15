/*
 * XREFs of ??_ECAudioSession@@MEAAPEAXI@Z @ 0x1800DEF10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001C1C4 (--1CAudioSession@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

CAudioSession *__fastcall CAudioSession::`vector deleting destructor'(CAudioSession *this, char a2)
{
  CAudioSession::~CAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
