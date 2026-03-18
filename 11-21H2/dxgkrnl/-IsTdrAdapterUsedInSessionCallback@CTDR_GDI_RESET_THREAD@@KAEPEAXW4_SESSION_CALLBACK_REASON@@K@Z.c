/*
 * XREFs of ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0304F80
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

char __fastcall CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback(__int64 a1, int a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( a2 || a3 == (unsigned int)RtlGetActiveConsoleId() )
    return 1;
  Global = DXGGLOBAL_GetGlobal();
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     *((DXGSESSIONMGR **)Global + 122),
                                     a3);
  if ( !SessionDataForSpecifiedSession )
    return 0;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)((char *)SessionDataForSpecifiedSession + 18508);
  if ( v7 )
    return v8 == *(_QWORD *)(v7 + 404);
  return v8 != 0;
}
