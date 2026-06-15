/*
 * XREFs of ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18004B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x180014510 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::OnProcessSubmixStopped(
        CSharedStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  --*((_DWORD *)this + 89);
  CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
  return 0LL;
}
