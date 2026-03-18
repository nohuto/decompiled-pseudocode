/*
 * XREFs of ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C039C714
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216A7C (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C039D14C (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogDriverRecommendVidPnPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2)
{
  char *v2; // rdi
  struct _LUID *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  DXGADAPTER *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned int v12; // r14d
  __int64 v13; // rbx
  __int64 v14; // rax
  struct _DXGK_DIAG_HEADER *v15; // rdi
  signed int v16; // eax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)a1 + 160;
  v6 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    v7 = *(_QWORD *)(v6 + 8);
  }
  v8 = *(DXGADAPTER **)(v7 + 16);
  v18 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v8, v5, 0LL, &v18);
  v9 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)v2) + 48);
  v11 = *(_QWORD *)(v9 + 8);
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    v11 = *(_QWORD *)(v9 + 8);
  }
  v12 = *((_DWORD *)a1 + 10);
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 404LL);
  v14 = operator new[](144 * v12 + 56, 0x4E506456u, 256LL, v10);
  v15 = (struct _DXGK_DIAG_HEADER *)v14;
  if ( !v14 )
  {
    DxgkLogCodePointPacketForSession(0x38u, v18, 0xC0000017, 0, 0, v13);
    return;
  }
  *(_DWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 32) = 0LL;
  *(_DWORD *)v14 = 34;
  *(_DWORD *)(v14 + 4) = 144 * v12 + 56;
  *(_OWORD *)(v14 + 8) = 0LL;
  *(_QWORD *)(v14 + 24) = 0LL;
  *(_DWORD *)(v14 + 48) = a2;
  *(_DWORD *)(v14 + 52) = v12;
  v16 = DmmStoreVidPnPathDataIntoDiagPacket(a1, v12, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v14 + 56));
  v17 = v18;
  if ( v16 < 0 )
    goto LABEL_10;
  v16 = DxgkWriteDiagEntry(v15, v18);
  if ( v16 < 0 )
  {
    v17 = v18;
LABEL_10:
    DxgkLogCodePointPacketForSession(0x38u, v17, v16, 0, 0, v13);
  }
  operator delete[](v15);
}
