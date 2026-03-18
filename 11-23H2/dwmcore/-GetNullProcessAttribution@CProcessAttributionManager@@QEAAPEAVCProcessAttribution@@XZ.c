/*
 * XREFs of ?GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ @ 0x180076F3C
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x180076C14 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 * Callees:
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x1800E7E90 (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     _Init_thread_footer @ 0x18010F8D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18010F938 (_Init_thread_header.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

struct CProcessAttribution *__fastcall CProcessAttributionManager::GetNullProcessAttribution(
        CProcessAttributionManager *this)
{
  int v3; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CProcessAttribution *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( dword_1803E9F98 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1803E9F98);
    if ( dword_1803E9F98 == -1 )
    {
      v3 = CProcessAttributionManager::CreateProcessAttribution(
             this,
             0xFFFFFFFF,
             (const struct CProcessAttributionManager::ProcessAttributionRecord *)&unk_1803E65F0,
             0,
             &v5);
      if ( v3 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
      qword_1803E5E60 = (__int64)v5;
      Init_thread_footer(&dword_1803E9F98);
    }
  }
  return (struct CProcessAttribution *)qword_1803E5E60;
}
