/*
 * XREFs of USBCntrlGetSetBoolean @ 0x1C0038B70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0003538 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     USBHwGetSetByte @ 0x1C0033D00 (USBHwGetSetByte.c)
 */

__int64 __fastcall USBCntrlGetSetBoolean(
        __int64 a1,
        __int64 a2,
        int a3,
        _BYTE *a4,
        unsigned int a5,
        signed __int8 a6,
        _DWORD *a7)
{
  char v7; // bl
  __int64 v9; // r14
  char v11; // dl
  int SetByte; // r14d
  int v13; // [rsp+20h] [rbp-68h]
  int v14; // [rsp+20h] [rbp-68h]

  v7 = 1;
  v9 = *(_QWORD *)(a2 + 128) + 16LL * a5;
  if ( a3 )
  {
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_ddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v13,
        0xAu,
        0xEu,
        (__int64)&WPP_9b39d06d20dd34f85528fc39f9299c88_Traceguids);
    SetByte = USBHwGetSetByte(a1, *(_DWORD *)(a2 + 80), *(_DWORD *)(v9 + 8), *(_DWORD *)(a2 + 76) - 6, a4, a6);
    if ( SetByte < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v7,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v14,
          0xAu,
          0xFu,
          (__int64)&WPP_9b39d06d20dd34f85528fc39f9299c88_Traceguids);
    }
    else if ( a6 >= 0 )
    {
      *a7 = 4;
    }
    return (unsigned int)SetByte;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v13,
        0xAu,
        0xDu,
        (__int64)&WPP_9b39d06d20dd34f85528fc39f9299c88_Traceguids);
    return 3221225990LL;
  }
}
