/*
 * XREFs of ?Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ @ 0x180090EC4
 * Callers:
 *     ?Unregister3DCompositor@@YAHXZ @ 0x18007F8C0 (-Unregister3DCompositor@@YAHXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180003B74 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z @ 0x180090CD0 (-On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z.c)
 */

void __fastcall MPC3DStateHelper::Unregister3DCompositor(PSRWLOCK SRWLock)
{
  DWORD v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( MPC3DStateHelper::On3DCompositorStateChanged(SRWLock, 0) )
  {
    v2 = WaitForSingleObjectEx(SRWLock[9].Ptr, 0xFFFFFFFF, 0);
    if ( v2 != 258 )
    {
      if ( v2 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          2572LL,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v3);
    }
  }
  AcquireSRWLockExclusive(SRWLock);
  v5 = SRWLock;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&SRWLock[3]);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
}
