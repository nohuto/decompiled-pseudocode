/*
 * XREFs of sub_140313CA0 @ 0x140313CA0
 * Callers:
 *     sub_14022DBD4 @ 0x14022DBD4 (sub_14022DBD4.c)
 *     sub_14023C030 @ 0x14023C030 (sub_14023C030.c)
 *     sub_140248208 @ 0x140248208 (sub_140248208.c)
 *     sub_140264720 @ 0x140264720 (sub_140264720.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_140313DE0 @ 0x140313DE0 (sub_140313DE0.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_14033E280 @ 0x14033E280 (sub_14033E280.c)
 *     sub_14038EB20 @ 0x14038EB20 (sub_14038EB20.c)
 *     sub_14038EF10 @ 0x14038EF10 (sub_14038EF10.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     sub_140589410 @ 0x140589410 (sub_140589410.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_1405A828C @ 0x1405A828C (sub_1405A828C.c)
 *     sub_1405A9530 @ 0x1405A9530 (sub_1405A9530.c)
 *     sub_1405A9E34 @ 0x1405A9E34 (sub_1405A9E34.c)
 *     sub_1405A9F00 @ 0x1405A9F00 (sub_1405A9F00.c)
 *     sub_1405ADEB8 @ 0x1405ADEB8 (sub_1405ADEB8.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_140979A34 @ 0x140979A34 (sub_140979A34.c)
 *     sub_140B5229C @ 0x140B5229C (sub_140B5229C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140313CA0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  signed __int64 v5; // rdx
  unsigned __int64 result; // rax
  signed __int64 v7; // r8
  signed __int64 v8; // rcx

  v3 = a2 & 0xFFFFFFFFFFLL;
  if ( a3 )
  {
    result = v3 | *(_QWORD *)(a1 + 24) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v5 & 0xFFFFFF0000000000uLL, v5);
    v7 = result;
    if ( v5 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v3 | v7 & 0xFFFFFF0000000000uLL,
                   v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
