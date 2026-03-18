/*
 * XREFs of ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x1C001C6BC
 * Callers:
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1C001C630 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C030A8A0 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C034800C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkAttachToObjectSession::Attach(DxgkAttachToObjectSession *this)
{
  unsigned int v1; // ebp
  int v3; // edi
  __int64 CurrentProcess; // rax
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax

  v1 = *((_DWORD *)this + 4);
  v3 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v1 )
  {
    Global = DXGGLOBAL_GetGlobal();
    SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
    v3 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v1, (struct _KPROCESS **)this + 1);
    if ( v3 >= 0 )
    {
      KeStackAttachProcess(*((PRKPROCESS *)this + 1), (PRKAPC_STATE)((char *)this + 24));
      *(_BYTE *)this = 1;
    }
  }
  return (unsigned int)v3;
}
