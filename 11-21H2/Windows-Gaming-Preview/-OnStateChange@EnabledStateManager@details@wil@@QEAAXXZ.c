/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800079EC
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CAXPEAX@Z @ 0x180007B90 (-_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  volatile signed __int32 **Ptr; // r9
  volatile signed __int32 **v4; // rax
  int v5; // eax

  if ( LOBYTE(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    Ptr = (volatile signed __int32 **)this[10].Ptr;
    v4 = (volatile signed __int32 **)this[11].Ptr;
    if ( Ptr != v4 )
    {
      do
      {
        _InterlockedAnd(Ptr[1], *(_DWORD *)Ptr != 0 ? -3 : -520);
        Ptr += 2;
      }
      while ( Ptr != v4 );
      Ptr = (volatile signed __int32 **)this[10].Ptr;
    }
    this[11].Ptr = Ptr;
    v5 = 1;
    if ( HIDWORD(this[3].Ptr) != -1 )
      v5 = HIDWORD(this[3].Ptr) + 1;
    HIDWORD(this[3].Ptr) = v5;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
