/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_45515fc8494d7051ed1d2c04434d8f2b__&_::_scalar_deleting_destructor_ @ 0x180311DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180113290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_45515fc8494d7051ed1d2c04434d8f2b____::_scalar_deleting_destructor_(
        _QWORD *a1,
        volatile int *a2)
{
  char v3; // di
  __int64 v4; // rcx

  v3 = (char)a2;
  v4 = a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(
      v4,
      a2);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (v3 & 1) != 0 )
    operator delete(a1);
  return a1;
}
