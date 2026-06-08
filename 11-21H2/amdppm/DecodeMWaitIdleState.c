/*
 * XREFs of DecodeMWaitIdleState @ 0x1C001FB90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall DecodeMWaitIdleState(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  __int128 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  v8 = 0;
  HIDWORD(v13) = 0;
  if ( *(_BYTE *)a2 != 127 || *(_BYTE *)(a2 + 1) != 2 || *(_BYTE *)(a2 + 2) != 2 )
    return (unsigned int)-1073741823;
  if ( a3 == -1 )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x29u) )
    {
LABEL_6:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          3u,
          0xBu,
          (__int64)&WPP_03e7655bd87239999072df37c338ea32_Traceguids);
      *((_QWORD *)&v12 + 1) = *(_QWORD *)(a1 + 200);
      LODWORD(v12) = *(_DWORD *)(a2 + 4);
      DWORD1(v12) = (*(_DWORD *)(a1 + 288) & 0x80000) != 0;
      LODWORD(v13) = 0;
      if ( a5 )
        *a5 = *(unsigned int *)(a2 + 4) | 0x30000000000000LL;
      if ( a8 )
      {
        *(_BYTE *)(a8 + 80) = 1;
        *(_QWORD *)(a8 + 24) = MWaitIdle;
        *(_OWORD *)(a8 + 32) = v12;
        *(_QWORD *)(a8 + 64) = DecodeMWaitContext;
        *(_QWORD *)(a8 + 48) = v13;
        *(_QWORD *)(a8 + 16) = 0LL;
      }
      if ( a6 )
        *a6 = 0;
      if ( a7 )
        *a7 = 1;
      return v8;
    }
  }
  else if ( (*(_DWORD *)(a1 + 280) & 0x7F000) != 0 )
  {
    goto LABEL_6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xAu,
      (__int64)&WPP_03e7655bd87239999072df37c338ea32_Traceguids);
  return (unsigned int)-1073741637;
}
