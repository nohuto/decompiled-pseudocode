/*
 * XREFs of ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800E0E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionVolumeChanged::Invoke(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx

  LOBYTE(a4) = *(_BYTE *)(a1 + 20);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)*a2 + 40LL))(
         *a2,
         (*(_QWORD *)(a1 + 8) + 8LL) & -(__int64)(*(_QWORD *)(a1 + 8) != 0LL),
         -*(_QWORD *)(a1 + 8),
         a4,
         *(_QWORD *)(a1 + 24));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(a2);
  return v5;
}
