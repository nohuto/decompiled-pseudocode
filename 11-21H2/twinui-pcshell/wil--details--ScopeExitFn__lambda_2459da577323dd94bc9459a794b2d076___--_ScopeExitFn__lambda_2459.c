/*
 * XREFs of wil::details::ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___::_ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___ @ 0x18048A010
 * Callers:
 *     _VirtualDesktopDataSource::Initialize_::_1_::dtor$1 @ 0x1802225A8 (_VirtualDesktopDataSource--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x18048BCCC (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___::_ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    VirtualDesktopDataSource::UninitializeInternal(*(VirtualDesktopDataSource **)a1);
  }
}
