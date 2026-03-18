/*
 * XREFs of ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C020B338
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C020A818 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x1C002761C (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 *     ?EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z @ 0x1C00276B8 (-EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x1C03BA9E0 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::ExtractFromEdid(
        unsigned __int8 **a1,
        unsigned int a2,
        __int64 *a3)
{
  unsigned __int64 ExtractedDisplayIdBlobSize; // rbp
  __int64 v7; // r9
  __int64 v8; // rax
  void *v9; // rbx
  unsigned __int8 *v10; // rdx
  int DisplayIdBlob; // eax
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  void (__fastcall ***v17)(_QWORD, __int64); // rcx
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+2Ch] [rbp-2Ch]
  int v21; // [rsp+34h] [rbp-24h]
  void *v22; // [rsp+60h] [rbp+8h] BYREF

  ExtractedDisplayIdBlobSize = (unsigned int)EDID_V1_GetExtractedDisplayIdBlobSize(a2, *a1);
  v8 = operator new[](ExtractedDisplayIdBlobSize, 0x4D677844u, 256LL, v7);
  v22 = (void *)v8;
  v9 = (void *)v8;
  if ( !v8 )
    goto LABEL_7;
  v10 = *a1;
  v20 = 0LL;
  v21 = 0;
  v18 = v8;
  v19 = ExtractedDisplayIdBlobSize;
  DisplayIdBlob = EDID_V1_ExtractDisplayIdBlob(a2, v10, (struct DisplayIDObj *)&v18);
  v13 = DisplayIdBlob;
  if ( DisplayIdBlob < 0 )
  {
LABEL_3:
    WdLogSingleEntry1(2LL, v13);
    goto LABEL_4;
  }
  v15 = operator new[](0x30uLL, 0x4D677844u, 256LL, v12);
  if ( !v15 )
  {
LABEL_7:
    v13 = -1073741801LL;
    goto LABEL_3;
  }
  v16 = DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(v15, &v22, v19);
  if ( !v16 )
  {
    v9 = v22;
    goto LABEL_7;
  }
  v17 = (void (__fastcall ***)(_QWORD, __int64))*a3;
  *a3 = v16;
  if ( v17 )
    (**v17)(v17, 1LL);
  v9 = v22;
  LODWORD(v13) = 0;
LABEL_4:
  if ( v9 )
    operator delete[](v9);
  return (unsigned int)v13;
}
