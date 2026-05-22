/*
 * XREFs of ?OnRemoved@OcclusionRectListProxy@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x180157D80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801CA5D4 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x1801CA8BC (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 */

__int64 __fastcall OcclusionRectListProxy::OnRemoved(
        OcclusionRectListProxy *this,
        __int64 a2,
        const struct DisplayOcclusionRect *a3)
{
  DisplayOcclusionContextProvider *Instance; // rax

  Instance = DisplayOcclusionContextProvider::GetInstance();
  DisplayOcclusionContextProvider::OnOcclusionRectRemoved(Instance, a3);
  return 0LL;
}
