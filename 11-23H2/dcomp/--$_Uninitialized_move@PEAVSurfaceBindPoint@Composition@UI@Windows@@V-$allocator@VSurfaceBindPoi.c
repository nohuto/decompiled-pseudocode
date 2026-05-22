/*
 * XREFs of ??$_Uninitialized_move@PEAVSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@0PEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x18017EAC0
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E9C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCDirtyNotifier@DirectComposition@@@WRL@Microsoft@@IEBAXXZ @ 0x180084B68 (-InternalAddRef@-$ComPtr@VCDirtyNotifier@DirectComposition@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x1801224FC (--$_Destroy_range@V-$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurf.c)
 */

Windows::UI::Composition::SurfaceBindPoint *__fastcall std::_Uninitialized_move<Windows::UI::Composition::SurfaceBindPoint *>(
        __int64 a1,
        __int64 a2,
        Windows::UI::Composition::SurfaceBindPoint *a3)
{
  Windows::UI::Composition::SurfaceBindPoint *v3; // rdi
  __int64 v5; // rbx
  char *v6; // rsi
  Microsoft::WRL2::NestableRuntimeClass *v7; // rcx
  __int64 *v8; // rcx
  char *v9; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 48;
    v6 = (char *)a3 - a1;
    do
    {
      *(_QWORD *)v3 = &Windows::UI::Composition::SurfaceBindPoint::`vftable';
      v7 = *(Microsoft::WRL2::NestableRuntimeClass **)(v5 - 40);
      *(_QWORD *)&v6[v5 - 40] = v7;
      if ( v7 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v7);
      v8 = (__int64 *)&v6[v5 - 24];
      *(_QWORD *)&v6[v5 - 32] = *(_QWORD *)(v5 - 32);
      *v8 = *(_QWORD *)(v5 - 24);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v8);
      v9 = &v6[v5 - 16];
      *(_QWORD *)v9 = *(_QWORD *)(v5 - 16);
      Microsoft::WRL::ComPtr<DirectComposition::CDirtyNotifier>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))v9);
      *(_QWORD *)&v6[v5 - 8] = 0LL;
      *(_QWORD *)&v6[v5] = 0LL;
      if ( *(_QWORD *)v5 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v5 + 8LL));
      v3 = (Windows::UI::Composition::SurfaceBindPoint *)((char *)v3 + 56);
      *(_QWORD *)&v6[v5 - 8] = *(_QWORD *)(v5 - 8);
      *(_QWORD *)&v6[v5] = *(_QWORD *)v5;
      v5 += 56LL;
    }
    while ( v5 - 48 != a2 );
  }
  std::_Destroy_range<std::allocator<Windows::UI::Composition::SurfaceBindPoint>>(v3, v3);
  return v3;
}
