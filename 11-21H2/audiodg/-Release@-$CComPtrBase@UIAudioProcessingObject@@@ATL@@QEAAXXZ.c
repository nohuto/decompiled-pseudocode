/*
 * XREFs of ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x140007828
 * Callers:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140007688 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140007778 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14000ABB0 (-RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ?SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140012140 (-SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140012210 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400129B4 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x140055430 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14005D5EC (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
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
