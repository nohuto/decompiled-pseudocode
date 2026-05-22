/*
 * XREFs of wil::details::ScopeExitFn__lambda_b2cb5666e9167eff148b60ff2fc879bb___::_ScopeExitFn__lambda_b2cb5666e9167eff148b60ff2fc879bb___ @ 0x1801116BC
 * Callers:
 *     ?Deferred_InvokeTransformChanged@CompositionIsland@Composition@UI@Windows@@CAJPEAX@Z @ 0x18006B870 (-Deferred_InvokeTransformChanged@CompositionIsland@Composition@UI@Windows@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_b2cb5666e9167eff148b60ff2fc879bb___::_ScopeExitFn__lambda_b2cb5666e9167eff148b60ff2fc879bb___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return Microsoft::WRL2::NestableRuntimeClass::InternalRelease(**(Microsoft::WRL2::NestableRuntimeClass ***)a1);
  }
  return result;
}
