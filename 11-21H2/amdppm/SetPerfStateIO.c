/*
 * XREFs of SetPerfStateIO @ 0x1C0008FE0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0001BF8 (WriteGenAddr.c)
 *     ReadGenAddr @ 0x1C0003958 (ReadGenAddr.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000536C (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall SetPerfStateIO(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  int GenAddr; // eax
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  v5 = 0;
  WriteGenAddr((_BYTE *)a1, a2, a3);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( a3 )
    {
      GenAddr = ReadGenAddr(a1 + 12);
      if ( GenAddr != (_DWORD)a3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = GenAddr;
          v8 = a3;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x17u,
            (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids,
            v8,
            v9);
        }
        return (unsigned int)-1073741823;
      }
    }
  }
  return v5;
}
