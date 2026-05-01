/*
 * XREFs of SnapLayoutHelpers::_dynamic_initializer_for__s_DefaultSnapTargetMetrics_DragImprovement__ @ 0x180009B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 SnapLayoutHelpers::_dynamic_initializer_for__s_DefaultSnapTargetMetrics_DragImprovement__()
{
  __int64 result; // rax
  __int128 v1; // [rsp+0h] [rbp-30h]
  __int128 v2; // [rsp+10h] [rbp-20h]
  __int128 v3; // [rsp+20h] [rbp-10h]

  result = 48LL;
  LODWORD(v3) = 48;
  *(_QWORD *)((char *)&v3 + 4) = 0x3DCCCCCD00000030LL;
  *(_QWORD *)&v2 = 0x3000000030LL;
  *(_QWORD *)&v1 = 0x3000000030LL;
  HIDWORD(v3) = 1036831949;
  *((_QWORD *)&v2 + 1) = 0x3DCCCCCD3DCCCCCDLL;
  *((_QWORD *)&v1 + 1) = 0x3DCCCCCD3DCCCCCDLL;
  xmmword_1807B37E8 = v3;
  xmmword_1807B37F8 = v2;
  xmmword_1807B3808 = v1;
  return result;
}
