/*
 * XREFs of ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1803E8474
 * Callers:
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803E7F90 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1803E89A4 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::SetMDMPolicyLayoutTimestampToCurrent(
        TaskbarLayoutPolicyManager *this,
        __int64 a2,
        __int64 a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  signed int nothrow; // ebx
  __int64 v5; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  TaskbarLayoutPolicyManager *v9; // [rsp+50h] [rbp+8h] BYREF
  ULONG v10; // [rsp+58h] [rbp+10h] BYREF

  v9 = this;
  v10 = 0;
  nothrow = wil::wnf_query_nothrow(this, (const struct _WNF_STATE_NAME *)&v9, (bool *)&v10, a4);
  if ( nothrow < 0 )
  {
    v5 = 651LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)nothrow);
    return (unsigned int)nothrow;
  }
  if ( !(_BYTE)v9 )
  {
    nothrow = -2147418113;
    v5 = 654LL;
    goto LABEL_3;
  }
  LODWORD(v9) = v10;
  v7 = _RegSetKeyValueWithSDDL(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
         L"MDMLayoutXMLLastModified",
         4u,
         (BYTE *)&v9,
         4u);
  nothrow = v7;
  if ( v7 > 0 )
    nothrow = (unsigned __int16)v7 | 0x80070000;
  if ( nothrow < 0 )
  {
    v5 = 656LL;
    goto LABEL_3;
  }
  return 0LL;
}
