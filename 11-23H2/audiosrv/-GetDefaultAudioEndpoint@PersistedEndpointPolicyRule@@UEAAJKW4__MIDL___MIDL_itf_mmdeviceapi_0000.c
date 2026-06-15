/*
 * XREFs of ?GetDefaultAudioEndpoint@PersistedEndpointPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x18003B020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PersistedEndpointPolicyRule::GetDefaultAudioEndpoint(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _BYTE *a5,
        __int64 a6)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx

  v9 = a6;
  *(_QWORD *)a6 = 0LL;
  if ( a2 != GetCurrentProcessId()
    && (!g_ADGProcess || a2 != LODWORD(g_ADGProcess[2].OwningThread))
    && g_PolicyManager
    && (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 168LL))(g_PolicyManager) )
  {
    v10 = *(_QWORD *)g_PolicyManager;
    a6 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(v10 + 40))(g_PolicyManager, a2, &a6) >= 0 )
    {
      v11 = a6;
      if ( !a6 )
        goto LABEL_11;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a6 + 40LL))(a6, a3, a4, v9);
      if ( a5 )
        *a5 = 1;
    }
    v11 = a6;
LABEL_11:
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
