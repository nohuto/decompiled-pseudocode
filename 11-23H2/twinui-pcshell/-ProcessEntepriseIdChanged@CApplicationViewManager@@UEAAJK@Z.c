/*
 * XREFs of ?ProcessEntepriseIdChanged@CApplicationViewManager@@UEAAJK@Z @ 0x1803CC180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::ProcessEntepriseIdChanged(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rsi
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, __int64 *); // rdi
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+50h] [rbp+18h]

  v4 = this + 60;
  v13 = this + 60;
  AcquireSRWLockShared(this + 60);
  v5 = 0LL;
  if ( this[62].Ptr )
  {
    while ( 1 )
    {
      v12 = 0LL;
      Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[61].Ptr;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      v7 = (**Ptr[v5])(Ptr[v5], &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v12);
      v8 = retaddr;
      if ( v7 < 0 )
        break;
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, a2);
      v8 = retaddr;
      if ( v7 < 0 )
      {
        v9 = 835LL;
        goto LABEL_6;
      }
LABEL_7:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      if ( (PVOID)++v5 >= this[62].Ptr )
        goto LABEL_8;
    }
    v9 = 833LL;
LABEL_6:
    wil::details::in1diag3::_Log_Hr(
      v8,
      (void *)v9,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
LABEL_8:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
