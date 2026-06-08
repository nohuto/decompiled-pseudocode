/*
 * XREFs of DecodeMWaitIdleState @ 0x1C00201A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall DecodeMWaitIdleState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  unsigned __int64 v11; // rdx
  int v12; // ecx
  __int128 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v8 = 0;
  HIDWORD(v15) = 0;
  *a5 = 0LL;
  if ( *(_WORD *)a2 == 639 && *(_BYTE *)(a2 + 2) == 2 )
  {
    v11 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        3u,
        0xAu,
        (__int64)&WPP_f18f339c2e4b3609a6a0a5f07706c4ee_Traceguids);
      v11 = *a5;
    }
    v12 = *(_DWORD *)(a2 + 4);
    *((_QWORD *)&v14 + 1) = *(_QWORD *)(a1 + 200);
    LODWORD(v14) = v12;
    DWORD1(v14) = (*(_DWORD *)(a1 + 288) & 0x80000) != 0;
    LODWORD(v15) = 0;
    *a5 = v11 & 0xFF0FFFFFFFFFFFFFuLL | 0x30000000000000LL;
    *(_DWORD *)a5 = v12;
    if ( a8 )
    {
      *(_BYTE *)(a8 + 80) = 1;
      *(_QWORD *)(a8 + 24) = MWaitIdle;
      *(_OWORD *)(a8 + 32) = v14;
      *(_QWORD *)(a8 + 64) = DecodeMWaitContext;
      *(_QWORD *)(a8 + 48) = v15;
      *(_QWORD *)(a8 + 16) = 0LL;
    }
    if ( a6 )
      *a6 = 0;
    if ( a7 )
      *a7 = 1;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
