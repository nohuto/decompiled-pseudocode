/*
 * XREFs of ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x1800A60AC
 * Callers:
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x1800A6D50 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800BA6CC (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800A4C30 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetLockAppHost(struct ILockAppHost **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int ActivationFactory; // eax
  int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  char v12[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-48h] BYREF
  int v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *a1 = 0LL;
  v12[0] = 0;
  v14 = 0;
  if ( (int)wil::wnf_query_nothrow<unsigned long>((__int64)a1, v12, &v14, a4) < 0 || !v12[0] || !v14 )
    return 2147500037LL;
  v15 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"lockframework.LockAppBroker",
    0x1Cu,
    0x1Bu);
  v5 = v17;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_fcc7498e_d8cf_4993_a9ae_804193af19d7, &v15);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenAppInterop.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_10:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    return (unsigned int)v7;
  }
  v13 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
  v9 = **v15;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  v10 = v9(v8, &GUID_91398107_1c08_44be_8b18_79322a23a71d, &v13);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenAppInterop.h",
      (const char *)(unsigned int)v10);
LABEL_9:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    goto LABEL_10;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, struct ILockAppHost **))(*(_QWORD *)v13 + 24LL))(v13, a1);
  if ( v7 < 0 )
    goto LABEL_9;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  return 0LL;
}
