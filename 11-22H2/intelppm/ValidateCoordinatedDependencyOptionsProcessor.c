/*
 * XREFs of ValidateCoordinatedDependencyOptionsProcessor @ 0x1C00385FC
 * Callers:
 *     ValidateCoordinatedDependencyOptions @ 0x1C0038264 (ValidateCoordinatedDependencyOptions.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0009A08 (WPP_RECORDER_SF_ddd.c)
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
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  unsigned int *v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned __int16 v13; // r9
  int v15; // [rsp+20h] [rbp-28h]

  v5 = *(_QWORD *)(a3 + 16);
  KeAddProcessorAffinityEx(a4, *(unsigned int *)(v5 + 56));
  v7 = 0;
  v8 = *(_DWORD *)(a3 + 12);
  v9 = 0;
  v10 = *(unsigned int **)(v5 + 1152);
  *a5 = 0;
  if ( v8 )
  {
    v11 = *v10;
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)(a3 + 4LL * v9 + 24);
      if ( (unsigned int)v12 >= v11 )
        break;
      if ( *(_BYTE *)(a3 + 4LL * v9 + 27) )
      {
        if ( (v10[3 * v12 + 1] & 0x80u) != 0 )
          *a5 = 1;
        if ( !*(_BYTE *)(a3 + 4LL * v9 + 25) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v13 = 81;
          goto LABEL_14;
        }
      }
      if ( ++v9 >= v8 )
        return v7;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v13 = 80;
LABEL_14:
    WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, (__int64)v10, v13, v15);
    return (unsigned int)-1073741811;
  }
  return v7;
}
