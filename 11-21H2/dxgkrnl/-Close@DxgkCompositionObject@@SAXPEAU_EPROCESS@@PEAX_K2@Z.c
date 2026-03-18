/*
 * XREFs of ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0018DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C030A8A0 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C034800C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

void __fastcall DxgkCompositionObject::Close(struct _EPROCESS *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 CurrentProcess; // rax
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  char v12; // [rsp+30h] [rbp-88h]
  PRKPROCESS PROCESS; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v4 = a2[2];
  PROCESS = 0LL;
  v14 = v4;
  v12 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) == v14 )
    goto LABEL_2;
  Global = DXGGLOBAL_GetGlobal();
  SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
  if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v14, &PROCESS) >= 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v12 = 1;
LABEL_2:
    (*(void (__fastcall **)(_QWORD, struct _EPROCESS *, _DWORD *, __int64, __int64))(**((_QWORD **)a2 + 2) + 24LL))(
      *((_QWORD *)a2 + 2),
      a1,
      a2,
      a3,
      a4);
  }
  if ( v12 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
}
