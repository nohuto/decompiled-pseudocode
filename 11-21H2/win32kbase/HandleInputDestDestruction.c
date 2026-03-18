/*
 * XREFs of HandleInputDestDestruction @ 0x1C003ACA0
 * Callers:
 *     HandleFullWindowDestruction @ 0x1C003AC30 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x1C01E7C30 (HandleBaseWindowDestruction.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003B608 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

void __fastcall HandleInputDestDestruction(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rdi
  __int64 MouseProcessor; // rax
  volatile __int32 *v6; // rdi
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD **)(a1 + 80);
  if ( !gbInDestroyHandleTableObjects
    && !UserIsUserCritSecInExclusive()
    && (!IS_USERCRIT_OWNED_SHARED()
     || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
     && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  if ( (*((_BYTE *)qword_1C0294B68 + dword_1C0294B70 * (unsigned int)(unsigned __int16)*v3 + 25) & 1) == 0 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v7, a2, a3);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
    {
      v6 = (volatile __int32 *)(MouseProcessor + 3576);
      if ( (unsigned __int8)CInputDest::operator==(MouseProcessor + 3576, a1) )
      {
        CInputDest::SetEmpty((CInputDest *)v6);
        _InterlockedExchange(v6 + 30, 0);
      }
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v7);
  }
}
