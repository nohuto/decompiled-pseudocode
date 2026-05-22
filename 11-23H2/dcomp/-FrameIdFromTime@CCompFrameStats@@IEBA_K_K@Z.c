/*
 * XREFs of ?FrameIdFromTime@CCompFrameStats@@IEBA_K_K@Z @ 0x180006614
 * Callers:
 *     ?ExceededMaxDuration@CAnimationFrameStats@@MEAAXXZ @ 0x180006570 (-ExceededMaxDuration@CAnimationFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CCompFrameStats::FrameIdFromTime(CCompFrameStats *this, unsigned __int64 a2)
{
  _QWORD *i; // rax

  for ( i = (_QWORD *)*((_QWORD *)this + 17); ; i += 17 )
  {
    if ( i == *((_QWORD **)this + 18) )
      return 0LL;
    if ( i[1] >= a2 )
      break;
  }
  return *i;
}
