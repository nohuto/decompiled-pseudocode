/*
 * XREFs of ?AddApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180310140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800E9710 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddApplicationView(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+18h]

  v11 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  v5 = v4((struct IApplicationView *)a2, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 549LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_10;
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 550LL;
    goto LABEL_5;
  }
  v12 = this + 66;
  AcquireSRWLockExclusive(this + 66);
  v8 = CApplicationViewManager::_AddApplicationView(
         (CApplicationViewManager *)&this[-17],
         (struct IApplicationView *)a2,
         0LL);
  v6 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x229,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
  if ( this != (RTL_SRWLOCK *)-528LL )
    ReleaseSRWLockExclusive(this + 66);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return v6;
}
