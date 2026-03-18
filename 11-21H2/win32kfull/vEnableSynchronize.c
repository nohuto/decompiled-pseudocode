/*
 * XREFs of vEnableSynchronize @ 0x1C011C670
 * Callers:
 *     <none>
 * Callees:
 *     UserSetTimer @ 0x1C0243AE8 (UserSetTimer.c)
 */

void __fastcall vEnableSynchronize(__int64 a1)
{
  int v1; // edi
  char v3; // si
  signed __int32 v4; // ett

  v1 = *(_DWORD *)(a1 + 2096);
  if ( (v1 & 0xC0) != 0 )
  {
    if ( (unsigned int)UserIsUserCritSecIn() )
    {
      v3 = 0;
    }
    else
    {
      v3 = 1;
      UserEnterUserCritSec();
    }
    if ( (v1 & 0x80u) != 0 && !++gcSynchronizeTimer )
      gidSynchronizeTimer = UserSetTimer();
    if ( (v1 & 0x40) != 0 )
      ++gcSynchronizeFlush;
    _m_prefetchw((const void *)(a1 + 40));
    do
      v4 = *(_DWORD *)(a1 + 40);
    while ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v4 | 0x800, v4) );
    if ( v3 )
      UserLeaveUserCritSec();
  }
}
