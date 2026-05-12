/*
 * XREFs of StorpGetExtendedTable @ 0x1C0045AB8
 * Callers:
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 */

__int128 *__fastcall StorpGetExtendedTable(__int64 a1, __int128 **a2)
{
  __int128 *result; // rax
  _DWORD *Adapter; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int128 *)&retaddr;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u) && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      result = (__int128 *)WPP_SF_(
                             (__int64)WPP_GLOBAL_Control->AttachedDevice,
                             0xAu,
                             (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        result = (__int128 *)WPP_SF_(
                               (__int64)WPP_GLOBAL_Control->AttachedDevice,
                               0xBu,
                               (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          result = (__int128 *)WPP_SF_(
                                 (__int64)WPP_GLOBAL_Control->AttachedDevice,
                                 0xCu,
                                 (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
        {
          if ( _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            result = (__int128 *)WPP_SF_(
                                   (__int64)WPP_GLOBAL_Control->AttachedDevice,
                                   0xDu,
                                   (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            result = (__int128 *)WPP_SF_(
                                   (__int64)WPP_GLOBAL_Control->AttachedDevice,
                                   0xEu,
                                   (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
          }
        }
      }
    }
  }
  if ( a2 )
  {
    if ( a1 && (Adapter = RaidpPortGetAdapter(a1)) != 0LL )
    {
      result = (__int128 *)(Adapter + 1110);
      *result = StorportExtensionTable;
      result[1] = xmmword_1C0079810;
      result[2] = xmmword_1C0079820;
      result[3] = xmmword_1C0079830;
      result[4] = xmmword_1C0079840;
      *((_QWORD *)result + 10) = qword_1C0079850;
    }
    else
    {
      result = &StorportExtensionTable;
    }
    *a2 = result;
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    return (__int128 *)WPP_SF_(
                         (__int64)WPP_GLOBAL_Control->AttachedDevice,
                         0xFu,
                         (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
  }
  return result;
}
