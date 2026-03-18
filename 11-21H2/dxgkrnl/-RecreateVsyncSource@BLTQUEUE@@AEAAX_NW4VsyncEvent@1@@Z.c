/*
 * XREFs of ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01606B8
 * Callers:
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C0160578 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CE5C0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C01CEF58 (-StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03BC05C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C0055AB0 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ??0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z @ 0x1C0160768 (--0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C0160804 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 *     ??0BLTQUEUE_HW_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_KEVENT@@@Z @ 0x1C03BF864 (--0BLTQUEUE_HW_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_KEVENT@@@Z.c)
 *     ??0BLTQUEUE_REMOTE_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@@Z @ 0x1C03BF9AC (--0BLTQUEUE_REMOTE_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@@Z.c)
 */

int __fastcall BLTQUEUE::RecreateVsyncSource(__int64 a1, char a2, char a3)
{
  int v3; // edi
  void (__fastcall ***v5)(_QWORD, _QWORD); // rcx
  int v8; // eax
  DXGGLOBAL *Global; // rax
  struct _EX_TIMER *v10; // r9
  struct _EX_TIMER *v11; // r8
  struct DXGDODPRESENT *v12; // rdx
  BLTQUEUE_EMULATED_VSYNC_SOURCE *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGDODPRESENT *v16; // rdx

  v3 = *(_DWORD *)(a1 + 136);
  v5 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 128);
  v8 = v3;
  if ( v5 )
  {
    (**v5)(v5, 0LL);
    *(_QWORD *)(a1 + 128) = 0LL;
    v8 = *(_DWORD *)(a1 + 136);
  }
  if ( v8 == 1 )
  {
    v13 = BLTQUEUE_HW_VSYNC_SOURCE::BLTQUEUE_HW_VSYNC_SOURCE(
            (BLTQUEUE_HW_VSYNC_SOURCE *)(a1 + 8),
            *(struct DXGDODPRESENT **)a1,
            *(struct _KEVENT **)(a1 + 376));
  }
  else
  {
    Global = DXGGLOBAL_GetGlobal();
    if ( !DXGGLOBAL::IsVmConnectedToHost(Global) || a2 )
    {
      v10 = *(struct _EX_TIMER **)(a1 + 152);
      v11 = *(struct _EX_TIMER **)(a1 + 144);
      v12 = *(struct DXGDODPRESENT **)a1;
      *(_DWORD *)(a1 + 136) = 2;
      v13 = BLTQUEUE_EMULATED_VSYNC_SOURCE::BLTQUEUE_EMULATED_VSYNC_SOURCE(
              (BLTQUEUE_EMULATED_VSYNC_SOURCE *)(a1 + 8),
              v12,
              v11,
              v10);
    }
    else
    {
      v16 = *(struct DXGDODPRESENT **)a1;
      *(_DWORD *)(a1 + 136) = 3;
      v13 = BLTQUEUE_REMOTE_VSYNC_SOURCE::BLTQUEUE_REMOTE_VSYNC_SOURCE((BLTQUEUE_REMOTE_VSYNC_SOURCE *)(a1 + 8), v16);
    }
  }
  *(_QWORD *)(a1 + 128) = v13;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    LODWORD(v13) = McTemplateK0qqq_EtwWriteTransfer(
                     v14,
                     &EventBltQueueVsyncRecreateSource,
                     v15,
                     v3,
                     *(_DWORD *)(a1 + 136),
                     a3);
  return (int)v13;
}
