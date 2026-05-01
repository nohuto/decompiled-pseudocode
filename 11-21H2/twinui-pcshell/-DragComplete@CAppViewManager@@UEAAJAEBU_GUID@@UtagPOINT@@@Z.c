/*
 * XREFs of ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F50B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F5280 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall CAppViewManager::DragComplete(CAppViewManager *this, const struct _GUID *a2, struct tagPOINT a3)
{
  RTL_SRWLOCK *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 (__fastcall *v11)(__int64, const struct _GUID *, __int128 *, __int64 *); // rsi
  __int64 *AddressOf; // rax
  _BYTE v14[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h] BYREF
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v16 = 0LL;
  v15 = 0LL;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, _BYTE *))(**((_QWORD **)this + 16) + 48LL))(
         *((_QWORD *)this + 16),
         a2,
         v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1122LL;
    goto LABEL_5;
  }
  v10 = *((_QWORD *)this + 16);
  v11 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, __int128 *, __int64 *))(*(_QWORD *)v10 + 56LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v15);
  v7 = v11(v10, a2, &v16, AddressOf);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1123LL;
    goto LABEL_5;
  }
  if ( (v14[0] & 2) == 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct tagPOINT))(**((_QWORD **)this + 16) + 80LL))(
           *((_QWORD *)this + 16),
           a2,
           a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1129LL;
      goto LABEL_5;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 16) + 40LL))(
           *((_QWORD *)this + 16),
           a2,
           1LL,
           1LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1130LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      goto LABEL_17;
    }
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( (v14[0] & 2) != 0 )
    v8 = CAppViewManager::DragCompleteWorker((CAppViewManager *)((char *)this - 56), a2, a3);
  else
    v8 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return v8;
}
