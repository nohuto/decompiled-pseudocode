/*
 * XREFs of sub_14020F26C @ 0x14020F26C
 * Callers:
 *     sub_14020E0AC @ 0x14020E0AC (sub_14020E0AC.c)
 *     sub_14020E1DC @ 0x14020E1DC (sub_14020E1DC.c)
 *     sub_14020F07C @ 0x14020F07C (sub_14020F07C.c)
 *     sub_1403A493C @ 0x1403A493C (sub_1403A493C.c)
 *     sub_1403C1214 @ 0x1403C1214 (sub_1403C1214.c)
 *     sub_140572EC0 @ 0x140572EC0 (sub_140572EC0.c)
 *     BroadcastFunction @ 0x140A48E70 (BroadcastFunction.c)
 *     sub_140A58F00 @ 0x140A58F00 (sub_140A58F00.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_14020F26C(signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 1) != 0 )
  {
    result = *a1;
LABEL_6:
    _mm_pause();
  }
  v2 = result;
  result = _InterlockedCompareExchange64(a1, result + 1, result);
  if ( v2 != result )
    goto LABEL_6;
  return result;
}
