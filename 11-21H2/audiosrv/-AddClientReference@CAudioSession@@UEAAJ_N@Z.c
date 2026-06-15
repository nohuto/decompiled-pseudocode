/*
 * XREFs of ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x18000FAA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdd @ 0x1800DB85C (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::AddClientReference(CAudioSession *this, char a2)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 82);
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)this + 83);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, this);
  }
  return 0LL;
}
