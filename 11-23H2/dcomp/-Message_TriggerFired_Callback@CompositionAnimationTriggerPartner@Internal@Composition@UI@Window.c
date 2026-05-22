/*
 * XREFs of ?Message_TriggerFired_Callback@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAAJXZ @ 0x180187308
 * Callers:
 *     ?Thunk_Message_TriggerFired_Callback_62@?$IAnimationTriggerEvent_Receive@VCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180187670 (-Thunk_Message_TriggerFired_Callback_62@-$IAnimationTriggerEvent_Receive@VCompositionAnimationTr.c)
 * Callees:
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_92b999fce92e5260c33bdb73c44d9e6b___ @ 0x180186730 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_92b999fce92e5260c33bdb73c44d9e6b_.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::Message_TriggerFired_Callback(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rsi
  __int64 v3; // rdi
  Microsoft::WRL2::ContextSession *Ptr; // rcx
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = this + 28;
  if ( this[28].Ptr )
  {
    AcquireSRWLockExclusive(this + 29);
    if ( v1->Ptr )
      v3 = (__int64)(*((_QWORD *)v1->Ptr + 3) - *((_QWORD *)v1->Ptr + 2)) >> 3;
    else
      v3 = 0LL;
    if ( v1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(v1 + 1);
    if ( v3 )
    {
      v6[0] = (__int64)v1;
      Ptr = (Microsoft::WRL2::ContextSession *)this[3].Ptr;
      v6[1] = (unsigned __int64)&this[17] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64);
      Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_92b999fce92e5260c33bdb73c44d9e6b___(Ptr, v6);
      LOBYTE(this[19].Ptr) = 1;
    }
  }
  return 0LL;
}
