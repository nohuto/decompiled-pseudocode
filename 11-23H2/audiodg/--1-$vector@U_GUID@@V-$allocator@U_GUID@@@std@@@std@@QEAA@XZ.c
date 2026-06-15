/*
 * XREFs of ??1?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x140064D10
 * Callers:
 *     _PublishApoTelemetry_::_1_::dtor$33 @ 0x14002D1AB (_PublishApoTelemetry_--_1_--dtor$33.c)
 *     _PublishApoTelemetry_::_1_::dtor$35 @ 0x14002D1C3 (_PublishApoTelemetry_--_1_--dtor$35.c)
 *     _PublishApoTelemetry_::_1_::dtor$37 @ 0x14002D1DB (_PublishApoTelemetry_--_1_--dtor$37.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
