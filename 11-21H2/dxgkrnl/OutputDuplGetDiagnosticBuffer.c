/*
 * XREFs of OutputDuplGetDiagnosticBuffer @ 0x1C0325334
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000969C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01872C0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01A5388 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01A5434 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C0321154 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 */

__int64 __fastcall OutputDuplGetDiagnosticBuffer(
        struct DXGADAPTER *a1,
        struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGADAPTER **v6; // rbx
  struct DXGADAPTER **v7; // rax
  int OutputDuplManager; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int DiagnosticBuffer; // edi
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  DXGADAPTER *v14; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-20h] BYREF
  DXGADAPTER *v16; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-10h] BYREF
  OUTPUTDUPL_MGR *v18; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  if ( !a1 || (unsigned int)DxgIsRemoteSessionUsingXddmMonitors((__int64)a1, (__int64)a2, a3, a4) )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  }
  else
  {
    v6 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v16);
    v7 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v14);
    OutputDuplManager = FindOutputDuplManager(a1, 0, v7, &v15, v6, &v17, &v18);
    DiagnosticBuffer = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = OutputDuplManager;
      goto LABEL_10;
    }
    RemoteOutputDuplMgr = v18;
  }
  if ( RemoteOutputDuplMgr )
  {
    DiagnosticBuffer = OUTPUTDUPL_MGR::GetDiagnosticBuffer((DXGDIAGNOSTICS **)RemoteOutputDuplMgr, a2);
  }
  else
  {
    DiagnosticBuffer = -1073741275;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = 2938LL;
  }
LABEL_10:
  DXGADAPTER_REFERENCE::Assign(&v14, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v16, 0LL);
  return DiagnosticBuffer;
}
