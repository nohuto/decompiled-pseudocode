/*
 * XREFs of DisplayKernelIdleStates @ 0x1C002CBF0
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0033BF0 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LLLLL @ 0x1C0007CA8 (WPP_RECORDER_SF_LLLLL.c)
 *     WPP_RECORDER_SF_q @ 0x1C0007DDC (WPP_RECORDER_SF_q.c)
 */

_UNKNOWN **__fastcall DisplayKernelIdleStates(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned int i; // edi
  unsigned int v6; // r9d
  int v7; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = (_UNKNOWN **)WPP_RECORDER_SF_q((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x6Bu, v7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0x6Cu,
                                  (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0x6Du,
                                  (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 116); ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v6 = *(_DWORD *)(32LL * i + a1 + 120);
        result = (_UNKNOWN **)WPP_RECORDER_SF_LLLLL(
                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                (v6 >> 1) & 1,
                                (v6 >> 2) & 1,
                                v6 >> 31,
                                v7);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return (_UNKNOWN **)WPP_RECORDER_SF_(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              5u,
                              2u,
                              0x6Fu,
                              (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids);
    }
  }
  return result;
}
