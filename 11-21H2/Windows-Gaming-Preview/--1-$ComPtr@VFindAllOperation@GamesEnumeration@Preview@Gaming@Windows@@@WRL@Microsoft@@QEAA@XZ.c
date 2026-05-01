/*
 * XREFs of ??1?$ComPtr@VFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180020588
 * Callers:
 *     __lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator()_::_1_::dtor$0 @ 0x18004CA8D (__lambda_f9c49c7b293ed1d0382b2914a11b6bf4_--operator()_--_1_--dtor$0.c)
 *     __lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator()_::_1_::dtor$4 @ 0x18004CAD4 (__lambda_f9c49c7b293ed1d0382b2914a11b6bf4_--operator()_--_1_--dtor$4.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A1E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIIns_ea_18002A1E0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>::~ComPtr<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(
             result,
             a2,
             a3);
  }
  return result;
}
