/*
 * XREFs of _lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator() @ 0x180004540
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180003148 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(__int64 a1, _QWORD *a2)
{
  char v3; // di
  __int64 v4; // rax
  int v5; // ecx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v7);
  v4 = 0LL;
  v7 = 0LL;
  if ( *a2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*a2 + 24LL))(
           *a2,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v7);
    v4 = v7;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 < 0 || !v4 )
    v3 = 1;
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v7);
  return v3;
}
