/*
 * XREFs of ??1?$CComPtrBase@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x140056480
 * Callers:
 *     ??1?$CComPtr@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x140056474 (--1-$CComPtr@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 *     ?TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z @ 0x140057314 (-TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtrBase<CAudioDeviceGraph>::~CComPtrBase<CAudioDeviceGraph>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
