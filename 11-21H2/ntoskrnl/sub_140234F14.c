/*
 * XREFs of sub_140234F14 @ 0x140234F14
 * Callers:
 *     sub_1402011DC @ 0x1402011DC (sub_1402011DC.c)
 *     sub_14028DF40 @ 0x14028DF40 (sub_14028DF40.c)
 *     sub_14028EDD0 @ 0x14028EDD0 (sub_14028EDD0.c)
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402E9768 @ 0x1402E9768 (sub_1402E9768.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_14033D80C @ 0x14033D80C (sub_14033D80C.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_1403735A0 @ 0x1403735A0 (sub_1403735A0.c)
 *     sub_14057FA8C @ 0x14057FA8C (sub_14057FA8C.c)
 *     sub_1405845D4 @ 0x1405845D4 (sub_1405845D4.c)
 *     sub_1405BBB54 @ 0x1405BBB54 (sub_1405BBB54.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140234F14(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 1264); ; result = (_QWORD *)*result )
  {
    while ( 1 )
    {
      if ( !result )
        return 0LL;
      if ( a2 <= result[4] )
        break;
      result = (_QWORD *)result[1];
    }
    if ( a2 >= result[3] )
      break;
  }
  if ( !result[6] )
    return 0LL;
  return result;
}
