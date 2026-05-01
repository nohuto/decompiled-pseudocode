/*
 * XREFs of ??1?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAA@XZ @ 0x1801949CC
 * Callers:
 *     ??1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ @ 0x1801948AC (--1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ.c)
 *     ??1?$queue@UForegroundSwitchData@Discover@PenWorkspace@@V?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@@std@@QEAA@XZ @ 0x18048C52C (--1-$queue@UForegroundSwitchData@Discover@PenWorkspace@@V-$deque@UForegroundSwitchData@Discover@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<PenWorkspace::Discover::ForegroundSwitchData>::~deque<PenWorkspace::Discover::ForegroundSwitchData>(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rax

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    v7 = v2 - 1;
    *(_QWORD *)(a1 + 32) = v7;
    if ( !v7 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v3);
    if ( v4 )
      std::_Deallocate<16,0>(v4, 0xCuLL);
  }
  v5 = *(void **)(a1 + 8);
  if ( v5 )
    std::_Deallocate<16,0>(v5, 8LL * *(_QWORD *)(a1 + 16));
  v6 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate<16,0>(v6, 0x10uLL);
}
