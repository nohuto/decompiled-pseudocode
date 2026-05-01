/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&_::Run @ 0x18000B420
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18000B4BC (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x18002ACB8 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613____::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v2 + 228) == 1 )
  {
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(v2 + 224, 2LL);
    v3 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v3 + 52) )
      CFrameApplicationPresentation::_SetFrameCloakSerialized(v3, 0LL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
