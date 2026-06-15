/*
 * XREFs of ??1?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x140060E0C
 * Callers:
 *     _PublishApoTelemetry_::_1_::dtor$24 @ 0x140036C06 (_PublishApoTelemetry_--_1_--dtor$24.c)
 *     _PublishApoTelemetry_::_1_::dtor$26 @ 0x140036C2A (_PublishApoTelemetry_--_1_--dtor$26.c)
 *     _PublishApoTelemetry_::_1_::dtor$28 @ 0x140036C4E (_PublishApoTelemetry_--_1_--dtor$28.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned char>::~vector<unsigned char>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
