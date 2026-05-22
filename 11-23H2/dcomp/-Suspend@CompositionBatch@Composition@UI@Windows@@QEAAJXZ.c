/*
 * XREFs of ?Suspend@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x1800B80E2
 * Callers:
 *     ?Suspend@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJXZ @ 0x1800B8220 (-Suspend@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     ?InvalidateCurrentScopedSet@BatchController@Composition@UI@Windows@@AEAAXXZ @ 0x18015AF64 (-InvalidateCurrentScopedSet@BatchController@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?ValidateOnOwningThread@CompositionBatch@Composition@UI@Windows@@AEAAJXZ @ 0x1801979CC (-ValidateOnOwningThread@CompositionBatch@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionBatch::Suspend(
        Windows::UI::Composition::BatchController **this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rdx
  Windows::UI::Composition::BatchController *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::UI::Composition::CompositionBatch::ValidateOnOwningThread((Windows::UI::Composition::CompositionBatch *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  if ( !*((_BYTE *)this + 130) )
  {
    v5 = 147LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
      (const char *)0x8000000ELL);
    return 2147483662LL;
  }
  if ( *((_DWORD *)this + 33) )
  {
    v5 = 151LL;
    goto LABEL_5;
  }
  v6 = this[22];
  Windows::UI::Composition::BatchController::MigrateBatch((__int64)v6, (__int64)this, (__int64)v6 + 32, 1);
  if ( *((_DWORD *)this + 34) == *((_DWORD *)this[3] + 26) )
    Windows::UI::Composition::BatchController::InvalidateCurrentScopedSet(v6);
  return 0LL;
}
