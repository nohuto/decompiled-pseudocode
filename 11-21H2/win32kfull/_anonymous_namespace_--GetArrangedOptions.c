/*
 * XREFs of _anonymous_namespace_::GetArrangedOptions @ 0x1C024AA70
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C024B6D4 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 */

__int64 __fastcall anonymous_namespace_::GetArrangedOptions(_DWORD *a1, struct tagWND *a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  char v5; // di
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __m128i v10; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 1;
  v10 = *(__m128i *)WindowMargins::ReduceRect(&v10, a2, a1);
  if ( _mm_cvtsi128_si32(v10) == *a3 )
  {
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        v8,
        4,
        25,
        32,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
    }
    v4 = 2;
  }
  if ( v10.m128i_i32[2] == a3[2] )
  {
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        v8,
        4,
        25,
        33,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
    }
    v4 |= 8u;
  }
  if ( v10.m128i_i32[1] == a3[1] )
  {
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        v8,
        4,
        25,
        34,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
    }
    v4 |= 4u;
  }
  if ( v10.m128i_i32[3] == a3[3] )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = v5;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        v8,
        4,
        25,
        35,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
    }
    v4 |= 0x10u;
  }
  return v4;
}
