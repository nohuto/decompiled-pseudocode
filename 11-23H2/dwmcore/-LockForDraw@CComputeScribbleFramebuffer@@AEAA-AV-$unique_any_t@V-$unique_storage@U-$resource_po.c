/*
 * XREFs of ?LockForDraw@CComputeScribbleFramebuffer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180204D08
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x18020485C (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012DEAC (McTemplateU0xq_EventWriteTransfer.c)
 */

_QWORD *__fastcall CComputeScribbleFramebuffer::LockForDraw(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *result; // rax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer(a1, (__int64)&EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Start);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 64));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer(v4, (__int64)&EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Stop);
  result = a2;
  *(_BYTE *)(a1 + 152) = 1;
  *a2 = a1 + 64;
  return result;
}
