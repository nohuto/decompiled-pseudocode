/*
 * XREFs of ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x1802877F8
 * Callers:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18006D880 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x18006ED84 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x18012DB24 (McTemplateU0q_EventWriteTransfer.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x1802875AC (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 */

void __fastcall CD2DContext::TempDisableHardwareProtection(CD2DContext *this)
{
  CD2DContext *v1; // rcx
  char IsHardwareProtectionDisabled; // al
  char v3; // dl

  CD2DContext::IsHardwareProtectionDisabled(this);
  *((_BYTE *)v1 + 436) = 1;
  IsHardwareProtectionDisabled = CD2DContext::IsHardwareProtectionDisabled(v1);
  if ( v3 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE);
}
