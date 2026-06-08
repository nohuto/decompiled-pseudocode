/*
 * XREFs of ValidateCoordinatedDependencyOptionsProcessor @ 0x1C002F448
 * Callers:
 *     ValidateCoordinatedDependencyOptions @ 0x1C002F0B4 (ValidateCoordinatedDependencyOptions.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0007E88 (WPP_RECORDER_SF_ddd.c)
 */

__int64 __fastcall ValidateCoordinatedDependencyOptionsProcessor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 v5; // rbx
  unsigned int v7; // r9d
  _DWORD *v8; // r8
  unsigned int v9; // r10d
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned __int16 v12; // r9
  int v14; // [rsp+20h] [rbp-28h]

  v5 = *(_QWORD *)(a3 + 16);
  KeAddProcessorAffinityEx(a4, *(unsigned int *)(v5 + 56));
  v7 = 0;
  v8 = *(_DWORD **)(v5 + 1152);
  v9 = 0;
  v10 = *(_DWORD *)(a3 + 12);
  *a5 = 0;
  while ( v9 < v10 )
  {
    v11 = *(unsigned __int8 *)(a3 + 4LL * v9 + 24);
    if ( (unsigned int)v11 >= *v8 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 80;
LABEL_13:
        WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, (__int64)v8, v12, v14);
      }
      return (unsigned int)-1073741811;
    }
    if ( *(_BYTE *)(a3 + 4LL * v9 + 27) )
    {
      if ( (v8[3 * v11 + 1] & 0x80u) != 0 )
        *a5 = 1;
      if ( !*(_BYTE *)(a3 + 4LL * v9 + 25) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = 81;
          goto LABEL_13;
        }
        return (unsigned int)-1073741811;
      }
    }
    ++v9;
  }
  return v7;
}
