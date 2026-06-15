/*
 * XREFs of ??1PolicyRule@@UEAA@XZ @ 0x180130E6C
 * Callers:
 *     ??_EAvoidEndpointPolicyRule@@UEAAPEAXI@Z @ 0x180130FE0 (--_EAvoidEndpointPolicyRule@@UEAAPEAXI@Z.c)
 *     ??_GCommunicationsRemapPolicyRule@@UEAAPEAXI@Z @ 0x180131030 (--_GCommunicationsRemapPolicyRule@@UEAAPEAXI@Z.c)
 *     ??_GPolicyRule@@UEAAPEAXI@Z @ 0x1801310C0 (--_GPolicyRule@@UEAAPEAXI@Z.c)
 *     ??_GRemapPolicyRule@@UEAAPEAXI@Z @ 0x180131100 (--_GRemapPolicyRule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x1800E2A88 (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@.c)
 */

void __fastcall PolicyRule::~PolicyRule(PolicyRule *this)
{
  *(_QWORD *)this = &PolicyRule::`vftable';
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::RemoveAll((_QWORD *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
