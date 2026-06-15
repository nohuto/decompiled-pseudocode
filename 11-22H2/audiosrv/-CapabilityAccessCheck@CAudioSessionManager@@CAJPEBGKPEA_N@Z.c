/*
 * XREFs of ?CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z @ 0x1800E7D3C
 * Callers:
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800E89B8 (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::CapabilityAccessCheck(PCWSTR sourceString, unsigned int a2, bool *a3)
{
  unsigned int v6; // ebx
  HSTRING v7; // rbx
  int ActivationFactory; // eax
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  HSTRING v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+40h] [rbp-49h] BYREF
  int v17; // [rsp+48h] [rbp-41h] BYREF
  __int64 v18; // [rsp+50h] [rbp-39h] BYREF
  __int64 (__fastcall *v19)(__int64, HSTRING, HSTRING, _QWORD, _DWORD, __int64 *); // [rsp+58h] [rbp-31h]
  HSTRING string; // [rsp+60h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-21h] BYREF
  HSTRING v22; // [rsp+80h] [rbp-9h] BYREF
  HSTRING_HEADER v23; // [rsp+88h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  if ( a2 )
  {
    v18 = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.Internal.CapabilityAccess.CapabilityAccess",
           0x32u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v7 = string;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v18);
    ActivationFactory = RoGetActivationFactory(v7, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, &v18);
    v6 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v16 = 0LL;
      v9 = v18;
      v19 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD, _DWORD, __int64 *))(*(_QWORD *)v18 + 56LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
      v10 = -1LL;
      v11 = -1LL;
      do
        ++v11;
      while ( aMicrophone[v11] );
      if ( v11 > 0xFFFFFFFF )
      {
        LODWORD(v11) = -1;
        RaiseException(0xC000000D, 1u, 0, 0LL);
      }
      WindowsCreateStringReference(L"microphone", v11, &hstringHeader, &string);
      v12 = string;
      do
        ++v10;
      while ( sourceString[v10] );
      if ( v10 > 0xFFFFFFFF )
      {
        LODWORD(v10) = -1;
        RaiseException(0xC000000D, 1u, 0, 0LL);
      }
      WindowsCreateStringReference(sourceString, v10, &v23, &v22);
      v13 = v19(v9, v22, v12, a2, 0, &v16);
      v6 = v13;
      if ( v13 >= 0 )
      {
        v17 = 3;
        v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 152LL))(v16, &v17);
        v6 = v13;
        if ( v13 >= 0 )
        {
          *a3 = v17 == 3;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
          v6 = 0;
          goto LABEL_21;
        }
        v14 = 1093LL;
      }
      else
      {
        v14 = 1090LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)ActivationFactory);
    }
LABEL_21:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v18);
    return v6;
  }
  v6 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x436,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)0x80070057LL);
  return v6;
}
