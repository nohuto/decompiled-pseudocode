/*
 * XREFs of ?BuildOtherRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A1A64
 * Callers:
 *     ?GetOtherRects@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A49E4 (-GetOtherRects@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXPEAUIApplic.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@UCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@$$QEAU23@@Z @ 0x1805A1178 (--$_Emplace_reallocate@UCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@.c)
 *     ?SpaceForTwoRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@SA_NKKI@Z @ 0x1805A74EC (-SpaceForTwoRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@SA_NKKI@Z.c)
 *     ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1805A7DA8 (-reserve@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z.c)
 */

char *__fastcall SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::BuildOtherRegions(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        __int64 *a8)
{
  int v8; // edi
  unsigned int v13; // edi
  __int128 *v14; // rax
  _OWORD *v15; // rdx
  __int64 v16; // rax
  _OWORD *v17; // rdx
  unsigned int v18; // ecx
  char *result; // rax
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v21[16]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a3 - a2;
  if ( SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::SpaceForTwoRegions(a1, a3 - a2, a6) )
  {
    v13 = a2 + v8 / 2;
    std::vector<Geometry::CRect>::reserve(a8, ((a8[1] - *a8) >> 4) + 2);
    v14 = (__int128 *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
                        a1,
                        v21,
                        a2,
                        v13,
                        a4,
                        a5);
    v15 = (_OWORD *)a8[1];
    v20 = *v14;
    if ( v15 == (_OWORD *)a8[2] )
    {
      std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a8, (__int64)v15, &v20);
    }
    else
    {
      *v15 = v20;
      a8[1] += 16LL;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
            a1,
            v21,
            v13,
            a3,
            a4,
            a5);
  }
  else
  {
    std::vector<Geometry::CRect>::reserve(a8, ((a8[1] - *a8) >> 4) + 1);
    v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
            a1,
            v21,
            a2,
            a3,
            a4,
            a5);
  }
  v17 = (_OWORD *)a8[1];
  *(_QWORD *)&v20 = *(_QWORD *)v16;
  v18 = *(_DWORD *)(v16 + 8);
  result = (char *)*(unsigned int *)(v16 + 12);
  *((_QWORD *)&v20 + 1) = __PAIR64__((unsigned int)result, v18);
  if ( v17 == (_OWORD *)a8[2] )
    return std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a8, (__int64)v17, &v20);
  *v17 = v20;
  a8[1] += 16LL;
  return result;
}
