/*
 * XREFs of ?OnRequestedSizeChanged_Callback@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x18008DBB0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ace7520b16fb42aa991f36c245d94adb___ @ 0x18015A84C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_ace7520b16fb42aa991f36c245d94adb_.c)
 */

void __fastcall Windows::UI::Composition::VisualIslandSite::OnRequestedSizeChanged_Callback(
        Windows::UI::Composition::VisualIslandSite *this)
{
  RTL_SRWLOCK *v1; // rdi
  __int64 v3; // rbx

  v1 = (RTL_SRWLOCK *)((char *)this + 288);
  if ( *((_QWORD *)this + 36) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 37);
    if ( v1->Ptr )
      v3 = (__int64)(*((_QWORD *)v1->Ptr + 3) - *((_QWORD *)v1->Ptr + 2)) >> 3;
    else
      v3 = 0LL;
    if ( v1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(v1 + 1);
    if ( v3 )
      Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ace7520b16fb42aa991f36c245d94adb___(*((Microsoft::WRL2::ContextSession **)this + 3));
  }
}
