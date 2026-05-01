/*
 * XREFs of wil::details::ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___::_ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___ @ 0x180451ED8
 * Callers:
 *     __lambda_cad7757e6b1c49cd959dc880d2101d1e_::operator()_::_1_::dtor$0 @ 0x1804521D7 (__lambda_cad7757e6b1c49cd959dc880d2101d1e_--operator()_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::HideInternal_::_1_::dtor$0 @ 0x18045341B (_CVirtualTouchpadExperienceManager--HideInternal_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewPropertiesChanging_::_1_::dtor$0 @ 0x180453DF5 (_CVirtualTouchpadExperienceManager--OnViewPropertiesChanging_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x180453F2B (_CVirtualTouchpadExperienceManager--OnViewShown_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___::_ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___(
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
