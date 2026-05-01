/*
 * XREFs of ?InitializePrivilegedOperations@KioskPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801B0EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::InitializePrivilegedOperations(
        KioskPositioner *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r9
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (__int64 *)((char *)this + 72);
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9.Data4;
  if ( v5 )
  {
    v6 = 2147500033LL;
  }
  else
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v9 = *v4;
    *v4 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
      a3,
      &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9,
      v4);
    v6 = 0LL;
  }
  if ( (int)v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3BF,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)v6,
      v10);
  return 0LL;
}
