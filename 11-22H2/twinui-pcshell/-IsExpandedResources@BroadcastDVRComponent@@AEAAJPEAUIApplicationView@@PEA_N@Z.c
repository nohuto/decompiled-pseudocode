/*
 * XREFs of ?IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180082C2C
 * Callers:
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180082EC0 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800507C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180083DE4 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     _lambda_f5bb936b1b8c681d3e903b0b9fce9520_::operator() @ 0x180083E40 (_lambda_f5bb936b1b8c681d3e903b0b9fce9520_--operator().c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BroadcastDVRComponent::IsExpandedResources(
        BroadcastDVRComponent *this,
        struct IApplicationView *a2,
        bool *a3)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rdi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  unsigned __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-E0h]
  unsigned int v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  struct IApplicationView *v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  _QWORD v31[2]; // [rsp+90h] [rbp-70h] BYREF
  char v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE pSid2[48]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v35[48]; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  *a3 = 0;
  v27 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
  v26 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v27, &v26) >= 0 )
  {
    v24 = 0LL;
    v4 = v26;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 24LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v24);
    v7 = v5(v4, AddressOf);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73B,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v7,
        v22);
    }
    else
    {
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v9 = v24;
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v24 + 120LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v28);
      v29 = -1LL;
      v30 = -1LL;
      v11 = v10(v9, 0LL, &v28);
      v12 = v11;
      v8 = -2147023728;
      if ( v11 != -2147023728 )
      {
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x740,
            (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
            (const char *)(unsigned int)v11,
            v22);
          v8 = v12;
        }
        else
        {
          v25 = 0LL;
          v23 = 0;
          v31[0] = &v25;
          v31[1] = &v23;
          v13 = QueryApplicationCapabilities(v28, &v25, &v23, 0LL);
          v14 = v13;
          v8 = -2147024444;
          if ( v13 != -2147024444 )
          {
            if ( v13 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x75C,
                (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                (const char *)(unsigned int)v13,
                0);
              v8 = v14;
            }
            else
            {
              v33 = 0LL;
              v15 = 0x7FFFLL;
              v16 = L"expandedResources";
              do
              {
                if ( !*v16 )
                  break;
                ++v16;
                --v15;
              }
              while ( v15 );
              v17 = v15 == 0 ? 0xC000000D : 0;
              if ( v15 )
              {
                LOWORD(v33) = 2 * (0x7FFF - v15);
                WORD1(v33) = v33 + 2;
                *((_QWORD *)&v33 + 1) = L"expandedResources";
                v18 = RtlDeriveCapabilitySidsFromName(&v33, v35, pSid2);
                if ( v18 >= 0 )
                {
                  v19 = 0;
                  if ( v23 )
                  {
                    while ( !EqualSid(*(PSID *)(v25 + 8LL * v19), pSid2) )
                    {
                      if ( ++v19 >= v23 )
                        goto LABEL_15;
                    }
                    *a3 = 1;
                  }
LABEL_15:
                  v32 = 0;
                  lambda_f5bb936b1b8c681d3e903b0b9fce9520_::operator()(v31);
                  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v28);
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
                  goto LABEL_16;
                }
                v17 = (unsigned int)v18;
                v21 = 1901LL;
              }
              else
              {
                v21 = 1890LL;
              }
              v8 = wil::details::in1diag3::Return_NtStatus(
                     retaddr,
                     (void *)v21,
                     (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                     (const char *)v17);
            }
          }
          v32 = 0;
          lambda_f5bb936b1b8c681d3e903b0b9fce9520_::operator()(v31);
        }
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v28);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    goto LABEL_17;
  }
LABEL_16:
  v8 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
  return v8;
}
