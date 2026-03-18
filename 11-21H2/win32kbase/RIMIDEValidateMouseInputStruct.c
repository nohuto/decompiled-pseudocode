/*
 * XREFs of RIMIDEValidateMouseInputStruct @ 0x1C019E830
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C019DE20 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1C00E626A (WPP_RECORDER_AND_TRACE_SF_i.c)
 */

__int64 __fastcall RIMIDEValidateMouseInputStruct(__int64 a1)
{
  int v1; // r9d
  char v2; // bl
  unsigned int v3; // edx
  int v5; // r8d
  int v6; // ecx
  unsigned int v7; // r8d
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // r9
  char v13; // [rsp+40h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 12);
  v2 = 1;
  v3 = 1;
  v5 = v1;
  if ( (v1 & 2) != 0 && (v1 & 4) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      LOBYTE(v3) = 0;
    }
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v5,
        (_DWORD)gRimLog,
        2,
        1,
        22,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
        v1);
    }
    v1 = *(_DWORD *)(a1 + 12);
    v3 = 0;
    v5 = v1;
  }
  v6 = v5;
  if ( (v5 & 8) != 0 && (v5 & 0x10) != 0 )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = v5;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v5,
        (_DWORD)gRimLog,
        2,
        1,
        23,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
        v13);
      v1 = *(_DWORD *)(a1 + 12);
      v6 = v1;
    }
    v3 = 0;
  }
  v7 = v6;
  if ( (v6 & 0x20) != 0 && (v6 & 0x40) != 0 )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        2,
        1,
        24,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
        v6);
      v1 = *(_DWORD *)(a1 + 12);
      v7 = v1;
    }
    v3 = 0;
  }
  v8 = ((v7 >> 7) & 1) + 1;
  if ( (v7 & 0x100) == 0 )
    v8 = (v7 >> 7) & 1;
  v9 = v8 + 1;
  if ( (v7 & 0x800) == 0 )
    v9 = v8;
  v10 = v9 + 1;
  if ( (v7 & 0x1000) == 0 )
    v10 = v9;
  if ( v10 > 1 )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v7,
        (_DWORD)gRimLog,
        2,
        1,
        25,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
        v1);
    }
    v3 = 0;
  }
  if ( *(_DWORD *)(a1 + 16)
    && *(_DWORD *)(a1 + 16) > (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v7,
        (_DWORD)gRimLog,
        2,
        1,
        26,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
        *(_DWORD *)(a1 + 16),
        (unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24);
    }
    v3 = 0;
  }
  v11 = *(_QWORD *)(a1 + 24);
  if ( v11 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v2 = 0;
    }
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = v2;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_i(WPP_GLOBAL_Control->AttachedDevice, v3, v7, v11, 2);
    }
    return 0;
  }
  return v3;
}
