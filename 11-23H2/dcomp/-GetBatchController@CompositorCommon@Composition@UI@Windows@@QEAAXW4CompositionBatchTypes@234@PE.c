/*
 * XREFs of ?GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PEAPEAVBatchController@234@@Z @ 0x18001A958
 * Callers:
 *     ?GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEAVCompositionCommitBatch@234@@Z @ 0x180002CBC (-GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEA.c)
 *     ?Destroy@CompositionEffectFactory@Composition@UI@Windows@@UEAAXXZ @ 0x180019160 (-Destroy@CompositionEffectFactory@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Thunk_Message_CompilationSucceeded_62@?$IEffectTemplateEvent_Receive@VCompositionEffectFactory@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180019C30 (-Thunk_Message_CompilationSucceeded_62@-$IEffectTemplateEvent_Receive@VCompositionEffectFactory@.c)
 *     ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z @ 0x180019CDC (-RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 *     ?Message_CompilationFailed@CompositionEffectFactory@Composition@UI@Windows@@QEAAJJPEBG@Z @ 0x180176AA4 (-Message_CompilationFailed@CompositionEffectFactory@Composition@UI@Windows@@QEAAJJPEBG@Z.c)
 *     ?EnsureRegisteredInBatch@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x180190720 (-EnsureRegisteredInBatch@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::GetBatchController(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 3 )
        Microsoft::WRL2::FailFast::Do();
      result = a1 + 680;
    }
    else
    {
      result = a1 + 752;
    }
  }
  else
  {
    result = a1 + 608;
  }
  *a3 = result;
  return result;
}
