/*
 * XREFs of sub_1406E9850 @ 0x1406E9850
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1406A2200 @ 0x1406A2200 (sub_1406A2200.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 */

signed __int64 sub_1406E9850()
{
  WNF_STATE_NAME *v0; // rbx
  WNF_STATE_NAME *v1; // rdi
  signed __int32 v2; // esi
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi

  do
  {
    v0 = (WNF_STATE_NAME *)_InterlockedExchange64(&qword_140C1BEE8, -1LL);
    do
    {
      v1 = (WNF_STATE_NAME *)v0[145];
      _m_prefetchw(&v0[189]);
      v2 = _InterlockedAnd((volatile signed __int32 *)&v0[189], 0xFFFDDFFF);
      if ( (v2 & 0x2000) != 0 )
        ZwUpdateWnfStateData(v0 + 134, 0LL, 0, 0LL, 0LL, 0, 0);
      if ( (v2 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        sub_1406FFED4(v0, CurrentThread);
        if ( *(_QWORD *)&v0[69] && (v0[133].Data[1] & 0x1000) != 0 )
          sub_1406A2200(v0, 0xCu);
        sub_1406FFE90(v0, CurrentThread);
      }
      ObfDereferenceObjectWithTag(v0, 0x6F4E7350u);
      v0 = v1;
    }
    while ( v1 && v1 != (WNF_STATE_NAME *)-1LL );
    result = _InterlockedCompareExchange64(&qword_140C1BEE8, 0LL, -1LL);
  }
  while ( result != -1 );
  return result;
}
