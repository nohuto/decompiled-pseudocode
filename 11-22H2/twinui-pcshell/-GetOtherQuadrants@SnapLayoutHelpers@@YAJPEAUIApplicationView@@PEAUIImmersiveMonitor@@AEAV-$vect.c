/*
 * XREFs of ?GetOtherQuadrants@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180671F8C
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066CA10 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@UCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@$$QEAU23@@Z @ 0x180670400 (--$_Emplace_reallocate@UCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x180673838 (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     ?ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x180677DC0 (-ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall SnapLayoutHelpers::GetOtherQuadrants(__int64 a1, SnapRectHelpers *a2, char **a3)
{
  int v6; // eax
  unsigned int v7; // edi
  int v9; // eax
  struct IImmersiveMonitor *v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // eax
  int SnapRegionAnchorLocations; // edi
  LANGID ThreadUILanguage_0; // ax
  int v15; // eax
  char *v16; // rdx
  char *v17; // rdx
  int v18; // eax
  unsigned int v19; // eax
  char *v20; // rdx
  char *v21; // rdx
  char *v22; // rdx
  char *v23; // rdx
  int v24; // eax
  char *v25; // rdx
  unsigned int v26; // eax
  char *v27; // rdx
  char *v28; // rdx
  char *v29; // rdx
  char *v30; // rdx
  __int128 v31; // [rsp+28h] [rbp-50h] BYREF
  __int128 v32; // [rsp+38h] [rbp-40h] BYREF
  __int128 v33; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v32 = 0LL;
  v6 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v32);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x995,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v31 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 128LL))(a1, &v31);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x998,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v9);
    return v11;
  }
  v12 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(a2, v10);
  SnapRegionAnchorLocations = SnapLayoutHelpers::GetSnapRegionAnchorLocations(&v31, &v32, v12);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  v15 = IsBiDiLocale(ThreadUILanguage_0);
  switch ( SnapRegionAnchorLocations )
  {
    case 3:
      v28 = a3[1];
      LODWORD(v33) = DWORD2(v31);
      *(_QWORD *)((char *)&v33 + 4) = *(_QWORD *)((char *)&v32 + 4);
      HIDWORD(v33) = HIDWORD(v31);
      if ( !v15 )
      {
        if ( v28 == a3[2] )
        {
          std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v28, &v33);
        }
        else
        {
          *(_OWORD *)v28 = v33;
          a3[1] += 16;
        }
        *(_QWORD *)&v33 = __PAIR64__(HIDWORD(v31), v32);
        *((_QWORD *)&v33 + 1) = __PAIR64__(HIDWORD(v32), DWORD2(v31));
        v30 = a3[1];
        if ( v30 == a3[2] )
        {
          std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v30, &v33);
        }
        else
        {
          *(_OWORD *)v30 = v33;
          a3[1] += 16;
        }
        *(_QWORD *)&v33 = *((_QWORD *)&v31 + 1);
        *((_QWORD *)&v33 + 1) = *((_QWORD *)&v32 + 1);
        v20 = a3[1];
        if ( v20 == a3[2] )
          goto LABEL_70;
LABEL_69:
        *(_OWORD *)v20 = v33;
        a3[1] += 16;
        return 0LL;
      }
      if ( v28 == a3[2] )
      {
        std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v28, &v33);
      }
      else
      {
        *(_OWORD *)v28 = v33;
        a3[1] += 16;
      }
      *(_QWORD *)&v33 = *((_QWORD *)&v31 + 1);
      *((_QWORD *)&v33 + 1) = *((_QWORD *)&v32 + 1);
      v29 = a3[1];
      if ( v29 == a3[2] )
      {
        std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v29, &v33);
      }
      else
      {
        *(_OWORD *)v29 = v33;
        a3[1] += 16;
      }
      *(_QWORD *)&v33 = __PAIR64__(HIDWORD(v31), v32);
      v19 = DWORD2(v31);
LABEL_18:
      *((_QWORD *)&v33 + 1) = __PAIR64__(HIDWORD(v32), v19);
      v20 = a3[1];
      if ( v20 == a3[2] )
      {
LABEL_70:
        std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v20, &v33);
        return 0LL;
      }
      goto LABEL_69;
    case 6:
      v25 = a3[1];
      if ( v15 )
      {
        LODWORD(v33) = DWORD2(v31);
        *(_QWORD *)((char *)&v33 + 4) = *(_QWORD *)((char *)&v32 + 4);
        HIDWORD(v33) = DWORD1(v31);
        if ( v25 == a3[2] )
        {
          std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v25, &v33);
        }
        else
        {
          *(_OWORD *)v25 = v33;
          a3[1] += 16;
        }
        *(_QWORD *)&v33 = v32;
        v26 = DWORD2(v31);
      }
      else
      {
        *(_QWORD *)&v33 = v32;
        *((_QWORD *)&v33 + 1) = __PAIR64__(DWORD1(v31), DWORD2(v31));
        if ( v25 == a3[2] )
        {
          std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v25, &v33);
        }
        else
        {
          *(_OWORD *)v25 = v33;
          a3[1] += 16;
        }
        *(_QWORD *)&v33 = __PAIR64__(DWORD1(v32), DWORD2(v31));
        v26 = DWORD2(v32);
      }
      *((_QWORD *)&v33 + 1) = __PAIR64__(DWORD1(v31), v26);
      v27 = a3[1];
      if ( v27 == a3[2] )
      {
        std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v27, &v33);
      }
      else
      {
        *(_OWORD *)v27 = v33;
        a3[1] += 16;
      }
      LODWORD(v33) = DWORD2(v31);
      v24 = DWORD1(v31);
LABEL_40:
      DWORD1(v33) = v24;
      v19 = DWORD2(v32);
      goto LABEL_18;
    case 9:
      v21 = a3[1];
      *(_QWORD *)&v33 = v32;
      *((_QWORD *)&v33 + 1) = __PAIR64__(HIDWORD(v31), v31);
      if ( v15 )
      {
        if ( v21 == a3[2] )
        {
          std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v21, &v33);
        }
        else
        {
          *(_OWORD *)v21 = v33;
          a3[1] += 16;
        }
        *(_QWORD *)&v33 = __PAIR64__(HIDWORD(v31), v31);
        *((_QWORD *)&v33 + 1) = *((_QWORD *)&v32 + 1);
        v22 = a3[1];
        if ( v22 == a3[2] )
        {
          std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v22, &v33);
        }
        else
        {
          *(_OWORD *)v22 = v33;
          a3[1] += 16;
        }
        LODWORD(v33) = v32;
        v18 = HIDWORD(v31);
        goto LABEL_17;
      }
      if ( v21 == a3[2] )
      {
        std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v21, &v33);
      }
      else
      {
        *(_OWORD *)v21 = v33;
        a3[1] += 16;
      }
      *(_QWORD *)&v33 = __PAIR64__(HIDWORD(v31), v32);
      *((_QWORD *)&v33 + 1) = __PAIR64__(HIDWORD(v32), v31);
      v23 = a3[1];
      if ( v23 == a3[2] )
      {
        std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v23, &v33);
      }
      else
      {
        *(_OWORD *)v23 = v33;
        a3[1] += 16;
      }
      LODWORD(v33) = v31;
      v24 = HIDWORD(v31);
      goto LABEL_40;
    case 12:
      v16 = a3[1];
      if ( v15 )
      {
        LODWORD(v33) = v31;
        *(_QWORD *)((char *)&v33 + 4) = *(_QWORD *)((char *)&v32 + 4);
        HIDWORD(v33) = DWORD1(v31);
        if ( v16 == a3[2] )
        {
          std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v16, &v33);
        }
        else
        {
          *(_OWORD *)v16 = v33;
          a3[1] += 16;
        }
        *(_QWORD *)&v33 = v32;
        *((_QWORD *)&v33 + 1) = v31;
        v17 = a3[1];
        if ( v17 != a3[2] )
        {
LABEL_14:
          *(_OWORD *)v17 = v33;
          a3[1] += 16;
LABEL_16:
          LODWORD(v33) = v32;
          v18 = DWORD1(v31);
LABEL_17:
          DWORD1(v33) = v18;
          v19 = v31;
          goto LABEL_18;
        }
      }
      else
      {
        *(_QWORD *)&v33 = v32;
        *((_QWORD *)&v33 + 1) = v31;
        if ( v16 == a3[2] )
        {
          std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v16, &v33);
        }
        else
        {
          *(_OWORD *)v16 = v33;
          a3[1] += 16;
        }
        LODWORD(v33) = v31;
        *(_QWORD *)((char *)&v33 + 4) = *(_QWORD *)((char *)&v32 + 4);
        HIDWORD(v33) = DWORD1(v31);
        v17 = a3[1];
        if ( v17 != a3[2] )
          goto LABEL_14;
      }
      std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect>(a3, v17, &v33);
      goto LABEL_16;
  }
  return 0LL;
}
