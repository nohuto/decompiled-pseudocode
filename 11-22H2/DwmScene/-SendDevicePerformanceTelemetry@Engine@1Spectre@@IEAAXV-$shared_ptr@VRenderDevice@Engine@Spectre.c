/*
 * XREFs of ?SendDevicePerformanceTelemetry@Engine@1Spectre@@IEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180036528
 * Callers:
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ @ 0x18003691C (-SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::Engine::SendDevicePerformanceTelemetry(__int64 a1, _QWORD *a2)
{
  std::_Ref_count_base *v4; // rcx
  __int128 v5; // [rsp+B8h] [rbp-80h] BYREF
  int v6; // [rsp+C8h] [rbp-70h]
  int v7; // [rsp+CCh] [rbp-6Ch]
  int v8; // [rsp+D0h] [rbp-68h]
  int v9; // [rsp+D4h] [rbp-64h]
  __int128 v10; // [rsp+D8h] [rbp-60h]
  __int128 v11; // [rsp+E8h] [rbp-50h]
  __int128 v12; // [rsp+F8h] [rbp-40h]
  __int64 v13; // [rsp+108h] [rbp-30h]
  __int64 v14; // [rsp+110h] [rbp-28h]
  int v15; // [rsp+118h] [rbp-20h]
  int v16; // [rsp+11Ch] [rbp-1Ch]
  __int64 v17; // [rsp+120h] [rbp-18h]
  int v18; // [rsp+128h] [rbp-10h]
  _BYTE v19[16]; // [rsp+138h] [rbp+0h] BYREF

  if ( *(_QWORD *)(a1 + 496) )
  {
    if ( !_RTDynamicCast_0(
            *a2,
            0LL,
            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
            0) )
    {
      v5 = 0LL;
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0;
      v16 = 0;
      v17 = 0LL;
      v18 = 0;
      Spectre::Engine::Lockable::GetSharedLockIfNecessary((Spectre::Engine::Lockable *)(*a2 + 24LL), (__int64)v19);
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 88LL))(*a2, &v5);
      std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v19);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 496) + 96LL))(*(_QWORD *)(a1 + 496));
    }
    v4 = (std::_Ref_count_base *)a2[1];
  }
  else
  {
    v4 = (std::_Ref_count_base *)a2[1];
  }
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
