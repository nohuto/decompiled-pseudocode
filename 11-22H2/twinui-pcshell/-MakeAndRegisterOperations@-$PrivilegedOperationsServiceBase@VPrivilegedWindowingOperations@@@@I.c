/*
 * XREFs of ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18012E28C
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1800E61F0 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivi.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowingOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowingOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012EEB4 (--$MakeAndInitialize@VPrivilegedWindowingOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperatio.c)
 *     ??$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z @ 0x18012F0C8 (--$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180140118 (-InternalRelease@-$ComPtr@VPrivilegedWindowingOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedWindowingOperations>::MakeAndRegisterOperations(
        volatile signed __int32 **a1,
        __int64 a2)
{
  volatile signed __int32 *v3; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 *v7; // rdi
  int v8; // ebx
  __int64 v10; // rdx
  int v11[2]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v12; // [rsp+28h] [rbp-40h] BYREF
  GUID v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v11 = a2;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v3);
  }
  v5 = Microsoft::WRL::Details::MakeAndInitialize<IamAccess,IamAccess,>(a1);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24D,
      (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v5,
      v11[0]);
    return v6;
  }
  else
  {
    v7 = (__int64 *)(a1 + 1);
    v12 = *a1;
    Microsoft::WRL::ComPtr<PrivilegedWindowingOperations>::InternalRelease(a1 + 1);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<PrivilegedWindowingOperations,PrivilegedWindowingOperations,IamAccess *,PrivilegedOperationsService * &>(
           a1 + 1,
           &v12,
           v11);
    if ( v8 < 0 )
    {
      v10 = 590LL;
    }
    else
    {
      v14 = *v7;
      v13 = GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b;
      v15 = 0LL;
      v8 = CImmersiveShellComponent::RegisterServiceInformation(
             (CImmersiveShellComponent *)(a2 + 48),
             (__int64)&v13,
             1uLL);
      if ( v8 >= 0 )
        return 0LL;
      v10 = 593LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v8,
      v11[0]);
    return (unsigned int)v8;
  }
}
