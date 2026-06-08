/*
 * XREFs of ValidatePssSymmetry @ 0x1C003059C
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C002FFBC (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_ddsdd @ 0x1C00088CC (WPP_RECORDER_SF_ddsdd.c)
 *     WPP_RECORDER_SF_ddsddd @ 0x1C0008A88 (WPP_RECORDER_SF_ddsddd.c)
 */

__int64 __fastcall ValidatePssSymmetry(char a1, unsigned int *a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r10d
  __int64 i; // rdx
  int v10; // [rsp+20h] [rbp-48h]

  v6 = -1073741823;
  if ( a2 && a4 )
  {
    v7 = *a2;
    if ( *a2 == *a4 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= v7 )
          return 0;
        if ( a2[12 * i + 2] != a4[12 * i + 2] )
          break;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddsddd((__int64)WPP_GLOBAL_Control->DeviceExtension, i, a3, (__int64)a4, v10, a1, a3, a5);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_ddsdd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, a3, (__int64)a4, v10, a1, a3, a5);
    }
  }
  return v6;
}
