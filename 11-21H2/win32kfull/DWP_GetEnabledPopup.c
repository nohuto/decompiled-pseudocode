/*
 * XREFs of DWP_GetEnabledPopup @ 0x1C023F45C
 * Callers:
 *     GetActiveTrackPwnd @ 0x1C01DCBDC (GetActiveTrackPwnd.c)
 *     NtUserDWP_GetEnabledPopupOffset @ 0x1C01F2410 (NtUserDWP_GetEnabledPopupOffset.c)
 *     xxxActivateEnabledPopup @ 0x1C023F4F4 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C023F618 (xxxFlashEnabledPopup.c)
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C00B4C0C (_GhostWindowFromHungWindow.c)
 */

_QWORD *__fastcall DWP_GetEnabledPopup(_QWORD *a1)
{
  _QWORD *v1; // rbx
  int v2; // r8d
  _QWORD *i; // rax
  __int64 v5; // rax

  v1 = (_QWORD *)a1[11];
  v2 = 0;
  while ( v1 != a1 )
  {
    if ( v1 )
    {
      if ( *(_QWORD *)(v1[2] + 432LL) == *(_QWORD *)(a1[2] + 432LL) && (*(_BYTE *)(v1[5] + 31LL) & 0x18) == 0x10 )
      {
        for ( i = (_QWORD *)v1[15]; i; i = (_QWORD *)i[15] )
        {
          if ( i == a1 )
          {
            v5 = GhostWindowFromHungWindow((__int64)v1);
            if ( v5 )
              return (_QWORD *)v5;
            return v1;
          }
        }
      }
      v1 = (_QWORD *)v1[11];
    }
    else
    {
      if ( v2 )
        return 0LL;
      v2 = 1;
      v1 = *(_QWORD **)(a1[13] + 112LL);
    }
  }
  return 0LL;
}
