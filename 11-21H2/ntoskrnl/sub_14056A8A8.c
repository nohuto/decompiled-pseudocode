/*
 * XREFs of sub_14056A8A8 @ 0x14056A8A8
 * Callers:
 *     sub_1408083DC @ 0x1408083DC (sub_1408083DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14056A8A8(unsigned __int64 a1)
{
  __int64 result; // rax

  result = DesiredTime;
  if ( DesiredTime < a1 )
    a1 = DesiredTime;
  _InterlockedExchange64(&qword_140D05110, a1);
  return result;
}
