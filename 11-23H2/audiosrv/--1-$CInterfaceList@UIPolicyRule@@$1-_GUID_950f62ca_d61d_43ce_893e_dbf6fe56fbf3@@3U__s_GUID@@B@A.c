/*
 * XREFs of ??1?$CInterfaceList@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@QEAA@XZ @ 0x1800E9D70
 * Callers:
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$3 @ 0x18007CE4A (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>::~CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>(
        void *a1)
{
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::RemoveAll(a1);
}
