/*
 * XREFs of ?HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z @ 0x1805A6A20
 * Callers:
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegion@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@PEAPEAUISnappedWindow@@PEAW4FillRule@1@4@Z @ 0x1805A2EC0 (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegion@@AEBV-$CCoSimpleArray@V-$ComPtr@UISnappe.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@_NPEAUtagRECT@@6PEAUSMART_FILL_OUTPUT@1@@Z @ 0x1805A568C (-GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PE.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

bool __fastcall SnapLayoutHelpers::HasNonComplementaryEdge(int a1, int a2, _DWORD *a3)
{
  int v3; // r9d
  __int64 *v4; // rax
  _OWORD v6[6]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v7; // [rsp+60h] [rbp-18h] BYREF

  if ( a3 )
    *a3 = 0;
  v3 = 0;
  if ( a1 != a2 )
  {
    v4 = (__int64 *)v6;
    v6[0] = _mm_load_si128((const __m128i *)&_xmm);
    v6[1] = _mm_load_si128((const __m128i *)&_xmm);
    v6[2] = _mm_load_si128((const __m128i *)&_xmm);
    v6[3] = _mm_load_si128((const __m128i *)&_xmm);
    v6[4] = _mm_load_si128((const __m128i *)&_xmm);
    v6[5] = _mm_load_si128((const __m128i *)&_xmm);
    while ( *(_DWORD *)v4 != a1 || *((_DWORD *)v4 + 1) != a2 )
    {
      v4 = (__int64 *)((char *)v4 + 12);
      if ( v4 == &v7 )
        goto LABEL_10;
    }
    v3 = *((_DWORD *)v4 + 2);
  }
LABEL_10:
  if ( a3 )
    *a3 = v3;
  return v3 != 0;
}
