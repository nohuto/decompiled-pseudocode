/*
 * XREFs of ?RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002AE3C
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002B1C0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperClient::RuntimeClassInitialize(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  HRESULT Instance; // ebx
  __int64 v9; // rcx
  __int64 v11; // rdx
  int ppv; // [rsp+20h] [rbp-88h]
  __int128 v13; // [rsp+40h] [rbp-68h] BYREF
  __int128 v14; // [rsp+50h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v14 = 0LL;
  EtwEventActivityIdControl(1LL, &v14);
  Instance = CoCreateInstance(
               &GUID_3a8b5a92_80b0_48b3_8197_701ecd3261e4,
               0LL,
               0x17u,
               &GUID_0421e7a2_5d3d_4d19_9886_e8bdafa5822c,
               (LPVOID *)(a1 + 80));
  if ( Instance < 0 )
  {
    v11 = 37LL;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 80);
    v13 = v14;
    ppv = a4;
    Instance = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD))(*(_QWORD *)v9 + 24LL))(
                 v9,
                 &v13,
                 a2,
                 a3);
    if ( Instance >= 0 )
      return 0LL;
    v11 = 39LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
    (const char *)(unsigned int)Instance,
    ppv);
  return (unsigned int)Instance;
}
