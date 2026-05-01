/*
 * XREFs of ?_Tidy@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXXZ @ 0x18040A388
 * Callers:
 *     ??1?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA@XZ @ 0x1803F9484 (--1-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA@XZ.c)
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180404644 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<tagPRESENTFRAME>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = v2 - 1;
    a1[4] = v3;
    if ( !v3 )
      a1[3] = 0LL;
  }
  v4 = a1[2];
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(a1[1] + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, 0x20uLL);
  }
  v6 = (void *)a1[1];
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
