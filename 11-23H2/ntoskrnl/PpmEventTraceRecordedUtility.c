/*
 * XREFs of PpmEventTraceRecordedUtility @ 0x1402576F0
 * Callers:
 *     PpmPerfRecordUtility @ 0x1402574C0 (PpmPerfRecordUtility.c)
 * Callees:
 *     PpmEventGetEventDescriptorAndProcessorId @ 0x140257790 (PpmEventGetEventDescriptorAndProcessorId.c)
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char PpmEventTraceRecordedUtility(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        ...)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v10; // rdi
  REGHANDLE v11; // rbx
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v16; // [rsp+68h] [rbp-A0h]
  __int64 v17; // [rsp+70h] [rbp-98h]
  __int64 *v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  char *v20; // [rsp+88h] [rbp-80h]
  __int64 v21; // [rsp+90h] [rbp-78h]
  _BYTE v22[16]; // [rsp+98h] [rbp-70h] BYREF
  char *v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  char *v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C0h] [rbp-48h]
  char *v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  int *v29; // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h]
  __int64 v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  __int64 *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  char *v35; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]
  va_list v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  __int64 v39; // [rsp+170h] [rbp+68h] BYREF
  __int64 v40; // [rsp+178h] [rbp+70h] BYREF
  __int64 v41; // [rsp+180h] [rbp+78h] BYREF
  __int64 v42; // [rsp+1B0h] [rbp+A8h] BYREF
  va_list va; // [rsp+1B0h] [rbp+A8h]
  __int64 v44; // [rsp+1B8h] [rbp+B0h]
  __int64 v45; // [rsp+1C0h] [rbp+B8h]
  va_list va1; // [rsp+1C8h] [rbp+C0h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v42 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, _QWORD);
  v45 = va_arg(va1, _QWORD);
  v41 = a4;
  v40 = a3;
  v39 = a2;
  LOBYTE(v13) = 100;
  LODWORD(v14) = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (unsigned int)PPM_ETW_RECORDED_UTILITY,
                                                              (unsigned int)PPM_ETW_RECORDED_UTILITY_HV,
                                                              (unsigned int)&v14,
                                                              (__int64)v22);
  v10 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    v11 = PpmEtwHandle;
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(PpmEtwHandle, EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v17 = 8LL;
      v16 = &v39;
      v19 = 8LL;
      v18 = &v40;
      v21 = 4LL;
      v20 = &a5;
      v24 = 4LL;
      v23 = &a6;
      v25 = &a7;
      v27 = &a8;
      v29 = &v13;
      v26 = 2LL;
      v31 = v45 + 1;
      v33 = &v41;
      v35 = &a9;
      va_copy(v37, va);
      v28 = 2LL;
      v30 = 1LL;
      v32 = 1LL;
      v34 = 8LL;
      v36 = 1LL;
      v38 = 1LL;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(v11, v10, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
