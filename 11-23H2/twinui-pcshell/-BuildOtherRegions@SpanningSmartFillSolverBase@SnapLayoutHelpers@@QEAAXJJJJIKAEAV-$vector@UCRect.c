/*
 * XREFs of ?BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180670668
 * Callers:
 *     ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1806725E8 (-GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIIm.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@UCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@$$QEAU23@@Z @ 0x180670400 (--$_Emplace_reallocate@UCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@.c)
 *     ?SpaceForTwoRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@SA_NKKI@Z @ 0x180674220 (-SpaceForTwoRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@SA_NKKI@Z.c)
 *     ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1806747A4 (-reserve@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z.c)
 */

_OWORD *__fastcall SnapLayoutHelpers::SpanningSmartFillSolverBase::BuildOtherRegions(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        char **a8)
{
  int v8; // esi
  bool v13; // al
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int128 *v16; // rax
  char *v17; // rdx
  __int64 v18; // rax
  char *v19; // rdx
  unsigned int v20; // ecx
  _OWORD *result; // rax
  __int128 v22; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v23[16]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a3 - a2;
  v13 = SnapLayoutHelpers::SpanningSmartFillSolverBase::SpaceForTwoRegions(a1, a3 - a2, a6);
  v14 = (a8[1] - *a8) >> 4;
  if ( v13 )
  {
    v15 = a2 + v8 / 2;
    std::vector<Geometry::CRect>::reserve(a8, v14 + 2);
    v16 = (__int128 *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
                        a1,
                        v23,
                        a2,
                        v15,
                        a4,
                        a5);
    v17 = a8[1];
    v22 = *v16;
    if ( v17 == a8[2] )
    {
      std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a8, v17, &v22);
    }
    else
    {
      *(_OWORD *)v17 = v22;
      a8[1] += 16;
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
            a1,
            v23,
            v15,
            a3,
            a4,
            a5);
  }
  else
  {
    std::vector<Geometry::CRect>::reserve(a8, v14 + 1);
    v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
            a1,
            v23,
            a2,
            a3,
            a4,
            a5);
  }
  v19 = a8[1];
  *(_QWORD *)&v22 = *(_QWORD *)v18;
  v20 = *(_DWORD *)(v18 + 8);
  result = (_OWORD *)*(unsigned int *)(v18 + 12);
  *((_QWORD *)&v22 + 1) = __PAIR64__((unsigned int)result, v20);
  if ( v19 == a8[2] )
    return std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a8, v19, &v22);
  *(_OWORD *)v19 = v22;
  a8[1] += 16;
  return result;
}
