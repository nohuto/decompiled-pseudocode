/*
 * XREFs of ?InternalQueryInterface@?$CCaptureRenderTargetProxyBase@UIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FD774
 * Callers:
 *     ?QueryInterface@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FD800 (-QueryInterface@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetProxyBase<IDCompositionVirtualMonitorCaptureRenderTargetInternal>::InternalQueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = *a2 - *(_QWORD *)&GUID_46da4de2_2ec0_45ee_8041_b34fbd774dff.Data1;
    if ( *a2 == *(_QWORD *)&GUID_46da4de2_2ec0_45ee_8041_b34fbd774dff.Data1 )
      v4 = a2[1] - *(_QWORD *)GUID_46da4de2_2ec0_45ee_8041_b34fbd774dff.Data4;
    if ( !v4 )
      goto LABEL_9;
    v5 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_9:
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
