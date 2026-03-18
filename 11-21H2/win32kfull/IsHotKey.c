/*
 * XREFs of IsHotKey @ 0x1C00F6854
 * Callers:
 *     IsUninterceptable @ 0x1C00F62B4 (IsUninterceptable.c)
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 *     EditionIsHotKey @ 0x1C01E5BC0 (EditionIsHotKey.c)
 * Callees:
 *     GetDesktopView @ 0x1C0078100 (GetDesktopView.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x1C01E5BE0 (WPP_RECORDER_AND_TRACE_SF_DDqq.c)
 */

struct tagHOTKEY * near *__fastcall IsHotKey(int a1, int a2)
{
  struct tagHOTKEY * near *i; // rbx
  int v4; // esi
  __int64 v5; // rbp
  int v7; // edx
  int v8; // r8d
  int v9; // [rsp+20h] [rbp-48h]

  for ( i = (&gphkHashTable)[a2 & 0x7F]; ; i = (struct tagHOTKEY * near *)i[5] )
  {
    if ( !i )
      return i;
    v4 = *((unsigned __int16 *)i + 12);
    if ( v4 == a1 && *((_DWORD *)i + 7) == a2 && !_bittest16((const signed __int16 *)i + 13, 8u) )
      break;
  }
  if ( (*((_DWORD *)*i + 122) & 0xC) != 0 )
    return i;
  v5 = *((_QWORD *)*i + 53);
  if ( GetDesktopView(v5, grpdeskRitInput) )
  {
    if ( (v4 & 0xB) == 0
      && gpqForeground
      && a2 != 7
      && (unsigned int)(a2 - 173) > 6
      && !(unsigned __int8)CheckAccess(v5 + 880, gpqForeground + 424LL) )
    {
      EtwTraceUIPIInputError(*i, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 424LL), 7);
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_DDqq(WPP_GLOBAL_Control->AttachedDevice, v7, v8, gpqForeground, v9);
      }
      return 0LL;
    }
    return i;
  }
  return 0LL;
}
