/*
 * XREFs of ?ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS@@@Z @ 0x18024B8B4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x1800045A8 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessClearCasters(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS *a3)
{
  CProjectedShadowScene::ClearCasters(this);
  return 0LL;
}
