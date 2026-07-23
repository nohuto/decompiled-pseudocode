/*
 * XREFs of PpmEventTraceDeliveredPerfChange @ 0x140255B30
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x140256040 (PpmPerfSnapDeliveredPerformance.c)
 * Callees:
 *     PpmConvertTime @ 0x1402555D0 (PpmConvertTime.c)
 *     PpmEventGetEventDescriptorAndProcessorId @ 0x140257790 (PpmEventGetEventDescriptorAndProcessorId.c)
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceDeliveredPerfChange(int a1, int a2, int a3, int a4, unsigned __int64 a5)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v6; // rbx
  unsigned __int64 v7; // rax
  int *v8; // rax
  int v10; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-11h] BYREF
  int *v13; // [rsp+68h] [rbp-1h]
  int v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+74h] [rbp+Bh]
  unsigned __int64 *v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+84h] [rbp+1Bh]
  int *v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+94h] [rbp+2Bh]
  int v22; // [rsp+D0h] [rbp+67h] BYREF
  int v23; // [rsp+D8h] [rbp+6Fh] BYREF
  int v24; // [rsp+E0h] [rbp+77h] BYREF

  v24 = a4;
  v23 = a3;
  v22 = a2;
  v10 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (unsigned int)&PPM_ETW_DELIVERED_PERF_CHANGE,
                                                              (unsigned int)PPM_ETW_DELIVERED_PERF_CHANGE_HV,
                                                              (unsigned int)&v10,
                                                              (__int64)&UserData);
  v6 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v7 = PpmConvertTime(a5, PopQpcFrequency, 0xF4240uLL);
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v11 = v7;
      v13 = &v22;
      v16 = &v11;
      v8 = &v23;
      v14 = 4;
      v17 = 8;
      v20 = 4;
      if ( v6 != &PPM_ETW_DELIVERED_PERF_CHANGE )
        v8 = &v24;
      v19 = v8;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(PpmEtwHandle, v6, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
