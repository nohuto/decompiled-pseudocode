/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x1403688A8
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x140467E10 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x1407419A0 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x1409EEF88 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140C69928;
  *((_QWORD *)&v2 + 1) = qword_140C65488;
  *(_QWORD *)&v3 = qword_140C699B0;
  *((_QWORD *)&v3 + 1) = qword_140C6F8E8;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
