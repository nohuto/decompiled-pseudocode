/*
 * XREFs of ?OnReplaced@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x180149AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@I@Z @ 0x180149210 (--$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoC.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801BCD64 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x1801BD190 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 */

__int64 __fastcall OcclusionRectListProxy::OnReplaced(
        OcclusionRectListProxy *this,
        unsigned int a2,
        const struct DisplayOcclusionRect *a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 Struct; // rbx
  DisplayOcclusionContextProvider *Instance; // rax

  v3 = *((_QWORD *)this + 4);
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 32LL);
  if ( *(int *)(v7 + 8) > 0 )
    v6 = *(_QWORD *)(v7 + 16);
  Struct = Microsoft::Bamo::GetStructAt<DisplayOcclusionRect>(v6, (_QWORD *)this + 6, a2);
  Instance = DisplayOcclusionContextProvider::GetInstance();
  DisplayOcclusionContextProvider::OnOcclusionRectUpdated(
    Instance,
    (const struct DockInputIdentity *)Struct,
    (const struct tagRECT *)(Struct + 24));
  return 0LL;
}
