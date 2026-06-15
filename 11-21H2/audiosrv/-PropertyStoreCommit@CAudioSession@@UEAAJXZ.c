/*
 * XREFs of ?PropertyStoreCommit@CAudioSession@@UEAAJXZ @ 0x1800DA070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreCommit(CAudioSession *this)
{
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x58u, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 56LL))(*((_QWORD *)this + 52));
}
