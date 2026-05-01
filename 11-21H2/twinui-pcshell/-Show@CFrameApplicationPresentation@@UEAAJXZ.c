/*
 * XREFs of ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x18000DD60
 * Callers:
 *     <none>
 * Callees:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x18000DD9C (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18000EA1C (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 */

__int64 __fastcall CFrameApplicationPresentation::Show(CFrameApplicationPresentation *this)
{
  if ( !*((_BYTE *)this + 52) )
  {
    CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(this);
    if ( *((_DWORD *)this + 57) != 1 )
      CFrameApplicationPresentation::_SetFrameCloakSerialized(this, 0LL);
    *((_BYTE *)this + 52) = 1;
  }
  return 0LL;
}
