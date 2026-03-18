/*
 * XREFs of RemoveProcessFromJob @ 0x1C007A1B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall RemoveProcessFromJob(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // di
  bool v4; // dl
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // edx

  v1 = *(_QWORD *)(a1 + 768);
  v3 = 1;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      13,
      18,
      (__int64)&WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids,
      a1,
      v1);
  if ( !v1 )
    return 0LL;
  v6 = *(_DWORD *)(v1 + 28);
  v7 = 0LL;
  if ( !v6 )
  {
LABEL_23:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v3 = 0;
    }
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        20,
        (__int64)&WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids,
        a1,
        v1);
    }
    return 0LL;
  }
  while ( a1 != *(_QWORD *)(*(_QWORD *)(v1 + 40) + 8 * v7) )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= v6 )
      goto LABEL_23;
  }
  *(_QWORD *)(a1 + 768) = 0LL;
  memmove(
    (void *)(*(_QWORD *)(v1 + 40) + 8 * v7),
    (const void *)(*(_QWORD *)(v1 + 40) + 8 * v7 + 8),
    8LL * (unsigned int)(*(_DWORD *)(v1 + 28) - v7 - 1));
  if ( (*(_DWORD *)(v1 + 28))-- == 1 )
  {
    Win32FreePool(*(_QWORD *)(v1 + 40));
    *(_QWORD *)(v1 + 40) = 0LL;
    *(_DWORD *)(v1 + 32) = 0;
  }
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      13,
      19,
      (__int64)&WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids,
      a1,
      v1);
  return 1LL;
}
