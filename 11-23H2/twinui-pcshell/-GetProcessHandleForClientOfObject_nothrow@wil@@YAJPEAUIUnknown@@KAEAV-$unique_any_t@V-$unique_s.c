/*
 * XREFs of ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x180084C44
 * Callers:
 *     ?GetProcessHandleForClientOfObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@PEAUIUnknown@@K@Z @ 0x180084BFC (-GetProcessHandleForClientOfObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_onl.c)
 *     ?GetProcessTypeForClientOfObject@CallerIdentity@@YAJPEAUIUnknown@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x1801D4F4C (-GetProcessTypeForClientOfObject@CallerIdentity@@YAJPEAUIUnknown@@PEAW4PROCESS_UICONTEXT@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180084CC4 (-reset@-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@det.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::GetProcessHandleForClientOfObject_nothrow(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  HANDLE CurrentProcess; // rax
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rbx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0LL;
  v4 = CoGetCallContextOfObject(a1, &GUID_68c6a1b9_de39_42c3_8d28_bf40a5126541, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C1,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)(unsigned int)v4,
      v10);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    return v5;
  }
  if ( v12 )
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 24LL);
    wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      a3,
      0LL);
    v9 = v8(v12, 4096LL, a3);
    v5 = v9;
    if ( v9 >= 0 )
      goto LABEL_4;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C4,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)(unsigned int)v9,
      v10);
    if ( v12 )
      (*(void (**)(void))(*(_QWORD *)v12 + 16LL))();
    return v5;
  }
  CurrentProcess = GetCurrentProcess();
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    a3,
    CurrentProcess);
LABEL_4:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return 0LL;
}
