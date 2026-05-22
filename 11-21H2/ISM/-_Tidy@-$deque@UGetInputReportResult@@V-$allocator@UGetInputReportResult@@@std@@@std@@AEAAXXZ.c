/*
 * XREFs of ?_Tidy@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAXXZ @ 0x1800C9008
 * Callers:
 *     ??1?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAA@XZ @ 0x1800C8388 (--1-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall std::deque<GetInputReportResult>::_Tidy(_QWORD *a1)
{
  __int64 v1; // rdx
  void *v3; // rcx
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx

  v1 = a1[4];
  while ( v1 )
  {
    v3 = *(void **)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (v1 + a1[3] - 1LL))) + 8LL);
    if ( v3 )
    {
      operator delete[](v3);
      v1 = a1[4];
    }
    a1[4] = --v1;
    if ( !v1 )
      a1[3] = 0LL;
  }
  v4 = a1[2];
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(a1[1] + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, 0x18uLL);
  }
  v6 = (void *)a1[1];
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
