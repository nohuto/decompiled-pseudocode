/*
 * XREFs of ?put_ActivationValueSetReference@CActivatedEventArgsBase@@UEAAJPEAUIInspectable@@@Z @ 0x18073B170
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z @ 0x180139A90 (--4-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsBase::put_ActivationValueSetReference(
        CActivatedEventArgsBase *this,
        struct IInspectable *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)((char *)this + 120);
  AcquireSRWLockExclusive((PSRWLOCK)this + 15);
  Microsoft::WRL::ComPtr<IInspectable>::operator=((__int64 *)this + 7, (__int64)a2);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
