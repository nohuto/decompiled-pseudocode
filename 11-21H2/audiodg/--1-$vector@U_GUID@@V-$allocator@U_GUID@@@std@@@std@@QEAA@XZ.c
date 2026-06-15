/*
 * XREFs of ??1?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x140060E44
 * Callers:
 *     _PublishApoTelemetry_::_1_::dtor$23 @ 0x140036BF4 (_PublishApoTelemetry_--_1_--dtor$23.c)
 *     _PublishApoTelemetry_::_1_::dtor$25 @ 0x140036C18 (_PublishApoTelemetry_--_1_--dtor$25.c)
 *     _PublishApoTelemetry_::_1_::dtor$27 @ 0x140036C3C (_PublishApoTelemetry_--_1_--dtor$27.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<_GUID>::~vector<_GUID>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
