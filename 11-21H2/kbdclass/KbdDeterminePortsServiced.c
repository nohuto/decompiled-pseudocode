/*
 * XREFs of KbdDeterminePortsServiced @ 0x1C000DBF0
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000D5A0 (KeyboardClassFindMorePorts.c)
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00027F0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002EE0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KbdDeterminePortsServiced(unsigned __int16 *a1, _DWORD *a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD *Pool2; // rdi
  __int64 v7; // rbx
  PVOID SystemRoutineAddress; // rax
  int v9; // edx
  int v10; // ebx
  int v11; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *a2 = 0;
  v4 = *a1;
  if ( a1[1] < v4 + 2 )
    return 3221225473LL;
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1) + 2) = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 112LL, 1130652235LL);
  if ( Pool2 )
  {
    Pool2[2] = 0LL;
    *Pool2 = KbdDeviceMapQueryCallback;
    v7 = *((_QWORD *)a1 + 1);
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v10 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _DWORD *))SystemRoutineAddress)(
            2147483652LL,
            v7,
            Pool2,
            a2);
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v11, 80, 0, v10);
    }
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v10;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 1LL);
    }
    return 3221225473LL;
  }
}
