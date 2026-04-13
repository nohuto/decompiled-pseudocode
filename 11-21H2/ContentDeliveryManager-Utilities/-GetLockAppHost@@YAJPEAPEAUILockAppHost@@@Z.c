/*
 * XREFs of ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x1800B531C
 * Callers:
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x1800B6B30 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800CEBBC (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800324E8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800B5EEC (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall GetLockAppHost(struct ILockAppHost **a1)
{
  unsigned int v2; // eax
  const char *v3; // r9
  char v5; // al
  HRESULT v6; // eax
  HSTRING v7; // rbx
  const char *v8; // rcx
  int ActivationFactory; // eax
  unsigned int v10; // ebx
  const char *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  const char *v14; // rcx
  __int64 v15; // rcx
  const char *v16; // rcx
  __int64 v17; // rcx
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-50h]
  const char *v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  int v22; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *a1 = 0LL;
  v22 = 0;
  LODWORD(v21) = 4;
  v2 = NtQueryWnfStateData(&WNF_SHEL_LOCKAPPHOST_ACTIVE, 0LL, 0LL, &v20, &v22, &v21);
  v3 = (const char *)v2;
  LODWORD(v3) = v2 | 0x10000000;
  if ( (int)((v2 | 0x10000000) + 0x80000000) >= 0 && (_DWORD)v3 != -805306333 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BB,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      v3);
    return 2147500037LL;
  }
  if ( (_DWORD)v20 && (_DWORD)v21 != 4 )
LABEL_37:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      700LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      v3);
  LOBYTE(v19) = 0;
  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    (void *)0x2BD,
    (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
    (const char *)0x8000FFFFLL,
    v19,
    (bool)"Inconsistent state data size in wnf_query",
    v20);
  if ( !(_DWORD)v20 || (v5 = 1, (_DWORD)v21 != 4) )
    v5 = 0;
  if ( !v5 || !v22 )
    return 2147500037LL;
  v20 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"lockframework.LockAppBroker", 0x1Bu, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    goto LABEL_37;
  }
  v7 = string;
  v8 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  ActivationFactory = RoGetActivationFactory(v7, &GUID_fcc7498e_d8cf_4993_a9ae_804193af19d7, &v20);
  v10 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenAppInterop.h",
      (const char *)(unsigned int)ActivationFactory);
    v11 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(const char *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v10;
  }
  v21 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(const char *, GUID *, __int64 *))v20)(
          v20,
          &GUID_91398107_1c08_44be_8b18_79322a23a71d,
          &v21);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenAppInterop.h",
      (const char *)(unsigned int)v12);
    v13 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(const char *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return v10;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, struct ILockAppHost **))(*(_QWORD *)v21 + 24LL))(v21, a1);
  if ( (v10 & 0x80000000) != 0 )
  {
    v15 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(const char *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return v10;
  }
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return 0LL;
}
