/*
 * XREFs of ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C01D44BC
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C01D4290 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C01D43BC (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C01D5B10 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 */

void __fastcall CDS_JOURNAL::FillPathDescriptor(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct D3DKMT_AUGMENT_CDSJ *a2,
        struct DXGADAPTER *a3)
{
  struct DXGADAPTER *v4; // r10
  bool v5; // r11
  _DWORD v6[9]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v7; // [rsp+54h] [rbp-54h]
  __int128 v8; // [rsp+5Ch] [rbp-4Ch]
  __int128 v9; // [rsp+6Ch] [rbp-3Ch]
  __int64 v10; // [rsp+7Ch] [rbp-2Ch]

  v7 = 0LL;
  v10 = 0LL;
  *(_OWORD *)v6 = 0LL;
  *(_OWORD *)&v6[5] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v6, a2, a3);
  CDS_JOURNAL::_FillPathDescriptor(a1, (const struct CDS_JOURNAL::_ENTRY *)v6, v5, 0, v4);
}
