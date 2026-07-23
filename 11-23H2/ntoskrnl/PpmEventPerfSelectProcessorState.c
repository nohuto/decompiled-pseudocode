/*
 * XREFs of PpmEventPerfSelectProcessorState @ 0x140255A48
 * Callers:
 *     PpmPerfSelectProcessorState @ 0x1402556A0 (PpmPerfSelectProcessorState.c)
 * Callees:
 *     PpmEventGetEventDescriptorAndProcessorId @ 0x140257790 (PpmEventGetEventDescriptorAndProcessorId.c)
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall PpmEventPerfSelectProcessorState(int a1, int a2, int a3, int a4, char a5)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v6; // rdi
  REGHANDLE v7; // rbx
  int v9; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-21h] BYREF
  int *v11; // [rsp+68h] [rbp-11h]
  int v12; // [rsp+70h] [rbp-9h]
  int v13; // [rsp+74h] [rbp-5h]
  int *v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+80h] [rbp+7h]
  int v16; // [rsp+84h] [rbp+Bh]
  int *v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+90h] [rbp+17h]
  int v19; // [rsp+94h] [rbp+1Bh]
  char *v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+A0h] [rbp+27h]
  int v22; // [rsp+A4h] [rbp+2Bh]
  int v23; // [rsp+E0h] [rbp+67h] BYREF
  int v24; // [rsp+E8h] [rbp+6Fh] BYREF
  int v25; // [rsp+F0h] [rbp+77h] BYREF

  v25 = a4;
  v24 = a3;
  v23 = a2;
  v9 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (unsigned int)PPM_ETW_PERF_SELECT_PROCESSOR_STATE,
                                                              (unsigned int)PPM_ETW_PERF_SELECT_PROCESSOR_STATE_HV,
                                                              (unsigned int)&v9,
                                                              (__int64)&UserData);
  v6 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    v7 = PpmEtwHandle;
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v11 = &v23;
      v12 = 4;
      v14 = &v24;
      v17 = &v25;
      v20 = &a5;
      v15 = 4;
      v18 = 4;
      v21 = 4;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(v7, v6, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
