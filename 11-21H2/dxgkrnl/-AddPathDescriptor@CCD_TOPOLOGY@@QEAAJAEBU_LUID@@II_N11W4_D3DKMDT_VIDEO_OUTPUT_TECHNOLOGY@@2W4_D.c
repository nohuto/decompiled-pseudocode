/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01AC918
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C01AC3D4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C01D4290 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C01E3CF4 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C03AC838 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N22@Z @ 0x1C03ADC4C (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C01ACA50 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        __int64 a1,
        __int64 *a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        int a8,
        int a9,
        int a10,
        __int64 *a11)
{
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx

  CCD_TOPOLOGY::ClearModalitySetId((CCD_TOPOLOGY *)a1);
  v15 = *(_QWORD *)(a1 + 64);
  if ( !v15 )
    return 3221225507LL;
  v16 = *(unsigned __int16 *)(v15 + 20);
  if ( (unsigned __int16)v16 >= *(_WORD *)(v15 + 22) )
    return 3221225507LL;
  v17 = 296 * v16;
  v18 = *a2;
  v19 = v17 + v15 + 56;
  *(_OWORD *)(v19 + 256) = 0LL;
  *(_QWORD *)(v19 + 16) = v18;
  *(_DWORD *)(v19 + 24) = a3;
  *(_BYTE *)(v19 + 129) = a5 | (4 * a7) | (2 * a6);
  v20 = 0x8700000000000LL;
  *(_QWORD *)v19 = 0x8700000000000LL;
  *(_DWORD *)(v19 + 28) = a4;
  *(_OWORD *)(v19 + 272) = 0LL;
  *(_QWORD *)(v19 + 288) = 0LL;
  *(_DWORD *)(v19 + 256) = *(_DWORD *)(a1 + 88);
  if ( a8 != -2 && a9 != -2 )
  {
    v20 = 0x8F00000000000LL;
    *(_DWORD *)(v19 + 88) = a8;
    *(_QWORD *)v19 = 0x8F00000000000LL;
    *(_DWORD *)(v19 + 92) = a9;
  }
  *(_DWORD *)(v19 + 212) = a10;
  if ( a10 )
    *(_QWORD *)v19 = v20 | 0x1000000000LL;
  ++*(_WORD *)(*(_QWORD *)(a1 + 64) + 20LL);
  if ( a11 )
    *a11 = v19;
  return 0LL;
}
