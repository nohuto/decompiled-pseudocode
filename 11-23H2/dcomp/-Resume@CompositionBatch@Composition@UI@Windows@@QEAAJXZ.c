/*
 * XREFs of ?Resume@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x1800B804E
 * Callers:
 *     ?Resume@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJXZ @ 0x1800B81A0 (-Resume@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyBatchResumed@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z @ 0x1800B7CC0 (-NotifyBatchResumed@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z.c)
 *     ?ValidateOnOwningThread@CompositionBatch@Composition@UI@Windows@@AEAAJXZ @ 0x1801979CC (-ValidateOnOwningThread@CompositionBatch@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionBatch::Resume(Windows::UI::Composition::BatchController **this)
{
  int v2; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::UI::Composition::CompositionBatch::ValidateOnOwningThread((Windows::UI::Composition::CompositionBatch *)this);
  if ( v2 >= 0 )
  {
    if ( !*((_DWORD *)this + 33) || *((_BYTE *)this + 128) || *((_BYTE *)this + 129) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC1,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
        (const char *)0x8000000ELL);
      return 2147483662LL;
    }
    else
    {
      Windows::UI::Composition::BatchController::NotifyBatchResumed(
        this[22],
        (struct Windows::UI::Composition::CompositionBatch *)this);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
}
