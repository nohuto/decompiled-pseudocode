/*
 * XREFs of ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY08_N@Z @ 0x18013EDBC
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18013E68C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY08_N@Z @ 0x18013EDBC (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x180140588 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIPolicyRule@@@Z @ 0x180058DE8 (-AddHead@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180084474 (-RemoveAt@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@.c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY08_N@Z @ 0x18013EDBC (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x18013F0BC (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 */

__int64 __fastcall DynamicAudioEndpointManager::BuildRefreshListAndAddRule(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  char v7; // bp
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int refreshed; // esi
  __int64 v13; // rdx
  unsigned int v15; // edi
  __int64 v16; // rdi
  __int64 *v17; // rbx
  _QWORD *v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3;
  v7 = a2;
  if ( (unsigned int)a3 > 8 && (_DWORD)a3 != 0x7FFF )
  {
    v10 = 295LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( a4 > 2 )
  {
    v10 = 296LL;
    goto LABEL_23;
  }
  if ( (_DWORD)a3 == 0x7FFF )
  {
    v11 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = v7;
      refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(a1, a2, v11, a4, a5, a6);
      if ( refreshed < 0 )
        break;
      if ( (int)++v11 >= 9 )
        return 0LL;
    }
    v13 = 302LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)refreshed);
    return (unsigned int)refreshed;
  }
  if ( a4 == 2 )
  {
    v15 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = v7;
      refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(a1, a2, v6, v15, a5, a6);
      if ( refreshed < 0 )
        break;
      if ( (int)++v15 >= 2 )
        return 0LL;
    }
    v13 = 309LL;
    goto LABEL_11;
  }
  v16 = (int)a3 + 9LL * (int)a4;
  v17 = (__int64 *)(48 * v16 + a1 + 56);
  if ( !(_BYTE)a2 )
  {
    v18 = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
                      48 * v16 + a1 + 56,
                      a5);
    ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>>::RemoveAt(
      v17,
      v18);
  }
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::AddHead(
    v17,
    a5,
    a3);
  *(_BYTE *)(v16 + a6) = 1;
  return 0LL;
}
