/*
 * XREFs of ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180055410
 * Callers:
 *     <none>
 * Callees:
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180022708 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 *     WPP_SF_qdd @ 0x1800E40B8 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::RemoveClientReference(CAudioSession *this, __int64 a2)
{
  bool v3; // di

  v3 = 0;
  if ( (_BYTE)a2 )
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 83, 0xFFFFFFFF) == 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 82, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(CAudioSession *, __int64, __int64))(*(_QWORD *)this + 256LL))(this, a2, 0xFFFFFFFFLL);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids);
    }
LABEL_6:
    CAudioSession::PostStateCheckExpirationWork(this);
    return 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      61LL,
      &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      this,
      *((_DWORD *)this + 82),
      *((_DWORD *)this + 83));
  }
  if ( v3 )
    goto LABEL_6;
  return 0LL;
}
