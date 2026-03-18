/*
 * XREFs of ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C03AAA6C
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C02F0370 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C03ADAC4 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C01AB444 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C03AA898 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall CCD_BTL::ConvertVidPnToPathsModality(
        CCD_BTL *this,
        struct DMMVIDPN *a2,
        struct D3DKMT_GETPATHSMODALITY **a3,
        __int64 a4)
{
  unsigned __int16 v4; // bx
  unsigned __int16 v8; // di
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // edi
  int *v19; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int16 v20; // [rsp+30h] [rbp-41h]
  int v21; // [rsp+38h] [rbp-39h] BYREF
  __int128 v22; // [rsp+40h] [rbp-31h]
  __int64 v23; // [rsp+50h] [rbp-21h]
  __int16 v24; // [rsp+58h] [rbp-19h]
  __int128 v25; // [rsp+60h] [rbp-11h]
  __int64 v26; // [rsp+70h] [rbp-1h]
  struct D3DKMT_GETPATHSMODALITY *v27; // [rsp+78h] [rbp+7h]
  bool v28; // [rsp+80h] [rbp+Fh]
  int v29; // [rsp+84h] [rbp+13h]
  int v30; // [rsp+88h] [rbp+17h]
  __int64 v31; // [rsp+8Ch] [rbp+1Bh]
  __int64 v32; // [rsp+98h] [rbp+27h]

  v4 = 0;
  if ( !a2 || !a3 || *a3 )
    WdLogSingleEntry0(1LL);
  v8 = *((_WORD *)a2 + 68);
  v9 = v8;
  if ( v8 <= 1u )
    v9 = 1LL;
  v10 = *((unsigned __int16 *)a2 + 68);
  if ( v8 <= 1u )
    v10 = *((unsigned __int16 *)a2 + 68);
  v11 = 296 * v9;
  v12 = operator new[](296 * v9 + 56, 0x63644356u, 256LL, a4);
  *a3 = (struct D3DKMT_GETPATHSMODALITY *)v12;
  if ( v12 )
  {
    *(_WORD *)(v12 + 22) = v8;
    if ( v8 )
    {
      v27 = *a3;
      v21 = 0;
      v28 = v27 == 0LL;
      v23 = 0LL;
      v22 = 0LL;
      v24 = 0;
      v25 = 0LL;
      v26 = 0LL;
      v29 = 0;
      v30 = 1;
      v31 = 0LL;
      v32 = 0LL;
      v19 = &v21;
      v20 = 0;
      v14 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v19, a2);
      v18 = v14;
      if ( v14 >= 0 )
      {
        if ( v27 )
          v4 = *((_WORD *)v27 + 10);
        LOBYTE(v15) = 1;
        if ( v4 < v20 )
          v18 = -1073741789;
        CCD_TOPOLOGY::AdjustDesktopLayout((CCD_TOPOLOGY *)&v21, v15, v16, v17);
      }
      else
      {
        WdLogSingleEntry3(2LL, v14, a2, v10);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v21);
      return v18;
    }
    else
    {
      WdLogSingleEntry3(7LL, this, a2, a3);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry3(6LL, v11 + 56, a2, v10);
    return 3221225495LL;
  }
}
