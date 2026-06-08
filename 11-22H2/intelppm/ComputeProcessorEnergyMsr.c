/*
 * XREFs of ComputeProcessorEnergyMsr @ 0x1C00019F0
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0006EE0 (ComputeProcessorEnergyMsrEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 */

void __fastcall ComputeProcessorEnergyMsr(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  int v5; // ebp
  unsigned int v6; // esi
  __int64 v7; // rdi
  int v8; // ecx
  int SystemArgument1_high; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  if ( a1 )
  {
    *a5 = 0LL;
  }
  else
  {
    SystemArgument1_high = HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
    v5 = __readmsr(HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1));
    v6 = v5 - LODWORD(WPP_MAIN_CB.DeviceQueue.Lock);
    v7 = (unsigned int)(v5 - LODWORD(WPP_MAIN_CB.DeviceQueue.Lock));
    v10 = v7;
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_PACKAGE_ENERGY_COUNTER_UPDATE) )
    {
      UserData.Ptr = (unsigned __int64)&SystemArgument1_high;
      *(_QWORD *)&UserData.Size = 4LL;
      v12 = &v10;
      v13 = 8LL;
      EtwWrite(
        (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
        &PPM_ETW_PACKAGE_ENERGY_COUNTER_UPDATE,
        0LL,
        (ULONG)2,
        &UserData);
    }
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v5;
    if ( v6 > 0x7FFFFFFF )
      goto LABEL_9;
    v8 = (*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type >> 1) & 0x1F;
    if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 0 )
    {
      *a5 = v7 << v8;
      return;
    }
    if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) != 1 )
    {
LABEL_9:
      *a5 = 0LL;
      return;
    }
    *a5 = (unsigned __int64)(1000000 * v7) >> v8;
  }
}
