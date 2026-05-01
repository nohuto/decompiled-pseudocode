/*
 * XREFs of ?SessionDisposedForSet@TaskFlowImmersiveShellBroker@@UEAAJPEAUHSTRING__@@@Z @ 0x1804A0CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::SessionDisposedForSet(TaskFlowImmersiveShellBroker *this, HSTRING a2)
{
  unsigned int v3; // ebx
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 42) != 1 )
  {
    v3 = -2147467260;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x250,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)0x80004004LL);
    return v3;
  }
  v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 29);
  if ( v5 )
  {
    v9 = 0LL;
    v6 = **v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
    if ( v6(v5, &GUID_1a212157_be49_4892_afc4_1a168e546329, &v9) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v9 + 64LL))(v9, a2);
      v3 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x257,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
        return v3;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  }
  return 0LL;
}
