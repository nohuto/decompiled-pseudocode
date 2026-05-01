/*
 * XREFs of wil::details::ScopeExitFn__lambda_f0510093555ddc3103aceadbcd18dd75___::_ScopeExitFn__lambda_f0510093555ddc3103aceadbcd18dd75___ @ 0x18037C820
 * Callers:
 *     __lambda_c705fc392f238fdd99026eb26c6a90d7_::operator()_::_1_::dtor$0 @ 0x18037CC43 (__lambda_c705fc392f238fdd99026eb26c6a90d7_--operator()_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::HideInternal_::_1_::dtor$0 @ 0x18037E46C (_CVirtualTouchpadExperienceManager--HideInternal_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewPropertiesChanging_::_1_::dtor$0 @ 0x18037ECA6 (_CVirtualTouchpadExperienceManager--OnViewPropertiesChanging_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x18037EDD3 (_CVirtualTouchpadExperienceManager--OnViewShown_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_f0510093555ddc3103aceadbcd18dd75___::_ScopeExitFn__lambda_f0510093555ddc3103aceadbcd18dd75___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_DWORD *)(result + 760) = 0;
  }
  return result;
}
