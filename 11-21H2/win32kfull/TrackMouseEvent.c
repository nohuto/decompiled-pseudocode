/*
 * XREFs of TrackMouseEvent @ 0x1C00F8E74
 * Callers:
 *     NtUserTrackMouseEvent @ 0x1C00F8CF0 (NtUserTrackMouseEvent.c)
 *     xxxMNMouseMove @ 0x1C0232340 (xxxMNMouseMove.c)
 * Callees:
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C014C240 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall TrackMouseEvent(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int SystemArgument1; // edx

  v2 = *(_QWORD *)(gptiCurrent + 456LL);
  result = ValidateHwnd(*(_QWORD *)(a1 + 8));
  if ( result )
  {
    if ( result == *(_QWORD *)(v2 + 184)
      && (v4 = *(_DWORD *)(a1 + 4), (*(_DWORD *)(v2 + 192) != 1) == (((unsigned int)v4 >> 4) & 1)) )
    {
      if ( v4 < 0 )
      {
        if ( (v4 & 2) != 0 )
        {
          *(_DWORD *)(v2 + 48) &= ~0x80u;
          v4 = *(_DWORD *)(a1 + 4);
        }
        if ( (v4 & 1) != 0 && (*(_DWORD *)(v2 + 48) & 0x40) != 0 )
        {
          FindTimer(result, 65530, 2, 1, 0LL);
          *(_DWORD *)(v2 + 48) &= ~0x40u;
        }
      }
      else
      {
        if ( (v4 & 2) != 0 )
        {
          *(_DWORD *)(v2 + 48) |= 0x80u;
          v4 = *(_DWORD *)(a1 + 4);
        }
        if ( (v4 & 1) != 0 )
        {
          *(_DWORD *)(v2 + 48) |= 0x40u;
          SystemArgument1 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(v2 + 212) = SystemArgument1;
          if ( ((SystemArgument1 + 1) & 0xFFFFFFFE) == 0 )
            SystemArgument1 = (int)WPP_MAIN_CB.Dpc.SystemArgument1;
          *(_DWORD *)(v2 + 212) = SystemArgument1;
          ResetMouseHover((struct tagDESKTOP *)v2, *(struct tagPOINT *)(*(_QWORD *)(result + 16) + 764LL));
        }
      }
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 4);
      if ( (v5 & 0x80000002) == 2 )
        PostMessage(result, ((v5 & 0x10) == 0) | 0x2A2, 0, 0);
    }
    return 1LL;
  }
  return result;
}
