/*
 * XREFs of ??1?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@QEAA@XZ @ 0x1801A9AE8
 * Callers:
 *     ??1FullScreenPositioner@@UEAA@XZ @ 0x1801A99AC (--1FullScreenPositioner@@UEAA@XZ.c)
 *     ??1?$queue@UpositioningOperationInfo@@V?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x1803EC404 (--1-$queue@UpositioningOperationInfo@@V-$deque@UpositioningOperationInfo@@V-$allocator@Uposition.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180057794 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<positioningOperationInfo>::~deque<positioningOperationInfo>(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  __int64 *v6; // rbx
  void *v8; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    v6 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 8 * ((*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 24) + v2 - 1)));
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v6 + 1);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v6);
    if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  while ( v3 )
  {
    --v3;
    v8 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v3);
    if ( v8 )
      std::_Deallocate<16,0>(v8, 0x10uLL);
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
