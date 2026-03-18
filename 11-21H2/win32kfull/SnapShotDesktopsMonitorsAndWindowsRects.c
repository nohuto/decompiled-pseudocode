/*
 * XREFs of SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01D2FA8
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0123098 (xxxRemoteDisconnect.c)
 * Callees:
 *     SnapShotMonitorsAndWindowsRects @ 0x1C01D3060 (SnapShotMonitorsAndWindowsRects.c)
 */

__int64 __fastcall SnapShotDesktopsMonitorsAndWindowsRects(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // esi
  __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  while ( v2 )
  {
    v5 = Win32AllocPoolZInit(48LL, 1919775573LL);
    v6 = (_QWORD *)v5;
    if ( !v5 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    v4 = SnapShotMonitorsAndWindowsRects((struct tagDESKTOP *)v2);
    if ( v4 >= 0 )
    {
      v7 = *(_QWORD **)(a2 + 8);
      if ( *v7 != a2 )
        __fastfail(3u);
      *v6 = a2;
      v6[1] = v7;
      *v7 = v6;
      *(_QWORD *)(a2 + 8) = v6;
    }
    else
    {
      Win32FreePool(v6);
    }
    v2 = *(_QWORD *)(v2 + 32);
  }
  return (unsigned int)v4;
}
