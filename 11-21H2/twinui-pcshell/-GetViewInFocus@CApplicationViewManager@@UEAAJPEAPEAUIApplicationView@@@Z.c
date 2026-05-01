/*
 * XREFs of ?GetViewInFocus@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18014DC30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CApplicationViewManager::GetViewInFocus(RTL_SRWLOCK *this, struct IApplicationView **a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct IApplicationView **v5; // rsi
  unsigned int v6; // edi

  *a2 = 0LL;
  v2 = this + 66;
  AcquireSRWLockShared(this + 66);
  v5 = (struct IApplicationView **)&this[71];
  if ( !this[71].Ptr || ((__int64)this[72].Ptr & 1) != 0 )
  {
    v6 = -2147023728;
  }
  else
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&this[71]);
    v6 = 0;
    *a2 = *v5;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v6;
}
