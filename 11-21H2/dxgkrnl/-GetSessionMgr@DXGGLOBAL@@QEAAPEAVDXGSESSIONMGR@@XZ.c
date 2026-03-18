/*
 * XREFs of ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C030A8A0
 * Callers:
 *     ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1C0017FB0 (-Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z.c)
 *     ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0018440 (-OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0018DE0 (-Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x1C001C6BC (-Attach@DxgkAttachToObjectSession@@QEAAJXZ.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C0043CBC (-IsCurrentConsoleSession@@YAEXZ.c)
 * Callees:
 *     <none>
 */

struct DXGSESSIONMGR *__fastcall DXGGLOBAL::GetSessionMgr(DXGGLOBAL *this)
{
  return (struct DXGSESSIONMGR *)*((_QWORD *)this + 122);
}
