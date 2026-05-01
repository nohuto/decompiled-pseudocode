/*
 * XREFs of ?GetViewInFocus@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180046080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CApplicationViewManager::GetViewInFocus(CApplicationViewManager *this, struct IApplicationView **a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v5; // edi

  *a2 = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 528);
  AcquireSRWLockShared((PSRWLOCK)this + 66);
  if ( !*((_QWORD *)this + 71) || (*((_BYTE *)this + 576) & 1) != 0 )
  {
    v5 = -2147023728;
  }
  else
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 71);
    v5 = 0;
    *a2 = (struct IApplicationView *)*((_QWORD *)this + 71);
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
