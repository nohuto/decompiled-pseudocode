/*
 * XREFs of ?get_User@CActivatedEventArgsBase@@UEAAJPEAPEAUIUser@System@Windows@@@Z @ 0x18073AF60
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsBase::get_User(RTL_SRWLOCK *this, struct Windows::System::IUser **a2)
{
  RTL_SRWLOCK *v4; // rdi
  PVOID Ptr; // r14
  __int64 v7; // rbx
  int ActivationFactory; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v4 = this + 17;
  AcquireSRWLockShared(this + 17);
  Ptr = this[12].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  *a2 = 0LL;
  if ( !Ptr )
    return 0LL;
  v15 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.System.Internal.UserManager",
    0x24u,
    0x23u);
  v7 = v17;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
  ActivationFactory = RoGetActivationFactory(v7, &GUID_252e7f79_acfa_4ea2_9a7e_fa27a8a4d3d9, &v15);
  v9 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v14 = 0LL;
    v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
    v11 = **v15;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
    v12 = v11(v10, &GUID_100eb64b_b24c_4c38_8964_720d926d05a4, &v14);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, PVOID, struct Windows::System::IUser **))(*(_QWORD *)v14 + 160LL))(
              v14,
              Ptr,
              a2);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v9 = 0;
        goto LABEL_13;
      }
      v13 = 426LL;
    }
    else
    {
      v13 = 424LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v12);
LABEL_13:
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A5,
    (int)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_14:
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
  return v9;
}
