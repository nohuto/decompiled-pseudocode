/*
 * XREFs of ServiceStart @ 0x1800587DC
 * Callers:
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180057F20 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 * Callees:
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180058A78 (--0CAudioSrv@@QEAA@XZ.c)
 *     ReportStatusToSCMgr @ 0x180058CE4 (ReportStatusToSCMgr.c)
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18005A8F8 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ServiceStart(struct SERVICE_STATUS_HANDLE__ *a1, int a2, __int64 a3, __int64 a4)
{
  CAudioSrv *v5; // rax
  CAudioSrv *v6; // rbx
  unsigned int v7; // edx
  const unsigned __int16 **v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // r9

  if ( !a2 )
    ReportStatusToSCMgr(1LL, 2147500037LL, 0LL, a4);
  v5 = (CAudioSrv *)operator new(0x238uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( !v5 )
  {
    g_AudioService = 0LL;
    return 14LL;
  }
  memset_0(v5, 0, 0x238uLL);
  g_AudioService = CAudioSrv::CAudioSrv(v6);
  if ( !g_AudioService )
    return 14LL;
  v9 = MyServiceInitialization(a1, v7, v8);
  if ( !v9 )
  {
    ReportStatusToSCMgr(4LL, 0LL, 0LL, v10);
    (*(void (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 112LL))(g_AudioService);
  }
  return v9;
}
