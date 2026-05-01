/*
 * XREFs of ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067F670
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802E2D4C (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x180670BEC (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x180672A68 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x180676E98 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 *     ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067ED90 (-CalculateSnapRegion@DefaultSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSna.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TopBottomSnapLayout::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // r12d
  unsigned int v9; // ebx
  int *v10; // r8
  RECT *v11; // rax
  int RectForRegion; // eax
  __m128i v13; // xmm6
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  RECT *v16; // rax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  LONG v22; // ecx
  unsigned __int64 v23; // xmm0_8
  LONG v24; // ecx
  int v25; // eax
  __m128i v26; // xmm2
  int v28; // [rsp+28h] [rbp-E0h]
  int v29; // [rsp+28h] [rbp-E0h]
  int v30; // [rsp+38h] [rbp-D0h]
  void **v31; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v32; // [rsp+48h] [rbp-C0h] BYREF
  __m128i v33; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v34[48]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+98h] [rbp-70h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-60h]
  __int128 v37; // [rsp+B8h] [rbp-50h]
  __int128 v38; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v39; // [rsp+D8h] [rbp-30h]
  __int128 v40; // [rsp+E8h] [rbp-20h]
  _BYTE v41[16]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  if ( ((*(_DWORD *)(a5 + 32) - 1) & 0xFFFFFFF9) != 0 )
  {
    LODWORD(v31) = (*(_DWORD *)(a4 + 12) + *(_DWORD *)(a4 + 20)) / 2;
    v30 = *(_DWORD *)(a5 + 20);
    v8 = 2;
    v9 = 6;
    if ( v30 <= (int)v31 )
    {
      v8 = 6;
      v9 = 2;
    }
    memset(&v34[16], 0, 32);
    v10 = (int *)(a4 + 8);
    if ( *(_BYTE *)(a5 + 36) )
    {
      v33 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      v11 = (RECT *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)&v32, v9, v10);
      RectForRegion = SnapLayoutHelpers::GetRectForRegion(
                        v11,
                        0,
                        *(SnapRectHelpers **)a4,
                        (void *)(a4 + 48),
                        (struct tagRECT *)&v33,
                        (__int64)&v35);
      if ( RectForRegion < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xAD,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)(unsigned int)RectForRegion,
          v28);
      if ( Geometry::CRect::Contains((Geometry::CRect *)&v33, (const struct tagPOINT *)(a5 + 16)) )
        goto LABEL_9;
      v32 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      v16 = (RECT *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)v41, v8, (int *)(a4 + 8));
      v17 = SnapLayoutHelpers::GetRectForRegion(
              v16,
              0,
              *(SnapRectHelpers **)a4,
              (void *)(a4 + 48),
              (struct tagRECT *)&v32,
              (__int64)&v38);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC2,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)(unsigned int)v17,
          v29);
      if ( !Geometry::CRect::Contains((Geometry::CRect *)&v32, (const struct tagPOINT *)(a5 + 16))
        && ((v18 = *(_DWORD *)(a5 + 20), v30 > (int)v31)
          ? (v19 = v33.m128i_i32[1] - v18, v20 = v18 - v32.m128i_i32[3])
          : (v19 = v18 - v33.m128i_i32[3], v20 = v32.m128i_i32[1] - v18),
            v19 < v20) )
      {
LABEL_9:
        v13 = v33;
        *(_OWORD *)v34 = v35;
        v14 = v36;
        v15 = v37;
      }
      else
      {
        v13 = v32;
        v9 = v8;
        *(_OWORD *)v34 = v38;
        v14 = v39;
        v15 = v40;
      }
      *(_OWORD *)&v34[16] = v14;
      *(_OWORD *)&v34[32] = v15;
    }
    else
    {
      v13 = *(__m128i *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)v41, v9, v10);
    }
    v32 = *(__m128i *)(a5 + 40);
    v21 = *(_DWORD *)(a5 + 20);
    if ( v9 == 2 )
    {
      v22 = v21 + 1;
      v23 = _mm_srli_si128(v13, 8).m128i_u64[0];
      if ( SHIDWORD(v23) >= v22 )
        v22 = HIDWORD(v23);
      v32.m128i_i32[3] = v22;
    }
    else
    {
      v24 = v21 - 1;
      if ( v24 >= v13.m128i_i32[1] )
        v24 = v13.m128i_i32[1];
      v32.m128i_i32[1] = v24;
    }
    v25 = CSnapComponentTelemetry::SendSnapFillTypeEvent((unsigned int *)v34, v9, a3);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x102,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)v25);
    v34[0] = 0;
    *(__m128i *)&v34[4] = v13;
    v26 = v32;
    *(__m128i *)&v34[20] = v32;
    *(_OWORD *)a2 = *(_OWORD *)v34;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)&v34[16];
    *(_DWORD *)(a2 + 32) = _mm_cvtsi128_si32(_mm_srli_si128(v26, 12));
  }
  else
  {
    v31 = &DefaultSnapLayout::`vftable';
    DefaultSnapLayout::CalculateSnapRegion((__int64)&v31, a2, a3, a4, a5);
  }
  return a2;
}
