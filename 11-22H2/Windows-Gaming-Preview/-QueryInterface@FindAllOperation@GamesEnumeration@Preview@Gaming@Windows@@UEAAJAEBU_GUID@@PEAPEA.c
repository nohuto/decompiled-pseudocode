/*
 * XREFs of ?QueryInterface@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029C40
 * Callers:
 *     ?QueryInterface@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028E00 (-QueryInterface@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800290A0 (-QueryInterface@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
