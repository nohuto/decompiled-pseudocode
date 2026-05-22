/*
 * XREFs of ?Create@InputSystemInternalServerConnection@@SA?AV?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18002C6E4
 * Callers:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18002C380 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C9C0 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ??$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalServerConnection@@@Z @ 0x18002CC2C (--$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     ??0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180036BC4 (--0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007EE54 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=6
struct ISMBamos_AutoBamos::BamoConnection **__fastcall InputSystemInternalServerConnection::Create(
        struct ISMBamos_AutoBamos::BamoConnection **a1,
        __int64 a2)
{
  const char *v4; // r9
  __int64 (__fastcall *v5)(__int64, PSECURITY_DESCRIPTOR, __int64 *); // rbx
  int v6; // eax
  int v7; // r9d
  int v8; // eax
  InputSystemInternal *v9; // rax
  InputSystemInternal *v10; // rbx
  struct ISMBamos_AutoBamos::BamoConnection *v11; // rsi
  InputSystemInternal *v12; // rcx
  int v14; // [rsp+20h] [rbp-30h]
  int v15; // [rsp+20h] [rbp-30h]
  InputSystemInternal *v16; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+88h] [rbp+38h] BYREF

  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0x001F0003;;;S-1-5-90-0)",
          1u,
          &SecurityDescriptor,
          0LL) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x1D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\inputsysteminternalserverconnection.cpp",
      v4);
  v19 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, __int64 *))(*(_QWORD *)a2 + 64LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v19);
  v6 = v5(a2, SecurityDescriptor, &v19);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\inputsysteminternalserverconnection.cpp",
      (const char *)(unsigned int)v6,
      v14);
  *a1 = 0LL;
  v17 = 1;
  v16 = 0LL;
  v8 = Microsoft::Bamo::BaseBamoConnection::CreateServer<InputSystemInternalServerConnection>(
         a2,
         v19,
         (unsigned int)&v16,
         v7,
         (__int64)a1);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\inputsysteminternalserverconnection.cpp",
      (const char *)(unsigned int)v8,
      v15);
  v16 = (InputSystemInternal *)operator new(0x48uLL);
  v9 = InputSystemInternal::InputSystemInternal(v16, *a1);
  v10 = v9;
  v11 = *a1;
  v12 = (InputSystemInternal *)*((_QWORD *)*a1 + 29);
  if ( v12 != v9 )
  {
    if ( v9 )
    {
      (**(void (__fastcall ***)(InputSystemInternal *))v9)(v9);
      v12 = (InputSystemInternal *)*((_QWORD *)v11 + 29);
    }
    *((_QWORD *)v11 + 29) = v10;
    if ( v12 )
      (*(void (__fastcall **)(InputSystemInternal *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v19);
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&SecurityDescriptor);
  return a1;
}
