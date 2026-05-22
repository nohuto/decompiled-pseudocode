/*
 * XREFs of ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800E6F3C
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E2340 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800595B0 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800E587C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x1800E6980 (--$make_unique@$$BY0A@G$0A@@std@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@0@_K.c)
 *     ??$make_unique@$$BY0A@U_HIDP_LINK_COLLECTION_NODE@@$0A@@std@@YA?AV?$unique_ptr@$$BY0A@U_HIDP_LINK_COLLECTION_NODE@@U?$default_delete@$$BY0A@U_HIDP_LINK_COLLECTION_NODE@@@std@@@0@_K@Z @ 0x1800E69E0 (--$make_unique@$$BY0A@U_HIDP_LINK_COLLECTION_NODE@@$0A@@std@@YA-AV-$unique_ptr@$$BY0A@U_HIDP_LIN.c)
 *     ??$make_unique@$$BY0A@U_HIDP_VALUE_CAPS@@$0A@@std@@YA?AV?$unique_ptr@$$BY0A@U_HIDP_VALUE_CAPS@@U?$default_delete@$$BY0A@U_HIDP_VALUE_CAPS@@@std@@@0@_K@Z @ 0x1800E6A40 (--$make_unique@$$BY0A@U_HIDP_VALUE_CAPS@@$0A@@std@@YA-AV-$unique_ptr@$$BY0A@U_HIDP_VALUE_CAPS@@U.c)
 *     ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x180115B10 (-GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z.c)
 */

__int64 __fastcall DockDevice::Initialize(DockDevice *this, struct DockDeviceInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  PHIDP_LINK_COLLECTION_NODE v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // rdx
  int PanelIdFromDeviceInterfaceId; // eax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  int HIDCapabilities; // eax
  unsigned int v15; // ebx
  PHIDP_LINK_COLLECTION_NODE v17; // r14
  ULONG v18; // eax
  PHIDP_LINK_COLLECTION_NODE v19; // rbx
  NTSTATUS v20; // eax
  int v21; // ecx
  PHIDP_LINK_COLLECTION_NODE v22; // rbx
  NTSTATUS SpecificValueCaps; // eax
  PVOID *p_UserContext; // rcx
  __int64 v25; // rdx
  NTSTATUS v26; // eax
  USHORT ValueCapsLength; // [rsp+40h] [rbp-79h] BYREF
  PHIDP_LINK_COLLECTION_NODE LinkCollectionNodes; // [rsp+48h] [rbp-71h] BYREF
  USHORT v29[2]; // [rsp+50h] [rbp-69h] BYREF
  ULONG LinkCollectionNodesLength; // [rsp+54h] [rbp-65h] BYREF
  __int128 v31; // [rsp+58h] [rbp-61h] BYREF
  __int128 v32; // [rsp+68h] [rbp-51h]
  __int64 v33; // [rsp+78h] [rbp-41h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+80h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v4 = *((_QWORD *)this + 2);
  v5 = *((_QWORD *)this + 1);
  v31 = 0LL;
  LODWORD(v31) = 4;
  v32 = 0LL;
  v33 = 0LL;
  v6 = RIMGetDeviceProperties(v5, v4, &v31);
  if ( v6 >= 0 )
  {
    std::make_unique<unsigned short [0],0>(&LinkCollectionNodes, DWORD2(v31));
    v7 = LinkCollectionNodes;
    v8 = *((_QWORD *)this + 2);
    v9 = *((_QWORD *)this + 1);
    *(_QWORD *)&v32 = LinkCollectionNodes;
    v10 = RIMGetDeviceProperties(v9, v8, &v31);
    if ( v10 >= 0 )
    {
      PanelIdFromDeviceInterfaceId = PanelHelper::GetPanelIdFromDeviceInterfaceId(
                                       &v7->LinkUsage,
                                       v11,
                                       (unsigned __int16 *)a2 + 774);
      if ( PanelIdFromDeviceInterfaceId < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          38LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
          (const char *)(unsigned int)PanelIdFromDeviceInterfaceId);
    }
    else
    {
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0x20,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( v7 )
      operator delete[](v7);
  }
  else
  {
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x18,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
      (const char *)(unsigned int)v6);
  }
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  LinkCollectionNodes = 0LL;
  HIDCapabilities = HIDDevice::GetHIDCapabilities(
                      (PHIDP_PREPARSED_DATA *)this,
                      (struct _HIDP_CAPS **)&LinkCollectionNodes);
  v15 = HIDCapabilities;
  if ( HIDCapabilities >= 0 )
  {
    v17 = LinkCollectionNodes;
    v18 = WORD2(LinkCollectionNodes[1].UserContext);
    LinkCollectionNodesLength = v18;
    if ( (_WORD)v18 )
    {
      std::make_unique<_HIDP_LINK_COLLECTION_NODE [0],0>(&LinkCollectionNodes, v18);
      v19 = LinkCollectionNodes;
      v20 = HidP_GetLinkCollectionNodes(LinkCollectionNodes, &LinkCollectionNodesLength, PreparsedData);
      if ( v20 >= 0 )
      {
        v21 = 0;
        if ( LinkCollectionNodesLength )
        {
          while ( v19[v21].LinkUsagePage != 1 || v19[v21].LinkUsage != 213 )
          {
            if ( ++v21 >= LinkCollectionNodesLength )
              goto LABEL_20;
          }
          *((_BYTE *)a2 + 1663) = 1;
          *((_WORD *)a2 + 832) = v21;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_NtStatus(
          retaddr,
          (void *)0x38,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
          (const char *)(unsigned int)v20);
      }
LABEL_20:
      if ( v19 )
        operator delete[](v19);
    }
    if ( *((_BYTE *)a2 + 1663) )
    {
      ValueCapsLength = v17[2].LinkUsage;
      std::make_unique<_HIDP_VALUE_CAPS [0],0>(&LinkCollectionNodes, ValueCapsLength);
      v22 = LinkCollectionNodes;
      SpecificValueCaps = HidP_GetSpecificValueCaps(
                            HidP_Input,
                            1u,
                            *((_WORD *)a2 + 832),
                            0,
                            (PHIDP_VALUE_CAPS)LinkCollectionNodes,
                            &ValueCapsLength,
                            PreparsedData);
      if ( SpecificValueCaps >= 0 )
      {
        if ( ValueCapsLength )
        {
          p_UserContext = &v22[1].UserContext;
          v25 = ValueCapsLength;
          do
          {
            if ( *((_WORD *)p_UserContext + 8) == 48 )
            {
              *((_DWORD *)a2 + 417) = *(_DWORD *)p_UserContext;
              *((_DWORD *)a2 + 419) = *((_DWORD *)p_UserContext + 1) + 1;
            }
            else if ( *((_WORD *)p_UserContext + 8) == 49 )
            {
              *((_DWORD *)a2 + 418) = *(_DWORD *)p_UserContext;
              *((_DWORD *)a2 + 420) = *((_DWORD *)p_UserContext + 1) + 1;
            }
            p_UserContext += 9;
            --v25;
          }
          while ( v25 );
        }
      }
      else
      {
        wil::details::in1diag3::_Log_NtStatus(
          retaddr,
          (void *)0x53,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
          (const char *)(unsigned int)SpecificValueCaps);
      }
      if ( v22 )
        operator delete[](v22);
    }
    memset_0(&ValueCaps, 0, sizeof(ValueCaps));
    v29[0] = 1;
    v26 = HidP_GetSpecificValueCaps(HidP_Input, 1u, 0, 0xD0u, &ValueCaps, v29, PreparsedData);
    if ( v26 >= 0 )
    {
      *((_BYTE *)a2 + 1662) = ValueCaps.ReportCount > 1u;
      return 0LL;
    }
    else
    {
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x71,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)v26);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return v15;
  }
}
