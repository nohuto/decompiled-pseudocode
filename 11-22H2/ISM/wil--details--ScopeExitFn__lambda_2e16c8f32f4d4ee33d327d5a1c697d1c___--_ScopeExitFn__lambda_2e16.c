/*
 * XREFs of wil::details::ScopeExitFn__lambda_2e16c8f32f4d4ee33d327d5a1c697d1c___::_ScopeExitFn__lambda_2e16c8f32f4d4ee33d327d5a1c697d1c___ @ 0x1801231D0
 * Callers:
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x1801232D8 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_2e16c8f32f4d4ee33d327d5a1c697d1c___::_ScopeExitFn__lambda_2e16c8f32f4d4ee33d327d5a1c697d1c___(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v2 = **(void ***)a1;
    if ( v2 )
      operator delete[](v2);
    v3 = **(void ***)(a1 + 8);
    if ( v3 )
      operator delete[](v3);
  }
}
