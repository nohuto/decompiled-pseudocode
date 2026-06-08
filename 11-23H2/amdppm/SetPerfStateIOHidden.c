/*
 * XREFs of SetPerfStateIOHidden @ 0x1C0009DC0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrHidden @ 0x1C0002804 (WriteGenAddrHidden.c)
 *     ReadGenAddrHidden @ 0x1C0003D20 (ReadGenAddrHidden.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005D08 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall SetPerfStateIOHidden(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebx
  int GenAddrHidden; // eax
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v7 = 0;
  WriteGenAddrHidden(a1, (_BYTE *)a2, a3);
  if ( *(_QWORD *)(a2 + 16) )
  {
    if ( a4 )
    {
      GenAddrHidden = ReadGenAddrHidden(a1, (_BYTE *)(a2 + 12));
      if ( GenAddrHidden != (_DWORD)a4 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = GenAddrHidden;
          v10 = a4;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x18u,
            (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids,
            v10,
            v11);
        }
        return (unsigned int)-1073741823;
      }
    }
  }
  return v7;
}
