/*
 * XREFs of ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14000D878
 * Callers:
 *     ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14000D710 (-RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000FF00 (-SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140011110 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140011150 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140013CE0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400168AC (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x14001E41C (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x1400250B0 (-SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x1400573E0 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x14005CEB4 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x140061604 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComPtrBase<IAudioProcessingObject>::Release(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
