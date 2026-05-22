/*
 * XREFs of ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800BC7B8
 * Callers:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x1800BC750 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x1800BBD50 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x1800BBEA4 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x1800BC97C (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z @ 0x1800BCA00 (-ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::OnReadEvent(HANDLE *this)
{
  char v2; // si
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  unsigned int *v5; // rdi
  unsigned int v6; // ebp
  int Buffer; // eax
  unsigned int v8; // edi
  int InputReportFromRIM; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v12; // [rsp+70h] [rbp+8h]
  struct RIMDevice *v13; // [rsp+78h] [rbp+10h] BYREF

  v13 = 0LL;
  v12 = 0;
  v2 = 1;
  v3 = *((unsigned int *)this + 680);
  if ( (_DWORD)v3 == -1073741528 )
  {
    RIMDeviceCollection::Close(this);
LABEL_14:
    v8 = 0;
    goto LABEL_15;
  }
  if ( (v3 & 0x80000000) != 0LL )
  {
    v4 = 640LL;
LABEL_22:
    v8 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)v4,
           (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
           (const char *)v3);
    goto LABEL_15;
  }
  if ( (int)RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, 0, this[338], &v13, 0LL) < 0 )
    goto LABEL_25;
  v5 = (unsigned int *)*((_QWORD *)v13 + 4);
  v6 = *((unsigned __int16 *)this + 1364);
  if ( (v5[1] & 0xFFFFFEFF) != 0 )
  {
    InputTraceLogging::ISM::ReceiveRawInput(*((const struct DeviceInfo **)v13 + 4));
    (*((void (__fastcall **)(HANDLE *, _QWORD, HANDLE, _QWORD))*this + 10))(this, *v5, this[337], v6);
  }
  if ( this[337] == this[335]
    || (v12 = 1,
        RIMFreeInputBuffer(this[10]),
        this[337] = 0LL,
        Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, v6),
        v8 = Buffer,
        Buffer >= 0) )
  {
LABEL_25:
    if ( *((_BYTE *)this + 2736) )
    {
      SetEvent(this[7]);
    }
    else
    {
      InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
      if ( InputReportFromRIM < 0 )
      {
        v3 = (unsigned int)InputReportFromRIM;
        v4 = 712LL;
        goto LABEL_22;
      }
    }
    v2 = 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B4,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
    (const char *)(unsigned int)Buffer);
LABEL_15:
  if ( v2 && v12 && this[337] )
  {
    RIMFreeInputBuffer(this[10]);
    this[337] = 0LL;
  }
  return v8;
}
