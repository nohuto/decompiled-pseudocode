/*
 * XREFs of ?DoOnCancel@AsyncBase@VisualCapture@Composition@UI@Windows@@QEAAJXZ @ 0x180154DA0
 * Callers:
 *     ?OnCancel@AsyncBase@VisualCapture@Composition@UI@Windows@@UEAAXXZ @ 0x180154890 (-OnCancel@AsyncBase@VisualCapture@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ead6bd751c13bb2cc1f8a483e482d64a___ @ 0x180154B2C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_ead6bd751c13bb2cc1f8a483e482d64a_.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCapture::AsyncBase::DoOnCancel(unsigned __int64 this)
{
  char *v1; // rdi
  struct _RTL_CRITICAL_SECTION **v3; // r14
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  v1 = (char *)(this - 152);
  v3 = (struct _RTL_CRITICAL_SECTION **)(this - 152 + 24);
  v4 = *v3;
  Microsoft::WRL2::ContextSession::BeginApiEntry(*v3);
  if ( (v1[32] & 2) != 0 )
  {
    Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ead6bd751c13bb2cc1f8a483e482d64a___(
      (Microsoft::WRL2::ContextSession *)*v3,
      this & -(__int64)(v1 != 0LL));
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
