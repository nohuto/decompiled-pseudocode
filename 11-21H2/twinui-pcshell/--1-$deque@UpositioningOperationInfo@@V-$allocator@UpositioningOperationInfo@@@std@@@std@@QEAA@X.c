/*
 * XREFs of ??1?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@QEAA@XZ @ 0x180170CF0
 * Callers:
 *     ??1FullScreenPositioner@@UEAA@XZ @ 0x180170BE4 (--1FullScreenPositioner@@UEAA@XZ.c)
 *     ??1?$queue@UpositioningOperationInfo@@V?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x18031E354 (--1-$queue@UpositioningOperationInfo@@V-$deque@UpositioningOperationInfo@@V-$allocator@Uposition.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F19C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::deque<positioningOperationInfo>::~deque<positioningOperationInfo>(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  __int64 *v6; // rbx
  void *v7; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  while ( v2 )
  {
    v6 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 8 * ((*(_QWORD *)(a1 + 16) - 1LL) & (v2 + *(_QWORD *)(a1 + 24) - 1LL)));
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v6 + 1);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v6);
    v2 = *(_QWORD *)(a1 + 32) - 1LL;
    *(_QWORD *)(a1 + 32) = v2;
    if ( !v2 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  while ( v3 )
  {
    --v3;
    v7 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v3);
    if ( v7 )
      std::_Deallocate<16,0>(v7, 0x10uLL);
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8LL * *(_QWORD *)(a1 + 16));
  v5 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate<16,0>(v5, 0x10uLL);
}
