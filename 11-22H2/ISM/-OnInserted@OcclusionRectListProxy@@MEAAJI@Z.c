/*
 * XREFs of ?OnInserted@OcclusionRectListProxy@@MEAAJI@Z @ 0x180157C10
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@I@Z @ 0x1801574F0 (--$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoC.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801CA5D4 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x1801CA664 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 */

__int64 __fastcall OcclusionRectListProxy::OnInserted(OcclusionRectListProxy *this, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  const struct DockInputIdentity *Struct; // rbx
  DisplayOcclusionContextProvider *Instance; // rax

  v2 = *((_QWORD *)this + 4);
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 32LL);
  if ( *(int *)(v6 + 8) > 0 )
    v5 = *(_QWORD *)(v6 + 16);
  Struct = (const struct DockInputIdentity *)Microsoft::Bamo::GetStructAt<DisplayOcclusionRect>(
                                               v5,
                                               (_QWORD *)this + 6,
                                               a2);
  Instance = DisplayOcclusionContextProvider::GetInstance();
  DisplayOcclusionContextProvider::OnOcclusionRectAdded(Instance, Struct, Struct);
  return 0LL;
}
