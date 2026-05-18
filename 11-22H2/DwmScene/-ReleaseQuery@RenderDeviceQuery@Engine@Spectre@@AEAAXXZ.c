/*
 * XREFs of ?ReleaseQuery@RenderDeviceQuery@Engine@Spectre@@AEAAXXZ @ 0x1800A210C
 * Callers:
 *     ??1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1BD8 (--1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800A1C34 (--4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetData@RenderDeviceQuery@Engine@Spectre@@QEBA?AUGetDataResult@GpuQuery@23@W4FlushOption@523@@Z @ 0x1800A1EF8 (-GetData@RenderDeviceQuery@Engine@Spectre@@QEBA-AUGetDataResult@GpuQuery@23@W4FlushOption@523@@Z.c)
 *     ?GetStatistics@RenderDeviceQuery@Engine@Spectre@@QEBA?AUGetStatisticsResult@GpuQuery@23@W4FlushOption@523@@Z @ 0x1800A1F9C (-GetStatistics@RenderDeviceQuery@Engine@Spectre@@QEBA-AUGetStatisticsResult@GpuQuery@23@W4FlushO.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180011A3C (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderDeviceQuery::ReleaseQuery(Spectre::Engine::RenderDeviceQuery *this)
{
  char *v2; // r8
  std::_Ref_count_base *v3; // rcx
  __int128 v4; // rcx

  v2 = (char *)this + 16;
  if ( *((_QWORD *)this + 2) )
  {
    v3 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
    if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
      v4 = *(_OWORD *)this;
    else
      v4 = 0LL;
    if ( (_QWORD)v4 )
      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)v4 + 8LL))(v4, v2);
    if ( *((_QWORD *)&v4 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v4 + 1));
  }
}
