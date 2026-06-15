/*
 * XREFs of ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1800450D0
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004493C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800638B8 (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAU.c)
 * Callees:
 *     ??0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z @ 0x180045208 (--0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180045434 (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18004A3E0 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMuteHardware::Make(
        struct IMMDevice *a1,
        struct IControlChangeNotify *a2,
        struct IPartsList *a3,
        struct IMuteControlHandler **a4)
{
  unsigned int v8; // edi
  CMuteControlBase *v9; // rax
  CMuteControlBase *v10; // rsi
  RPC_STATUS v11; // eax
  signed int MuteControlForEndpoint; // ebx
  struct IMuteControlHandler *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMuteControlHandler *v16; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  *a4 = 0LL;
  v9 = (CMuteControlBase *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    CMuteControlBase::CMuteControlBase(v9, a2);
    *(_QWORD *)v10 = &CMuteHardware::`vftable';
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 7) = 0LL;
    *((_DWORD *)v10 + 16) = 0;
    *(GUID *)((char *)v10 + 68) = GUID_00000000_0000_0000_0000_000000000000;
    v16 = v10;
    v11 = UuidCreate((UUID *)((char *)v10 + 68));
    MuteControlForEndpoint = v11;
    if ( v11 )
    {
      if ( v11 > 0 )
        MuteControlForEndpoint = (unsigned __int16)v11 | 0x80070000;
    }
    else
    {
      MuteControlForEndpoint = CMuteHardware::FindMuteControlForEndpoint(v10, a1, a3);
      if ( MuteControlForEndpoint < 0 )
        goto LABEL_10;
      MuteControlForEndpoint = CMuteControlBase::Initialize(v10, a1);
    }
    if ( MuteControlForEndpoint >= 0 )
    {
      v13 = v16;
      *a4 = v16;
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v13 + 8LL))(v13);
LABEL_7:
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v16 + 16LL))(v16);
      return v8;
    }
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CMuteHardware::Initialize", 0x1C1u, MuteControlForEndpoint);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)(unsigned int)MuteControlForEndpoint,
      (int)&v16);
    v8 = MuteControlForEndpoint;
    goto LABEL_7;
  }
  v16 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
    (const char *)0x8007000ELL,
    0);
  return 2147942414LL;
}
