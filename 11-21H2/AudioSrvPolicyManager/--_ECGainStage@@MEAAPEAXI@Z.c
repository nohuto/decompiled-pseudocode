/*
 * XREFs of ??_ECGainStage@@MEAAPEAXI@Z @ 0x180010160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 */

CGainStage *__fastcall CGainStage::`vector deleting destructor'(CGainStage *this, char a2)
{
  *(_QWORD *)this = &CGainStage::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
