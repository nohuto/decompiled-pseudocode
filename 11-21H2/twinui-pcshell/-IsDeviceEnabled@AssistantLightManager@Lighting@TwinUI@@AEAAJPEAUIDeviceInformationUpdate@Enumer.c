/*
 * XREFs of ?IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumeration@Devices@Windows@@PEA_N@Z @ 0x18055F03C
 * Callers:
 *     ?OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@567@@Z @ 0x18055F3D0 (-OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800A18DC (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800A199C (--1RoVariant@@QEAA@XZ.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1800A19E0 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Lighting::AssistantLightManager::IsDeviceEnabled(
        TwinUI::Lighting::AssistantLightManager *this,
        struct Windows::Devices::Enumeration::IDeviceInformationUpdate *a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, struct IInspectable **); // rdi
  int v10; // edi
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int Boolean; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 v17[8]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v18; // [rsp+28h] [rbp-21h] BYREF
  _QWORD *v19; // [rsp+30h] [rbp-19h] BYREF
  int v20; // [rsp+38h] [rbp-11h]
  _QWORD *v21; // [rsp+40h] [rbp-9h] BYREF
  struct IInspectable *v22; // [rsp+48h] [rbp-1h] BYREF
  __int64 v23; // [rsp+50h] [rbp+7h] BYREF
  int v24; // [rsp+58h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+17h] BYREF
  __int64 v26; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v18 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Devices::Enumeration::IDeviceInformationUpdate *, __int64 *))(*(_QWORD *)a2 + 56LL))(
         a2,
         &v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x102,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v4);
    v6 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v5;
  }
  v19 = 0LL;
  v20 = 0;
  v8 = v18;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v18 + 48LL);
  v21 = &v19;
  v22 = 0LL;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"System.Devices.InterfaceEnabled",
    0x20u,
    0x1Fu);
  v10 = v9(v8, v26, &v22);
  v26 = 0LL;
  v11 = v21;
  RoVariant::RoVariant((RoVariant *)&v23, v22);
  v12 = *v11;
  *v11 = v23;
  v23 = v12;
  LODWORD(v12) = *((_DWORD *)v11 + 2);
  *((_DWORD *)v11 + 2) = v24;
  v24 = v12;
  RoVariant::~RoVariant((RoVariant *)&v23);
  if ( v10 >= 0 )
  {
    v21 = v19;
    LODWORD(v22) = v20;
    Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&v21, v17);
    v5 = Boolean;
    if ( Boolean < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x108,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)Boolean);
      RoVariant::~RoVariant((RoVariant *)&v19);
      v15 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      return v5;
    }
    *a3 = v17[0] != 0;
    RoVariant::~RoVariant((RoVariant *)&v19);
    v16 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v10);
    RoVariant::~RoVariant((RoVariant *)&v19);
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return (unsigned int)v10;
  }
}
