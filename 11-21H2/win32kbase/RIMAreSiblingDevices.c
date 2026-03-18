/*
 * XREFs of RIMAreSiblingDevices @ 0x1C0182700
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1C017FFB0 (NtRIMAreSiblingDevices.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMAreSiblingDevices(char *a1, char *a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // rbx
  char *v5; // r12
  _UNKNOWN **v7; // r8
  unsigned int v8; // esi
  int v9; // r15d
  int v10; // eax
  const void *v11; // rdx
  int v12; // r12d
  BOOL v13; // r13d
  PVOID v14; // r14
  const void *v15; // rcx
  unsigned int v16; // eax
  int v17; // r9d
  _UNKNOWN **v18; // r8
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  PVOID v21; // [rsp+60h] [rbp-38h] BYREF

  v4 = a3;
  v5 = a2;
  Object = 0LL;
  v21 = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v7,
      (_DWORD)gRimLog,
      4,
      1,
      135,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  v8 = 0;
  v9 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v10 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &v21);
  v12 = v10;
  if ( v9 < 0 || v10 < 0 )
  {
    v8 = v10;
    if ( v9 < 0 )
      v8 = v9;
    v14 = Object;
  }
  else
  {
    v13 = 0;
    v14 = Object;
    v15 = (const void *)*((_QWORD *)Object + 51);
    if ( v15 )
    {
      v11 = (const void *)*((_QWORD *)v21 + 51);
      if ( v11 )
      {
        v16 = *((_DWORD *)Object + 104);
        if ( v16 )
        {
          v17 = *((_DWORD *)v21 + 104);
          if ( v17 )
          {
            if ( v16 == v17 )
            {
              v13 = RtlCompareMemory(v15, v11, v16) == v16;
              v4 = a3;
            }
          }
        }
      }
    }
    if ( a4 )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = v13;
    }
    else
    {
      *v4 = v13;
    }
  }
  if ( v9 >= 0 )
    ObfDereferenceObject(v14);
  if ( v12 >= 0 )
    ObfDereferenceObject(v21);
  LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v18 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v11,
      (_DWORD)v18,
      (_DWORD)gRimLog,
      4,
      1,
      136,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v8);
  }
  return v8;
}
