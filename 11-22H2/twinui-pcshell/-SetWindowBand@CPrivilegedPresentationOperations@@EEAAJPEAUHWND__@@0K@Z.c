/*
 * XREFs of ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x1800E07A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetWindowBand(
        CPrivilegedPresentationOperations *this,
        volatile int *a2,
        HWND a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int LastErrorFailHr; // edi
  wil::details *v9; // rcx

  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastErrorFailHr = 0;
  if ( v4 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v4[4].Ptr + 4), a2);
  AcquireSRWLockExclusive(v4 + 6);
  EnableIAMAccess(v4[5].Ptr, 1LL);
  if ( !(unsigned int)SetWindowBand(a2, a3, a4) )
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v9);
  EnableIAMAccess(v4[5].Ptr, 0LL);
  ReleaseSRWLockExclusive(v4 + 6);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v4);
  return LastErrorFailHr;
}
