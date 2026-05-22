/*
 * XREFs of ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800B7610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D48C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800B5044 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800B6A70 (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpectrumListener::OnHeadEventOccurred(__int64 a1, __int128 *a2)
{
  int v4; // eax
  MPCRawInputProvider *v5; // rcx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-E0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9[12]; // [rsp+40h] [rbp-C0h] BYREF
  char v10; // [rsp+70h] [rbp-90h]
  __int128 v11; // [rsp+B80h] [rbp+A80h]
  __int128 v12; // [rsp+B90h] [rbp+A90h]
  __int128 v13; // [rsp+BA0h] [rbp+AA0h]
  __int128 v14; // [rsp+BB0h] [rbp+AB0h]
  wil::details::in1diag3 *retaddr; // [rsp+C18h] [rbp+B18h]

  memset_0(v9, 0, 0xBC0uLL);
  v9[6] = 3008;
  v4 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 8, 0x20000, *(_DWORD *)(a1 + 76), (__int64)v9);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x67,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v4,
      v7);
  v11 = *a2;
  v12 = a2[1];
  v13 = a2[2];
  v14 = a2[3];
  v10 = 1;
  AcquireSRWLockShared((PSRWLOCK)(a1 + 64));
  v8 = (RTL_SRWLOCK *)(a1 + 64);
  v5 = *(MPCRawInputProvider **)(a1 + 16);
  if ( v5 )
  {
    v6 = MPCRawInputProvider::QueueInput(v5, (struct LegacyInputInfo *)v9);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x71,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        (const char *)(unsigned int)v6,
        v7);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
}
