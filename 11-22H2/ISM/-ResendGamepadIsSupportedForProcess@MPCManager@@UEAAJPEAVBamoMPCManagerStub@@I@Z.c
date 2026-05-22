/*
 * XREFs of ?ResendGamepadIsSupportedForProcess@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@I@Z @ 0x1800C3660
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManager::ResendGamepadIsSupportedForProcess(
        MPCManager *this,
        struct BamoMPCManagerStub *a2,
        unsigned int a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)MPCHolographicInputManager::GetInstance() + 411) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)Instance + 411) + 24LL))(
           *((_QWORD *)Instance + 411),
           a3);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xF2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v5,
        v7);
  }
  return 0LL;
}
