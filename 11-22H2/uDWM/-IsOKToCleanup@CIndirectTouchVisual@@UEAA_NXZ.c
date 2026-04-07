/*
 * XREFs of ?IsOKToCleanup@CIndirectTouchVisual@@UEAA_NXZ @ 0x1800C5810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectTouchVisual::IsOKToCleanup(CIndirectTouchVisual *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 46) )
    return *((_QWORD *)this + 47) == 0LL;
  return result;
}
