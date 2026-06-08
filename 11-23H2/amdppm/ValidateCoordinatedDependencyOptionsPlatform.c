/*
 * XREFs of ValidateCoordinatedDependencyOptionsPlatform @ 0x1C002F2F0
 * Callers:
 *     ValidateCoordinatedDependencyOptions @ 0x1C002F0B4 (ValidateCoordinatedDependencyOptions.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0007E88 (WPP_RECORDER_SF_ddd.c)
 */

__int64 __fastcall ValidateCoordinatedDependencyOptionsPlatform(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  _BYTE *v8; // rdx
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r12
  int IsEmptyAffinity; // eax
  __int64 v15; // rdx
  unsigned __int16 v16; // r9
  int v18; // [rsp+20h] [rbp-48h]

  v6 = 0;
  v8 = a6;
  v10 = a1;
  v11 = 0;
  *a6 = 0;
  while ( v11 < *(_DWORD *)(a4 + 12) )
  {
    v12 = *(unsigned __int8 *)(a4 + 4LL * v11 + 24);
    if ( (unsigned int)v12 >= a2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v16 = 83;
      goto LABEL_18;
    }
    v13 = v10 + 320 * v12;
    if ( *(_BYTE *)(v13 + 353) )
      *v8 = 1;
    IsEmptyAffinity = KeIsEmptyAffinityEx(a5);
    v15 = v13 + 48;
    if ( IsEmptyAffinity )
    {
      KeCopyAffinityEx2(a5, v15);
    }
    else if ( !(unsigned int)KeIsEqualAffinityEx(a5, v15) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v16 = 84;
LABEL_18:
      WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)v8, v10, v16, v18);
      return (unsigned int)-1073741811;
    }
    if ( *(_BYTE *)(a4 + 4LL * v11 + 27) && !*(_BYTE *)(a4 + 4LL * v11 + 25) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 85;
        goto LABEL_18;
      }
      return (unsigned int)-1073741811;
    }
    v8 = a6;
    ++v11;
    v10 = a1;
  }
  return v6;
}
