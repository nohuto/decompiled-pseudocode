/*
 * XREFs of ?CompleteInitialization@CAppViewManager@@UEAAJXZ @ 0x1801B2390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::CompleteInitialization(CAppViewManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
         *((_QWORD *)this + 11),
         &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
         &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 364LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_4;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v7 + 24LL))(
         v7,
         ((unsigned __int64)this + 16) & -(__int64)(this != (CAppViewManager *)32),
         (char *)this + 96);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = 367LL;
    goto LABEL_7;
  }
  v3 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  return v3;
}
