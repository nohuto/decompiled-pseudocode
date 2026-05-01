/*
 * XREFs of ?get_ActivationValueSetReference@CActivatedEventArgsBase@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18073ACB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsBase::get_ActivationValueSetReference(
        CActivatedEventArgsBase *this,
        struct IInspectable **a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)((char *)this + 120);
  AcquireSRWLockShared((PSRWLOCK)this + 15);
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 7);
  *a2 = (struct IInspectable *)*((_QWORD *)this + 7);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
