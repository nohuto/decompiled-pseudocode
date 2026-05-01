/*
 * XREFs of ?GetOtherRects@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A49E4
 * Callers:
 *     ?GetOtherColumns@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A4284 (-GetOtherColumns@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMon.c)
 *     ?GetOtherRows@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A4CD0 (-GetOtherRows@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonito.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@UCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@$$QEAU23@@Z @ 0x1805A1178 (--$_Emplace_reallocate@UCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@.c)
 *     ?BuildOtherRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A1A64 (-BuildOtherRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXJJJJIKA.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1805A20A0 (-ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1805A7DA8 (-reserve@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z.c)
 */

char *__fastcall SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::GetOtherRects(
        __int64 a1,
        __int64 *a2,
        SnapLayoutHelpers *a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v5; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  struct IImmersiveMonitor *v13; // rdx
  int v14; // esi
  char *result; // rax
  __int128 *v16; // rax
  _OWORD *v17; // rdx
  __int64 v18; // rax
  _OWORD *v19; // rdx
  unsigned int v20; // ecx
  int v21; // [rsp+20h] [rbp-61h]
  int v22; // [rsp+30h] [rbp-51h]
  int v23; // [rsp+40h] [rbp-41h] BYREF
  int v24; // [rsp+44h] [rbp-3Dh]
  unsigned int v25; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v26; // [rsp+4Ch] [rbp-35h]
  unsigned int v27; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-25h]
  _BYTE v30[8]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v31; // [rsp+68h] [rbp-19h] BYREF
  __int128 v32; // [rsp+78h] [rbp-9h] BYREF
  __int128 v33; // [rsp+88h] [rbp+7h] BYREF
  _BYTE v34[16]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v5 = *(_QWORD *)a3;
  v32 = 0LL;
  v9 = (*(__int64 (__fastcall **)(SnapLayoutHelpers *, __int128 *))(v5 + 88))(a3, &v32);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x976,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v9,
      v21);
  v10 = *a2;
  v33 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v10 + 128))(a2, &v33);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x979,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v11,
      v21);
  v12 = (*(__int64 (__fastcall **)(SnapLayoutHelpers *, unsigned int *, _BYTE *))(*(_QWORD *)a3 + 112LL))(a3, &v27, v30);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x97D,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v12,
      v21);
  v14 = SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(a3, v13);
  (**(void (__fastcall ***)(__int64, unsigned int *, __int128 *))a1)(a1, &v25, &v32);
  (*(void (__fastcall **)(__int64, int *, __int128 *))(*(_QWORD *)a1 + 8LL))(a1, &v23, &v32);
  (**(void (__fastcall ***)(__int64, unsigned int *, __int128 *))a1)(a1, &v28, &v33);
  if ( v25 - (v28 - v14) <= 2 * v14 )
    return SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::BuildOtherRegions(
             a1,
             v29,
             v26,
             v23,
             v24,
             v27,
             v22,
             a5);
  if ( v14 + v26 - v29 <= 2 * v14 )
    return SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::BuildOtherRegions(
             a1,
             v25,
             v28,
             v23,
             v24,
             v27,
             v22,
             a5);
  std::vector<Geometry::CRect>::reserve(a5, ((a5[1] - *a5) >> 4) + 2);
  v16 = (__int128 *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
                      a1,
                      v34,
                      v25,
                      v28,
                      v23,
                      v24);
  v17 = (_OWORD *)a5[1];
  v31 = *v16;
  if ( v17 == (_OWORD *)a5[2] )
  {
    std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a5, (__int64)v17, &v31);
  }
  else
  {
    *v17 = v31;
    a5[1] += 16LL;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
          a1,
          v34,
          v29,
          v26,
          v23,
          v24);
  v19 = (_OWORD *)a5[1];
  *(_QWORD *)&v31 = *(_QWORD *)v18;
  v20 = *(_DWORD *)(v18 + 8);
  result = (char *)*(unsigned int *)(v18 + 12);
  *((_QWORD *)&v31 + 1) = __PAIR64__((unsigned int)result, v20);
  if ( v19 == (_OWORD *)a5[2] )
    return std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a5, (__int64)v19, &v31);
  *v19 = v31;
  a5[1] += 16LL;
  return result;
}
