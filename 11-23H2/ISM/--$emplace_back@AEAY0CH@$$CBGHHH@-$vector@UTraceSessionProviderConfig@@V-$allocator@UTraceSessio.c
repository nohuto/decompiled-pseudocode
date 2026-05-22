/*
 * XREFs of ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA?A_TAEAY0CH@$$CBG$$QEAH11@Z @ 0x1800D7498
 * Callers:
 *     GetHolographicInputSession @ 0x1800D8CB8 (GetHolographicInputSession.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x1800D6E78 (--$_Emplace_reallocate@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTrac.c)
 *     ??$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@?$_Default_allocator_traits@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@SAXAEAV?$allocator@UTraceSessionProviderConfig@@@1@QEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH33@Z @ 0x1800D743C (--$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@-$_Default_allocator_traits@V-$alloca.c)
 */

char *__fastcall std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
        __int64 *a1,
        const OLECHAR *a2,
        int *a3,
        int *a4,
        int *a5)
{
  __int64 v6; // rdx
  char *result; // rax

  v6 = a1[1];
  if ( v6 == a1[2] )
    return std::vector<TraceSessionProviderConfig>::_Emplace_reallocate<unsigned short const (&)[39],int,int,int>(
             a1,
             v6,
             (__int64)a2,
             (__int64)a3,
             (__int64)a4,
             (__int64)a5);
  std::_Default_allocator_traits<std::allocator<TraceSessionProviderConfig>>::construct<TraceSessionProviderConfig,unsigned short const (&)[39],int,int,int>(
    (__int64)a1,
    v6,
    a2,
    a3,
    a4,
    a5);
  result = (char *)a1[1];
  a1[1] = (__int64)(result + 40);
  return result;
}
