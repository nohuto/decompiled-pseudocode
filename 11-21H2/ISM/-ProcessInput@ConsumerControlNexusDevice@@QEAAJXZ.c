/*
 * XREFs of ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800D4298
 * Callers:
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800D0F9C (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800D33FC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800D40C4 (-NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800D4558 (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::ProcessInput(ConsumerControlNexusDevice *this)
{
  char *v1; // r12
  char *i; // rbx
  size_t v4; // rax
  USHORT *v5; // rax
  USHORT *v6; // rdi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  NTSTATUS Usages; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // r14
  unsigned __int64 j; // rax
  _DWORD *v13; // rax
  int v14; // eax
  unsigned int v15; // r15d
  int v17; // ebx
  __int64 v18; // rdx
  ULONG ReportLength; // [rsp+40h] [rbp-C8h]
  ULONG UsageLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v21[2]; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v23[4]; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER v24; // [rsp+78h] [rbp-90h]
  int v25; // [rsp+80h] [rbp-88h]
  __int64 v26; // [rsp+88h] [rbp-80h]
  __int16 v27; // [rsp+A4h] [rbp-64h]
  __int16 v28; // [rsp+C6h] [rbp-42h]
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v1 = (char *)this + 48;
  for ( i = (char *)*((_QWORD *)this + 6); i != v1; i = *(char **)i )
  {
    if ( !*((_DWORD *)i + 14) && *((_QWORD *)i + 8) > 1uLL )
    {
      v4 = 2LL * *((unsigned __int16 *)this + 20);
      if ( !is_mul_ok(*((unsigned __int16 *)this + 20), 2uLL) )
        v4 = -1LL;
      v5 = (USHORT *)operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
      v6 = v5;
      if ( !v5 )
      {
        v17 = -2147024882;
        v18 = 215LL;
        goto LABEL_23;
      }
      memset_0(v5, 0, 2LL * *((unsigned __int16 *)this + 20));
      PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 4);
      ReportLength = *((_DWORD *)i + 16);
      UsageLength[1] = *((unsigned __int16 *)this + 20);
      Usages = HidP_GetUsages(HidP_Input, 0xCu, 0, v6, &UsageLength[1], PreparsedData, i + 80, ReportLength);
      if ( Usages < 0 )
      {
        v15 = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0xE5,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
                (const char *)(unsigned int)Usages);
        goto LABEL_21;
      }
      v11 = 0;
      for ( j = 0LL; j < UsageLength[1]; ++j )
      {
        v11 = v6[j] == 208;
        if ( v6[j] == 208 )
          break;
      }
      if ( v11 != *((_BYTE *)this + 104) )
      {
        if ( (unsigned int)dword_180240410 > 5 )
        {
          LOBYTE(UsageLength[0]) = v11;
          *(_QWORD *)v21 = "NexusButton on ConsumerControl pressed/released";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
            UsageLength[1],
            byte_180202B72,
            v9,
            v10,
            (const unsigned __int16 **)v21,
            (__int64)UsageLength);
        }
        QueryPerformanceCounter(&PerformanceCount);
        memset_0(v23, 0, 0x170uLL);
        v13 = (_DWORD *)*((_QWORD *)this + 16);
        v25 = 368;
        v23[0] = 4;
        v23[1] = *v13;
        v23[2] = GetTickCount();
        v24 = PerformanceCount;
        v26 = 0x6B6579626F617264LL;
        v27 = 7;
        v28 = (v11 ^ 1) + 64;
        v14 = ConsumerControlNexusDevice::NotifyInputReport(this, (struct InputInfo *)v23);
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x107,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
            (const char *)(unsigned int)v14);
LABEL_21:
          operator delete[](v6);
          return v15;
        }
        *((_BYTE *)this + 104) = v11;
      }
      operator delete[](v6);
    }
  }
  v17 = ConsumerControlNexusDevice::QueueInputBuffers(this);
  if ( v17 >= 0 )
    return 0LL;
  v18 = 275LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
