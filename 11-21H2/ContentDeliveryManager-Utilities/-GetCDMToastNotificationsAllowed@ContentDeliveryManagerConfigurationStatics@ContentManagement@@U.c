/*
 * XREFs of ?GetCDMToastNotificationsAllowed@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAJPEAE@Z @ 0x180090FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::GetCDMToastNotificationsAllowed(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this,
        unsigned __int8 *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  LPVOID v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  LPVOID v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  LPVOID v12; // rcx
  __int64 v13; // rcx
  LPVOID v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned __int8 v16; // [rsp+58h] [rbp+28h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  *a2 = 1;
  ppv = 0LL;
  v3 = CoCreateInstance(
         &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
         0LL,
         0x17u,
         &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
         &ppv);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\contentdeliverymanagerconfiguration\\contentdeliv"
               "erymanagerconfiguration.cpp",
      (const char *)(unsigned int)v3);
    v5 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v4;
  }
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(LPVOID, const wchar_t *, __int64 *))(*(_QWORD *)ppv + 24LL))(
         ppv,
         L"Windows.SystemToast.Suggested",
         &v18);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\contentdeliverymanagerconfiguration\\contentdeliv"
               "erymanagerconfiguration.cpp",
      (const char *)(unsigned int)v7);
    v8 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v4;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v18 + 40LL))(v18, &v16);
  v4 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\contentdeliverymanagerconfiguration\\contentdeliv"
               "erymanagerconfiguration.cpp",
      (const char *)(unsigned int)v10);
    v11 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v4;
  }
  *a2 = v16;
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0LL;
}
