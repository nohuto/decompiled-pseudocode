/*
 * XREFs of ComputeProcessorEnergyUsingMsr @ 0x1C0002700
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0001D30 (ProcLibTraceEnergyCounterUpdate.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyUsingMsr(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rsi
  __int64 *v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 *result; // rax

  v5 = 0LL;
  v6 = &qword_1C0012518;
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
    if ( v6 == &qword_1C0012518 )
      break;
    v8 = (__int64)(v6 - 4);
    if ( _bittest64(v6 + 31, 0x25u) && *(unsigned __int8 *)(v8 + 376) == a1 )
    {
      v9 = *(_QWORD *)(v8 + 368);
      v10 = *(unsigned int *)(v9 + 32);
      v11 = *(unsigned int *)(v9 + 24);
      v12 = (unsigned int)(*(_DWORD *)(v9 + 32) - v11);
      *(_QWORD *)(v9 + 24) = v10;
      if ( (unsigned int)v10 <= (unsigned int)v11 )
        v12 = 0LL;
      v5 += v12;
      ProcLibTraceEnergyCounterUpdate(v8, v11, v10);
    }
  }
  result = a5;
  *a5 = (unsigned __int64)(1000000 * v5) >> SLOBYTE(WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  return result;
}
