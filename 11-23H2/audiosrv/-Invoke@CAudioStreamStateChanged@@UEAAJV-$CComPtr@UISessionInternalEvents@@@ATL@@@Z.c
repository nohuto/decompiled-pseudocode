/*
 * XREFs of ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18003D0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStreamStateChanged::Invoke(__int64 a1, __int64 *a2)
{
  unsigned int v3; // ebx

  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 80LL))(
         *a2,
         (*(_QWORD *)(a1 + 8) + 8LL) & -(__int64)(*(_QWORD *)(a1 + 8) != 0LL),
         *(unsigned int *)(a1 + 16),
         *(unsigned int *)(a1 + 20),
         (*(_QWORD *)(a1 + 24) + 8LL) & -(__int64)(*(_QWORD *)(a1 + 24) != 0LL));
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(a2);
  return v3;
}
