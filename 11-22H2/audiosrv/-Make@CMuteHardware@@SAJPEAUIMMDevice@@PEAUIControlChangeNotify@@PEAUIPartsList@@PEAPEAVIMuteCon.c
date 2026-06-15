/*
 * XREFs of ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1800212E0
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18001ECEC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F2954 (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAU.c)
 * Callees:
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18001D888 (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z @ 0x180021410 (--0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18002A050 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___ @ 0x18011094C (wil--details--lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___--_lambda_call__lambda_c171.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMuteHardware::Make(
        struct IUnknown *a1,
        struct IControlChangeNotify *a2,
        struct IPartsList *a3,
        struct IMuteControlHandler **a4)
{
  CMuteControlBase *v8; // rax
  CMuteControlBase *v9; // rdi
  RPC_STATUS v10; // eax
  int MuteControlForEndpoint; // ebx
  struct IMuteControlHandler *v12; // rcx
  int v14[2]; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMuteControlHandler *v17; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (CMuteControlBase *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  *(_QWORD *)v14 = v8;
  if ( !v8 )
  {
    v17 = 0LL;
    MuteControlForEndpoint = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)0x8007000ELL,
      0);
    return (unsigned int)MuteControlForEndpoint;
  }
  CMuteControlBase::CMuteControlBase(v8, a2);
  *(_QWORD *)v9 = &CMuteHardware::`vftable';
  *((_QWORD *)v9 + 6) = 0LL;
  *((_QWORD *)v9 + 7) = 0LL;
  *((_DWORD *)v9 + 16) = 0;
  *(GUID *)((char *)v9 + 68) = GUID_00000000_0000_0000_0000_000000000000;
  v17 = v9;
  *(_QWORD *)v14 = &v17;
  v15 = 1;
  v10 = UuidCreate((UUID *)((char *)v9 + 68));
  MuteControlForEndpoint = v10;
  if ( v10 )
  {
    if ( v10 > 0 )
      MuteControlForEndpoint = (unsigned __int16)v10 | 0x80070000;
LABEL_5:
    if ( MuteControlForEndpoint >= 0 )
    {
      v12 = v17;
      *a4 = v17;
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v12 + 8LL))(v12);
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v17 + 16LL))(v17);
      return 0LL;
    }
    goto LABEL_9;
  }
  MuteControlForEndpoint = CMuteHardware::FindMuteControlForEndpoint(v9, a1, a3);
  if ( MuteControlForEndpoint >= 0 )
  {
    MuteControlForEndpoint = CMuteControlBase::Initialize(v9, (struct IMMDevice *)a1);
    goto LABEL_5;
  }
LABEL_9:
  AudSrvTraceLoggingErrorHelper("CMuteHardware::Initialize", 0x1D9u, MuteControlForEndpoint);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x110,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
    (const char *)(unsigned int)MuteControlForEndpoint,
    v14[0]);
  wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___(v14);
  return (unsigned int)MuteControlForEndpoint;
}
