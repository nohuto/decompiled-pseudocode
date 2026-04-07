/*
 * XREFs of ?StopExpressionAnimationHelper@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@@Z @ 0x1800C195C
 * Callers:
 *     ?EnsureHoverPointerSourceAnimationStopped@CGlobalLightSet@@QEAAJXZ @ 0x1800C1608 (-EnsureHoverPointerSourceAnimationStopped@CGlobalLightSet@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005646C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CGlobalLightSet::StopExpressionAnimationHelper(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64); // rdi
  __int64 Buffer[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  LODWORD(Buffer[0]) = a2;
  v2 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), Buffer);
  if ( v2 )
  {
    v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v2[1];
    if ( v3 )
    {
      Buffer[0] = 0LL;
      v4 = **v3;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(Buffer);
      v5 = v4(v3, &GUID_bcb4ad45_7609_4550_934f_16002a68fded, Buffer);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 460LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
          (const char *)(unsigned int)v5);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(Buffer);
        return v6;
      }
      v8 = Buffer[0];
      v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Buffer[0] + 80LL);
      v13 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Offset", 7u, 6u);
      v5 = v9(v8, v13);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 461LL;
        goto LABEL_7;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(Buffer);
    }
  }
  return 0LL;
}
