/*
 * XREFs of ??$?0VDWMInputRouter@@@?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@QEAA@PEAVDWMInputRouter@@@Z @ 0x1801B7000
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISystemInputRouterHitTest>::ComPtr<ISystemInputRouterHitTest>(
        __int64 *a1,
        __int64 a2)
{
  *a1 = (a2 + 8) & -(__int64)(a2 != 0);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(a1);
  return a1;
}
