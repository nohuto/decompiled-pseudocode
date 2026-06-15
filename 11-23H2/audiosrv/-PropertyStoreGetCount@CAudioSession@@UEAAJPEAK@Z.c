/*
 * XREFs of ?PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z @ 0x1800E22D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreGetCount(CAudioSession *this, unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x50u, (__int64)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 52) + 24LL))(
           *((_QWORD *)this + 52),
           a2);
}
