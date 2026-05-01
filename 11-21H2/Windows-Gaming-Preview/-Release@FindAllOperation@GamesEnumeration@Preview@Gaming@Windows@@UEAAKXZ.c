/*
 * XREFs of ?Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x18002A2A0
 * Callers:
 *     ?Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180028170 (-Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x1800284D0 (-Release@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(this);
}
