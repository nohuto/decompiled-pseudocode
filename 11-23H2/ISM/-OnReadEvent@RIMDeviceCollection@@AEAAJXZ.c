/*
 * XREFs of ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800D5798
 * Callers:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x1800D5730 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x18004152C (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_c9e730388755799910d9e6aba5840826___::_lambda_call__lambda_c9e730388755799910d9e6aba5840826___ @ 0x1800D4BAC (wil--details--lambda_call__lambda_c9e730388755799910d9e6aba5840826___--_lambda_call__lambda_c9e7.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x1800D4E1C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x1800D4F70 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800D50AC (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z @ 0x1800D5930 (-ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::OnReadEvent(RIMDeviceCollection *this)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int *v8; // rsi
  unsigned int v9; // ebp
  int Buffer; // eax
  int v11; // esi
  int InputReportFromRIM; // eax
  int v14; // [rsp+20h] [rbp-48h]
  _QWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v18; // [rsp+70h] [rbp+8h] BYREF
  struct RIMDevice *v19; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  v19 = 0LL;
  v18 = 0;
  v15[0] = &v18;
  v15[1] = this;
  v16 = 1;
  v3 = *((unsigned int *)this + 680);
  if ( (_DWORD)v3 != -1073741528 )
  {
    if ( (v3 & 0x80000000) != 0LL )
    {
      v4 = 634LL;
LABEL_16:
      v2 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v4,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             (const char *)v3);
      goto LABEL_17;
    }
    if ( (int)RIMDeviceCollection::FindDevice(this, 0, *((void **)this + 338), &v19, 0LL) >= 0 )
    {
      v8 = (unsigned int *)*((_QWORD *)v19 + 4);
      v9 = *((unsigned __int16 *)this + 1364);
      if ( (v8[1] & 0xFFFFFEFF) != 0 )
      {
        InputTraceLogging::ISM::ReceiveRawInput(*((const struct DeviceInfo **)v19 + 4));
        (*(void (__fastcall **)(RIMDeviceCollection *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(
          this,
          *v8,
          *((_QWORD *)this + 337),
          v9);
      }
      v5 = *((_QWORD *)this + 337);
      if ( v5 != *((_QWORD *)this + 335) )
      {
        v18 = 1;
        RIMFreeInputBuffer(*((_QWORD *)this + 10));
        *((_QWORD *)this + 337) = 0LL;
        Buffer = RIMDeviceCollection::CreateReadBuffer(this, v9);
        v11 = Buffer;
        if ( Buffer < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2AE,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)(unsigned int)Buffer);
          v2 = v11;
          goto LABEL_17;
        }
      }
    }
    if ( *((_BYTE *)this + 2736) )
    {
      SetEvent(*((HANDLE *)this + 7));
    }
    else
    {
      InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM(this, v5, v6, v7, v14);
      if ( InputReportFromRIM < 0 )
      {
        v3 = (unsigned int)InputReportFromRIM;
        v4 = 706LL;
        goto LABEL_16;
      }
    }
    return 0LL;
  }
  RIMDeviceCollection::Close((HANDLE *)this);
LABEL_17:
  wil::details::lambda_call__lambda_c9e730388755799910d9e6aba5840826___::_lambda_call__lambda_c9e730388755799910d9e6aba5840826___((__int64)v15);
  return v2;
}
