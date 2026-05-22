/*
 * XREFs of ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800D0470
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800CDE1C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800CF95C (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpectrumListener::OnHeadEventOccurred(__int64 a1, __int128 *a2)
{
  int v4; // eax
  MPCRawInputProvider *v5; // rcx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-BF8h]
  int v8[12]; // [rsp+40h] [rbp-BD8h] BYREF
  char v9; // [rsp+70h] [rbp-BA8h]
  __int128 v10; // [rsp+B80h] [rbp-98h]
  __int128 v11; // [rsp+B90h] [rbp-88h]
  __int128 v12; // [rsp+BA0h] [rbp-78h]
  __int128 v13; // [rsp+BB0h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+C18h] [rbp+0h]

  memset_0(v8, 0, 0xBC0uLL);
  v8[6] = 3008;
  v4 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 8, 0x20000, *(_DWORD *)(a1 + 76), (__int64)v8);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x67,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v4,
      v7);
  v10 = *a2;
  v11 = a2[1];
  v12 = a2[2];
  v13 = a2[3];
  v9 = 1;
  AcquireSRWLockShared((PSRWLOCK)(a1 + 64));
  v5 = *(MPCRawInputProvider **)(a1 + 16);
  if ( v5 )
  {
    v6 = MPCRawInputProvider::QueueInput(v5, (struct LegacyInputInfo *)v8);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x71,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        (const char *)(unsigned int)v6,
        v7);
  }
  if ( a1 != -64 )
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 64));
}
