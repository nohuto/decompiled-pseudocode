/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180040030
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180020420 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?ComputePnpActionAndInputType@Win32kInterop@@AEBA?AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@PEAW4InputType@@@Z @ 0x180040108 (-ComputePnpActionAndInputType@Win32kInterop@@AEBA-AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTI.c)
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x180040160 (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800B2AB4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@G@@@Z @ 0x18010568C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1801089E0 (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  Win32kInterop *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  const char *v9; // rax
  __int64 v10; // [rsp+50h] [rbp-9h] BYREF
  int v11; // [rsp+58h] [rbp-1h] BYREF
  int v12; // [rsp+5Ch] [rbp+3h] BYREF
  __int64 v13; // [rsp+60h] [rbp+7h] BYREF
  __int64 v14; // [rsp+68h] [rbp+Fh] BYREF
  const char *v15; // [rsp+70h] [rbp+17h] BYREF
  GUID ActivityId; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v17; // [rsp+88h] [rbp+2Fh]
  __int64 v18; // [rsp+98h] [rbp+3Fh]

  v3 = *a2;
  v15 = "MITEP_PNP_DEVICE_NOTIFICATION";
  ActivityId = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v4 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v4 )
  {
    if ( (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v4 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                         v8,
                         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
           + 1);
      if ( *(_DWORD *)v4 > 6u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
      {
        v10 = (__int64)v15;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v4,
          (__int64)&v10);
      }
    }
  }
  v5 = *(Win32kInterop **)(a1 + 8);
  v7 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     v4,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v7 > 4u )
  {
    v6 = 512LL;
    if ( (*(_DWORD *)(v7 + 16) & 0x200LL) != 0 && (*(_QWORD *)(v7 + 24) & 0x200LL) == *(_QWORD *)(v7 + 24) )
    {
      v13 = v3 + 52;
      v11 = *(_DWORD *)(v3 + 12);
      v12 = *(_DWORD *)(v3 + 8);
      LODWORD(v10) = *(_DWORD *)(v3 + 4);
      if ( *(_DWORD *)v3 )
      {
        switch ( *(_DWORD *)v3 )
        {
          case 1:
            v9 = "Mouse";
            break;
          case 2:
            v9 = "Keyboard";
            break;
          case 3:
            v9 = "Touch";
            break;
          case 4:
            v9 = "PTP";
            break;
          case 5:
            v9 = "Pen";
            break;
          default:
            v9 = "UNKNOWN";
            break;
        }
      }
      else
      {
        v9 = "HID";
      }
      v14 = (__int64)v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v7,
        (int)&dword_180233DA3,
        (__int64)&v14,
        (__int64)&v10,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v13);
    }
  }
  if ( *(_DWORD *)(v3 + 8) == 2 )
  {
    if ( (unsigned int)Win32kInterop::ComputePnpActionAndInputType(v6, v3, &v10) )
      Win32kInterop::ProcessDeviceArrival(v5, v3, (unsigned int)v10);
  }
  else if ( *(_DWORD *)(v3 + 8) == 3 && (unsigned int)Win32kInterop::ComputePnpActionAndInputType(v6, v3, &v10) )
  {
    Win32kInterop::ProcessDeviceRemoval(v5, (const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *)v3);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)&v15);
}
