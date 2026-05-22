/*
 * XREFs of ?UnregisterHandle@InputProcessManager@@SAXPEAX@Z @ 0x1801B4C00
 * Callers:
 *     ?ISMShutDownStatic@InputProcessManager@@SAJPEAXK0@Z @ 0x1801B3DF0 (-ISMShutDownStatic@InputProcessManager@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x180031F50 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall InputProcessManager::UnregisterHandle(void *a1)
{
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  __int64 v3; // rax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
  v3 = (*(__int64 (__fastcall **)(struct InputSystemInternalServerConnection *))(*(_QWORD *)InputSystemInternalServerConnection
                                                                               + 56LL))(InputSystemInternalServerConnection);
  v4 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(v3 + 48) + 280LL))(*(_QWORD *)(v3 + 48), a1);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x46,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
      (const char *)(unsigned int)v4,
      v5);
  CloseHandle(a1);
}
