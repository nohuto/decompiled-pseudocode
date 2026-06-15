/*
 * XREFs of ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x180110F7C
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18001ECEC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F2954 (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAU.c)
 * Callees:
 *     ??0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z @ 0x180021410 (--0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___ @ 0x18011094C (wil--details--lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___--_lambda_call__lambda_c171.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMuteSoftware::Make(
        struct IMMDevice *a1,
        struct IControlChangeNotify *a2,
        struct IMuteControlHandler **a3)
{
  CMuteControlBase *v6; // rax
  CMuteControlBase *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  struct IMuteControlHandler *v10; // rcx
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMuteControlHandler *v15; // [rsp+60h] [rbp+18h] BYREF
  CMuteControlBase *v16; // [rsp+68h] [rbp+20h]

  *a3 = 0LL;
  v6 = (CMuteControlBase *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v16 = v6;
  if ( v6 )
  {
    CMuteControlBase::CMuteControlBase(v6, a2);
    *(_QWORD *)v7 = &CMuteSoftware::`vftable';
    *((_QWORD *)v7 + 6) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)v7 + 56), 0, 0);
    *((_DWORD *)v7 + 24) = 0;
    *((_QWORD *)v7 + 13) = 0LL;
    v15 = v7;
    *(_QWORD *)v12 = &v15;
    v13 = 1;
    v8 = (*(__int64 (__fastcall **)(CMuteControlBase *, struct IMMDevice *))(*(_QWORD *)v7 + 96LL))(v7, a1);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v15;
      *a3 = v15;
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v10 + 8LL))(v10);
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v15 + 16LL))(v15);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x274,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)(unsigned int)v8);
    wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___(v12);
  }
  else
  {
    v15 = 0LL;
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x272,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)0x8007000ELL);
  }
  return v9;
}
