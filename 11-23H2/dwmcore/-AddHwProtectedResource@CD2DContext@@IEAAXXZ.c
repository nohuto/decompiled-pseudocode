/*
 * XREFs of ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180285F08
 * Callers:
 *     ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800E56B0 (-AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z.c)
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x1800EB834 (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     McTemplateU0qq_EventWriteTransfer @ 0x18012D0D6 (McTemplateU0qq_EventWriteTransfer.c)
 */

void __fastcall CD2DContext::AddHwProtectedResource(CD2DContext *this)
{
  ++*((_DWORD *)this + 108);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE);
}
