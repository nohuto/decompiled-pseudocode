/*
 * XREFs of ?EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800D5FD4
 * Callers:
 *     ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800D6588 (-ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized(
        CreativeFramework::NotificationManager::ToastHelpers *this)
{
  __int64 *v2; // rsi
  int ActivationFactory; // eax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64 *); // rdi
  HRESULT StringReference; // eax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  HRESULT v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, HSTRING *); // rdi
  int v19; // eax
  HRESULT v20; // eax
  LPVOID v21; // rbx
  __int64 (__fastcall *v22)(LPVOID, PCWSTR); // rdi
  PCWSTR StringRawBuffer; // rax
  int v24; // eax
  LPVOID v25; // rbx
  __int64 (__fastcall *v26)(LPVOID, GUID *, char *); // r15
  __int64 v27; // rcx
  int v28; // eax
  LPVOID v29; // rbx
  __int64 (__fastcall *v30)(LPVOID, GUID *, __int64 *); // rdi
  __int64 v31; // rcx
  int v32; // eax
  int ppv; // [rsp+20h] [rbp-49h]
  int ppva; // [rsp+20h] [rbp-49h]
  LPVOID v35; // [rsp+30h] [rbp-39h] BYREF
  HSTRING v36; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v37; // [rsp+40h] [rbp-29h] BYREF
  __int64 v38; // [rsp+48h] [rbp-21h] BYREF
  __int64 v39; // [rsp+50h] [rbp-19h] BYREF
  int v40; // [rsp+58h] [rbp-11h] BYREF
  __int64 *v41; // [rsp+60h] [rbp-9h] BYREF
  __int64 v42; // [rsp+68h] [rbp-1h] BYREF
  HSTRING string; // [rsp+70h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = (__int64 *)((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
    return;
  v42 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackageFamily", 0x2Eu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_86f5b0ee_9560_4d76_a06a_ca4c8bfe4426, &v42);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      364LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)ActivationFactory,
      ppv);
  v39 = 0LL;
  v4 = v42;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v42 + 128LL);
  v39 = 0LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  StringReference = WindowsCreateStringReference(
                      L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
                      0x36u,
                      (HSTRING_HEADER *)&string,
                      (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v8,
      366LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v7,
      ppv);
  }
  v7 = v5(v4, *(_QWORD *)&hstringHeader.Reserved.Reserved2[16], &v39);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_38;
  v41 = 0LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  v9 = WindowsCreateStringReference(
         L"Windows.Internal.StateRepository.Package",
         0x28u,
         (HSTRING_HEADER *)&string,
         (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
LABEL_40:
    wil::details::in1diag3::Throw_Hr(
      v11,
      368LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v10,
      ppv);
  }
  v10 = RoGetActivationFactory(
          *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
          &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419,
          &v41);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_40;
  v37 = 0LL;
  v12 = *v41;
  v37 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 **))(v12 + 208))(v41, v39, &v37);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      370LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v13,
      ppv);
  v14 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v37 + 56))(v37, &v40);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      373LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v14,
      ppv);
  if ( !v40 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      374LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070490LL,
      ppv);
  v38 = 0LL;
  v15 = *v37;
  v38 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v15 + 48))(v37, 0LL, &v38);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      376LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v16,
      ppv);
  v36 = 0LL;
  v17 = v38;
  v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v38 + 176LL);
  WindowsDeleteString(0LL);
  v36 = 0LL;
  v19 = v18(v17, &v36);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      378LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v19,
      ppv);
  v35 = 0LL;
  v20 = CoCreateInstance(
          &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
          0LL,
          1u,
          &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
          &v35);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      382LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v20,
      ppva);
  v21 = v35;
  v22 = *(__int64 (__fastcall **)(LPVOID, PCWSTR))(*(_QWORD *)v35 + 40LL);
  StringRawBuffer = WindowsGetStringRawBuffer(v36, 0LL);
  v24 = v22(v21, StringRawBuffer);
  if ( v24 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      383LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v24,
      ppva);
  v25 = v35;
  v26 = *(__int64 (__fastcall **)(LPVOID, GUID *, char *))(*(_QWORD *)v35 + 72LL);
  v27 = *((_QWORD *)this + 8);
  if ( v27 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = v26(v25, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, (char *)this + 64);
  if ( v28 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      385LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v28,
      ppva);
  v29 = v35;
  v30 = *(__int64 (__fastcall **)(LPVOID, GUID *, __int64 *))(*(_QWORD *)v35 + 56LL);
  v31 = *v2;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v30(v29, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, v2);
  if ( v32 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      386LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v32,
      ppva);
  if ( v35 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v35 + 16LL))(v35);
  WindowsDeleteString(v36);
  v36 = 0LL;
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v37 )
    (*(void (__fastcall **)(__int64 *))(*v37 + 16))(v37);
  if ( v41 )
    (*(void (__fastcall **)(__int64 *))(*v41 + 16))(v41);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
}
