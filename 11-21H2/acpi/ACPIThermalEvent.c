/*
 * XREFs of ACPIThermalEvent @ 0x1C0060D00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalLoopEx @ 0x1C00209D8 (ACPIThermalLoopEx.c)
 *     WPP_RECORDER_SF_Dqssdddd @ 0x1C0021818 (WPP_RECORDER_SF_Dqssdddd.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 */

void __fastcall ACPIThermalEvent(ULONG_PTR a1, int a2)
{
  void *v3; // rbp
  int v4; // esi
  _QWORD *DeviceExtension; // rdi
  char v6; // r15
  void *v7; // r14
  __int64 v8; // rax
  int v9; // ebx
  int v10; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER Time; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+78h] [rbp-30h] BYREF

  v3 = &unk_1C006FB8B;
  TimeFields = 0LL;
  v4 = 0;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v6 = 0;
  v7 = &unk_1C006FB8B;
  Time.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( DeviceExtension )
  {
    v8 = DeviceExtension[1];
    v6 = (char)DeviceExtension;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v3 = (void *)DeviceExtension[76];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (void *)DeviceExtension[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dqssdddd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)TimeFields.Minute,
      (unsigned int)TimeFields.Hour,
      0x11u,
      v10,
      a2,
      v6,
      (__int64)v3,
      (__int64)v7);
  v9 = a2 - 128;
  if ( v9 )
  {
    if ( v9 == 1 )
      v4 = 536871046;
  }
  else
  {
    v4 = 536870978;
  }
  ACPIThermalLoopEx((__int64)DeviceExtension, v4, 0);
}
