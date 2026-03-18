/*
 * XREFs of ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x1400027CC
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x14000262C (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140003A7C (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x140007EBC (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPortClient::CheckStatus(CPortClient *this, unsigned int a2)
{
  if ( a2 == -1073741769 || a2 == -1073741229 )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 2, 1, 0);
  return a2;
}
