/*
 * XREFs of ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z @ 0x180061E40
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x180061EA8 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWindowNode::ProcessCreate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_CREATE *a3)
{
  struct CProcessAttribution **v3; // rdi
  bool v4; // zf
  int ProcessAttribution; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct CProcessAttribution **)((char *)this + 744);
  v4 = *((_QWORD *)this + 93) == 0LL;
  *((_QWORD *)this + 91) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 92) = *((_QWORD *)a3 + 1);
  if ( !v4 )
    RaiseFailFastException(0LL, 0LL, 0);
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(
                         qword_1803D33D8,
                         *((_DWORD *)a3 + 8),
                         *((_QWORD *)a3 + 3),
                         v3);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr);
  return 0LL;
}
