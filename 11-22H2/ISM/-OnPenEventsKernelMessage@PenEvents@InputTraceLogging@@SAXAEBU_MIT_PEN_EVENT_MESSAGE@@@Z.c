/*
 * XREFs of ?OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1801BD24C
 * Callers:
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1801BD338 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800B2AB4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::PenEvents::OnPenEventsKernelMessage(const struct _MIT_PEN_EVENT_MESSAGE *a1)
{
  __int64 v2; // r10
  const char *v3; // rax
  const char *v4; // rcx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v2 > 4u
    && (*(_DWORD *)(v2 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x200LL) == *(_QWORD *)(v2 + 24) )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        v5 = *((_DWORD *)a1 + 1);
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            if ( v6 == 1 )
              v3 = "TailLongPress";
            else
              v3 = "UnknownButtonAction";
          }
          else
          {
            v3 = "TailDoubleClick";
          }
        }
        else
        {
          v3 = "TailClick";
        }
        goto LABEL_20;
      case 1:
        v4 = "Undocked";
        v3 = "Docked";
        break;
      case 2:
        v4 = "DisabledTailButton";
        v3 = "EnabledTailButton";
        break;
      default:
        v3 = "UNKNOWN";
LABEL_20:
        v7 = (__int64)v3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v2,
          byte_18023746E,
          0LL,
          0LL,
          (const unsigned __int16 **)&v7);
        return;
    }
    if ( !*((_DWORD *)a1 + 1) )
      v3 = v4;
    goto LABEL_20;
  }
}
